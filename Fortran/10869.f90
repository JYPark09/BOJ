PROGRAM A_PLUS_B
    INTEGER :: A, B
    READ(*,*) A, B

    WRITE(*,"(I0)") A+B
    WRITE(*,"(I0)") A-B
    WRITE(*,"(I0)") A*B
    WRITE(*,"(I0)") A/B
    WRITE(*,"(I0)") MOD(A,B)
END PROGRAM
