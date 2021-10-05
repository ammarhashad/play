#include <stdio.h>
#include <cs50.h>

int print_w(int n);
int main ()
{
    int n = get_int("enter your n : ");
    printf("the y is : %i",print_w(n));
}
int print_w(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * print_w(n - 1);
}