;program to add two numbers
.model small
.stack 100h
.data
.code
Main Proc
    mov bl,2
    mov al,5
    
    add al,bl
    
    mov dl,al
    add dl,48
    mov ah,2
    int 21h
    mov ah,4ch
    int 21h
Main Endp
End Main