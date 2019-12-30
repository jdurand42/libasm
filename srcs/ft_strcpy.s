section .text
	global _ft_strcpy

_ft_strcpy:
	xor rcx,rcx
	xor rdx,rdx
	xor rax,rax
	jmp cpy

cpy:
	cmp [rsi + rcx], BYTE 0x0
	je end
	mov dl,BYTE [rsi + rcx]
	mov BYTE [rdi + rcx],dl
	inc rcx
	jmp cpy

end:
	mov [rdi + rcx],BYTE 0x0
	mov rax,rdi
	ret
