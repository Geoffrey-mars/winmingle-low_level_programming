

; File: 101-hello_winmingle.asm
; Description: Prints "Hello, WINMINGLE" using printf (64-bit Linux)

global main        ; Entry point for linking with C
extern printf      ; Call C's printf

section .data
msg db "Hello, WINMINGLE", 0Ah, 0 ; 0Ah = newline, 0 = null terminator

section .text
main:
    ; Pass the address of the string as first argument (RDI)
    mov rdi, msg       ; First argument: pointer to string
    xor rax, rax       ; Clear RAX for variadic functions (printf)
    call printf        ; Call printf
    xor eax, eax       ; Return 0
    ret

section .note.GNU-stack noalloc noexec nowrite progbits
