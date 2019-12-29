section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

_ft_strdup
	xor rax,rax
	xor rdx,rdx
	xor rcx,rcx
	call _ft_strlen
	mov rdx,rax
	mov rdi,rdx
	call _malloc
	mov rdi,rsp-8
	
	
	
