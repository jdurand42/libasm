section .text
	global _ft_list_push_front
	extern _malloc

_ft_list_push_front:
	xor rax,rax
	xor rbx,rbx
	xor rax,rax
	; first checks
	cmp rdi,0x0
	je end

	; creating new elem with lst new
	push rdi
	mov rdi,8
	call _malloc
	pop rdi
	cmp rax,0x0
	je end
	mov [rax],rsi
	mov [rax + 8],BYTE 0x0
	; checking if first elem and saving rdi
	cmp BYTE [rdi],BYTE 0x0
	je first_elem

	; check if first elem or not
	;mov rbx,[rdi]
	;
	ret

first_elem:
	mov [rdi],rax
	ret

end:
	ret
