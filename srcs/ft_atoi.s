section .text
	global _ft_atoi

_ft_atoi:
	xor rax,rax
	xor rcx,rcx
	xor rdx,rdx
	xor r8,r8
	mov r8,10
	cmp rdi, BYTE 0x0
	je error
	jmp skip

skip:
	cmp [rdi + rcx],BYTE 0x20
	jne is_number
	inc rcx
	jmp skip

is_number:
	cmp [rdi + rcx], BYTE 0x2f
	jle end
	cmp [rdi + rcx], BYTE 0x3a
	jge end
	mul r8   ; on garde probablement au moins mal le contenu de rax et il faut utiliser un tanpon
	mov dl,[rdi + rcx]
	sub dl,0x30
	add rax,rdx
	inc rcx
	jmp is_number
	
end:
	ret	

error:
	mov rax,0x0
	ret
