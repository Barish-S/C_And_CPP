#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10;
    int b=15;
    do{
        printf("Increment : %d\n",a);
        a++;
    }while(a<b);
}