#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("podaj liczbe: ");
    scanf("%d", &x);

    if(x%2==0)
        printf("liczba parzysta\n", x);
    else
        printf("liczba nie parzysta\n");
    return 0;
}
