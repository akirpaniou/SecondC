#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    do{
        printf("czy lubisz programowac(t/n)?");
        x=getchar();
    }while(x!='t');
    return 0;
}
