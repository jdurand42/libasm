section .text
	global _ft_strlen

_ft_strlen:
	xor rcx,rcx
	xor rax,rax
	xor rdx,rdx
	jmp count

count:
	mov dl,[rdi + rcx]
	cmp dl,BYTE 0x0
	je end
	inc rcx
	jmp count

end:
	mov rax,rcx
	ret


