;program to take a capital letter from user and convert it into a small letter
.model small
.stack 100h
.data
.code
Main Proc
    mov ah,1
    int 21h
    mov dl,al
    add dl,32
    mov ah,2
    int 21h
    mov ah,4ch
    int 21h
Main Endp
End Main