  ;program to take a small letter from user and convert it into a capital letter
.model small
.stack 100h
.data
.code
Main Proc
    mov ah,1
    int 21h
    mov dl,al
    sub dl,32
    mov ah,2
    int 21h
    mov ah,4ch
    int 21h
Main Endp
End Main