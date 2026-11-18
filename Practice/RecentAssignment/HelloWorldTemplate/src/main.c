#include <stdio.h>
#include "usart.h"

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    uart_init();
    io_redirect();

    int a, b;

    printf("Enter two integers:\n");

    if (scanf("%d %d", &a, &b) == 2)
    {
        printf("Printing a and b: %d and %d\n", a, b);

        swap(&a, &b);

        printf("After calling the function, printing a and b: %d and %d\n",
               a, b);
    }
    else
    {
        printf("Invalid input.\n");
    }

    while (1)
    {
    }
}