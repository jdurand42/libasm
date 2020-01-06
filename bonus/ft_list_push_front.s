section .text
	global _ft_list_push_front

_ft_list_push_front:
	xor rax,rax
	xor rbx,rbx
	xor rax,rax
	; first checks
	cmp rdi,0x0
	je end
	; check if first elem or not
	cmp [rdi],BYTE 0x0
	je end
	mov rbx,[rdi]
	;

loop:
	cmp [rbx],

end:
	ret
