section .data
	message db 'Hello, Holberton', 0Ah, 0
	format db '%s', 0Ah, 0

section .text
	global main

extern printf

main:
	; prepare arguments for printf
	mov rdi, format
	mov rsi, message
	xor rax, rax
