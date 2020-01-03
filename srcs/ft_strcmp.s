section .text
	global _ft_strcmp

_ft_strcmp:
	xor rcx,rcx
	xor rax,rax
	xor rdx,rdx
	jmp ft_cmp

ft_cmp:
	mov dl,[rdi + rcx]
	cmp dl, BYTE 0x0
	je end
	cmp [rsi + rcx], BYTE 0x0
	je end
	cmp dl,[rsi + rcx]
	jne end
	inc rcx
	jmp ft_cmp

end:
	cmp dl,[rsi + rcx]
	jb rsi_is_greater
	sub dl,[rsi + rcx]
	cmp dl,0
	jne rsi_is_smaller
	ret

rsi_is_smaller:
	add rax,1
	ret

rsi_is_greater:
	sub rax,1
	ret
