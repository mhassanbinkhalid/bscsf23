;Program to print two different strings on two different lines
.model small
.stack 100h
.data
var1 db "MY NAME IS MUHAMMAD HASSAN$"
var2 db "I AM A MUSLIM$"
.code
Main Proc
    mov ax,@data
    mov ds,ax
    
    mov dl,offset var1
    mov ah,9
    int 21h
           mov dl,10 
           mov ah,2
           int 21h
           mov dl,13
           mov ah,2
           int 21h
           
    mov dl,offset var2
    mov ah,9
    int 21h
    mov ah,4ch
    int 21h
Main Endp
End Main