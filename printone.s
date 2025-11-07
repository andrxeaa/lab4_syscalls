.global _start
_start:
    addi x0,zero,0
    addi a7, x0, 64
    addi a0, x0, 0
    mv a1, t0
    addi a2, x0, 1
    ecall