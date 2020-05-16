#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Podaj liczbe: ");
    scanf("%d", &i);

    if(i >=1 && i <= 9){
        printf("Podana liczba jest jednocyfrowa: %d", i);
    }
    else if(i >= 10 && i <= 99){
        printf("Podana liczba jest dwucyfrowa: %d", i);
    }
    else if(i >= 100 && i <= 999){
        printf("Podana liczba jest trzycyfrowa: %d", i);
    }
    else{
        printf("Podana liczba jest z poza zakresu");
    }
    return 0;
}
