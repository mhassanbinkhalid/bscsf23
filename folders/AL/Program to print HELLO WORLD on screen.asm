;program to print Hello World on screen
.model small
.stack 100h
.data
var1 db "HELLO WORLD$"
.code
Main Proc
    mov ax,@data
    mov ds,ax
    
    mov dl,offset var1
    
    mov ah,9
    int 21h
    mov ah,4ch
    int 21h
Main Endp
End Main