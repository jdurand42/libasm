section .text
	global _ft_list_size

_ft_list_size:
	xor rax,rax
	xor rbx,rbx
	cmp rdi,BYTE 0x0 ; comp t_list with null
	je end
	add rax,0x1
	jmp count

count:
	cmp [rdi + 8],BYTE 0x0 ; comp t_list->next with null
	je end
	mov rdi,QWORD [rdi + 8]
	add rax,0x1
	jmp count

end:
	ret
