;Program to Print Capital and Small letters
.model small
.stack 100h
.data
.code
Main Proc
    mov cx,26
    mov dl,65
   l1: 
   mov ah,2
   int 21h
   
   Inc dl
   loop l1
   
   mov dl,10
   mov ah,2
   int 21h
   
   mov dl,13
   mov ah,2
   int 21h
   
   mov cx,26
   mov dl,97
   l2:
   mov ah,2
   int 21h
   Inc dl
   loop l2
   
   mov ah,4ch
   int 21h
Main Endp
End Main