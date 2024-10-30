;Program to print numbers from 0-9
.model small
.stack 100h
.data
var1 db 0,1,2,3,4,5,6,7,8,9
.code
Main Proc
mov ax,@data
mov ds,ax

mov si,offset var1
mov cx,10

l1:
mov dl,[si]
add dl,48
mov ah,2
int 21h
Inc si
loop l1

mov ah,4ch
int 21h  

Main Endp 
End Main
