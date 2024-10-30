   ;Program to take string from a user and print it 
   .model small
   .stack 100h
   .data
   var1 db 50dup("$")
   .code
   Main Proc
        mov ax,@data
        mov ds,ax
        
        mov cx,50
        l1:
        mov ah,1
        int 21h
   
        
        cmp al,13
        je jump
        loop l1
        
        jump:
        mov var1,al
        mov ah,9
        int 21h
        mov ah,4ch
        int 21h
        
        
    Main Endp
   End Main