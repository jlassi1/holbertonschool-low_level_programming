
        extern	printf

        section .data

msg:	db "Hello, Holberton", 0
fmt:    db "%s", 10

        section .text

        global main
main:
    mov  rsi, msg
	mov  rdi, fmt
	mov  rax, 0
	call printf

	mov eax, 0
	ret

