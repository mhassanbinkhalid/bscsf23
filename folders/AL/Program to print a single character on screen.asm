;Program to print a single character on Screen
.model small
.stack 100h
.data
var1 db 65
.code
Main Proc
mov ax,@data
mov ds,ax

mov dl,var1
mov ah,2
int 21h
mov ah,4ch
int 21h    
Main Endp
End Main