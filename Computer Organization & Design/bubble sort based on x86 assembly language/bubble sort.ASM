assume cs:code

data segment

        dw 59h,64h,7ah,50h,42h,31h,34h,30h,31h,31h,30h,32h,37h,24h
        
        dw 20h,20h,20h,20h,20h,20h,20h,20h,24h,24h,24h,24h,24h,24h

data ends


code segment
        
        start : mov ax,data
                mov ds,ax
                mov ah,09h
                mov dx,0h
                int 21h
                mov dl,0ah
                mov ah,2
                int 21h
                mov ah,2ch
                int 21h
                mov bx,020h
                add [bx],ch
                add [bx+2],cl
                add [bx+4],dh
                add [bx+6],dl              

                mov dx,0018h
        
        outl :	mov cx,dx
                mov bx,0000h

        seq :	mov ah,[bx]
                mov al,[bx+2]
                cmp ah,al
                ja short bigger

        ctn :   add bx,2
                cmp bx,cx
                jne seq
                sub dx,2
                cmp dx,0
                je suc
                jmp outl

        bigger: mov [bx+2],ah
                mov [bx],al
                jmp short ctn

        suc :   mov ah,09h
                mov dx,0h
                int 21h
                mov dl,0ah
                mov ah,2h
                int 21h
                mov ah,2ch
                int 21h
                mov bx,020h
                add [bx+8],ch
                add [bx+10],cl
                add [bx+12],dh
                add [bx+14],dl                
                mov dx,020h
                mov ah,09h
                int 21h
                mov ah,4ch
                int 21h
code ends

end start
