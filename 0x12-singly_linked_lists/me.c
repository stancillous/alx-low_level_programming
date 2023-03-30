section .data
    msg db "Hello, Holberton", 0Ah ; message to print (with newline character)
    len equ $-msg ; length of the message (excluding null-terminator)

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4 ; write system call number
    mov ebx, 1 ; file descriptor (stdout)
    mov ecx, msg ; pointer to message to write
    mov edx, len ; length of message
    int 0x80 ; call the kernel to perform the write

    ; exit with status code 0
    mov eax, 1 ; exit system call number
    xor ebx, ebx ; exit status code
    int 0x80 ; call the kernel to exit

