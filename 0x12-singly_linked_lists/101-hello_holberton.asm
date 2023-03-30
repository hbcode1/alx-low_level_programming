section .text; to hold the executable code of the program
default rel; set relocation to ralative addressing
extern printf; declare extern function to be linked
global main; declare main as Entry point
main:; Entry point
push rbp; pass arguments to function

mov rdi, format; set the first argument
mov rsi, string; set the second argument
mov rax, 0; store the return value to 0


call printf wrt ..plt; call the printf function

pop rbp; retrieve arguments passed to function

mov rax,0; store 0 as return value
ret; return from function
section .data; define data section
string: db "Hello, Holberton", 10, 0
format: db "%s", 0
