#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i, res = 0;
    do{
        printf("Podaj liczby: ");
        scanf("%lf", &i);
        if(i>0){
            res += i;
        }

    }while(i != 0);

    printf("suma liczb: %lf", res);
    return 0;
}
