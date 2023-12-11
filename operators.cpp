#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    printf("arithmetic\n");
    printf("sum = %d\n", a + b);
    printf("sub = %d\n", a - b);
    printf("product = %d\n", a * b);
    printf("division = %d\n", a / b);
    printf("remainder = %d\n", a % b);
    printf("assignment operators");
    printf("a+=b = %d\n", a += b);
    printf("a-=b = %d\n", a -= b);
    printf("a*=b = %d\n", a *= b);
    printf("a/=b = %d\n", a /= b);
    return 0;
}