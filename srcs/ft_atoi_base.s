section .text
	global _ft_atoi
	extern _ft_strlen

; gere seulement les espaces et ne gere pas signe +- pour l'instant

_ft_atoi_base:
	xor rax,rax
	xor rcx,rcx
	xor rdx,rdx
	xor r8,r8
	cmp rdi, BYTE 0x0
	je error
	push rcx
	xor rcx,rcx
	jmp check_base

check_base:
	cmp rsi,BYTE 0x0
	je error
	push rdi
	mov rdi,rsi
	call _ft_strlen
	cmp rax,2
	jl error
	mov r8,rax ; setup base_len in r8
	pop rdi ; get str back
	mov rdx,rcx+1
	jmp check_validity
	
check_validity:
	cmp rcx,r8-1 ; not sure about my incs
	je skip
	cmp rdx,r8
	je reset_rdx
	cmp BYTE [rsi + rcx],BYTE [rsi + rdx]
	je error
	inc rdx
	jmp check_validity

reset_rdx:
	inc rcx
	mov rdx,rcx+1
	jmp check_validity

skip:
	pop rcx
	cmp [rdi + rcx],BYTE 0x20
	jne number
	inc rcx
	jmp skip

motor:
	; cmp [rdi + rcx], BYTE 0x2f
	; jle end
	; cmp [rdi + rcx], BYTE 0x3a
	; jge end
	mul r8
	xor rbx,rbx
	jmp get_number
	
get_number:
	cmp BYTE [rsi + rcx],[rdi + rbx]
	je is_of_base
	inc rbx
	cmp rbx,r8
	jl _get_number
	cmp rbx,r8
	je end

is_of_base:
	mov dl,rbx
	sub dl,0x30
	add rax,rbx
	inc rcx
	jmp motor
	
end:
	ret	

error:
	mov rax,0x0
	ret
