;Program to print your name
.model small
.stack 100h
.data
var1 db "H"
var2 db "A"
var3 db "S"
var4 db "S"
var5 db "A"
var6 db "N"

.code 
Main Proc
    mov ax,@data
    mov ds,ax
    
    mov dl,var1
    call print
    mov dl,var2
    call print
    mov dl,var3
    call print
    mov dl,var4
    call print
    mov dl,var5
    call print
    mov dl,var6
    call print
    mov ah,4ch
    int 21h
Main Endp
print Proc
    mov ah,2
    int 21h
    
    ret
print Endp
End Main