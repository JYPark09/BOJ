#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int g = gcd(A, B);
    int l = A * B / g;

    printf("%d\n%d", g, l);
}
