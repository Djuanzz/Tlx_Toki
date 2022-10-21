#include <stdio.h>

int main(){
    int a, b, pangkat;
    pangkat = 1;

    scanf("%d", &a);

    for(int i = 1; i <= 17; i++){
        pangkat *= 2;
        if(a == pangkat){
            printf("ya, %d merupakan bilangan pangkat 2", a);
            break;
        }
    }


    if(a == 1){
        printf("ya");
    } else if(a != pangkat){
        printf("bukan, %d bukan bilangan pangkat 2", a);
    }

    return 0;
}