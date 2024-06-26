#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int toh(int n, char a, char b, char c)
{
    if (n > 0)
    {
        toh(n - 1, a, b, c);
        printf("From %d to %d", a, c);
        toh(n - 1, b, a, c);
    }
}
int main()
{
    printf("%d\n", fib(33));
    printf("%d\n", toh(9, "a", "v", "b"));
    return 0;
}
