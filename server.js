const express = require("express");
const archiver = require("archiver");
const path = require("path");
const fs = require("fs");
const bodyParser = require("body-parser");

const app = express();
const PORT = 80;

// Serve static files
app.use("/static", express.static("static"));

// Parse URL-encoded data (form data)
app.use(bodyParser.urlencoded({ extended: true }));

// Serve the login page
app.get("/login", (req, res) => {
    res.sendFile(path.join(__dirname, "/static/login.html")); // Ensure login.html is correctly located
});

// Handle login form submission
app.post("/form", (req, res) => {
    const { email, password } = req.body;

    // Check if email and password are both 'admin'
    if (email === "admin@admin" && password === "admin") {
        res.sendFile(path.join(__dirname, "/static/content.html")); // Serve the content page
    } else {
        res.status(401).send("Invalid credentials. Please go back and try again.");
    }
});

// Download folder route
app.get("/download-folder/:folderName", (req, res) => {
    const folderName = req.params.folderName;
    const folderPath = path.join(__dirname, "folders", folderName);
    const outputPath = path.join(__dirname, `${folderName}.zip`);

    if (!fs.existsSync(folderPath)) {
        return res.status(404).send("Folder not found");
    }

    const output = fs.createWriteStream(outputPath);
    const archive = archiver("zip", { zlib: { level: 9 } });

    output.on("close", () => {
        res.download(outputPath, `${folderName}.zip`, (err) => {
            if (err) console.error("Download error:", err);
            fs.unlinkSync(outputPath);
        });
    });

    archive.on("error", (err) => res.status(500).send({ error: err.message }));

    archive.pipe(output);
    archive.directory(folderPath, false);
    archive.finalize();
});

app.listen(PORT, "0.0.0.0", () => {
    console.log(`THE SERVER IS RUNNING ON PORT ${PORT}`);
});
