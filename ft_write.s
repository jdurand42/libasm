.section
	_global ft_write

_ft_write
	push rbp
	mov rsp, rbp
	mov rbx,[rsp-128]
	mov rcx,rsp-64
	mov rdx[rsp]
	call 0x4
	leave
	ret

	
