PROGRAM A_PLUS_B
    INTEGER :: A, B, C
    READ(*,*) A, B, C

    WRITE(*,"(I0)") MOD(A+B, C)
    WRITE(*,"(I0)") MOD(MOD(A, C) + MOD(B, C), C)
    WRITE(*,"(I0)") MOD(A*B, C)
    WRITE(*,"(I0)") MOD(MOD(A, C) * MOD(B, C), C)
END PROGRAM
