#include <stdio.h>

int faktorialganjilgenap(int n);

int main(){
    int angka, hasil;

    scanf("%d", &angka);
    hasil = faktorialganjilgenap(angka);

    printf("%d", hasil);

    return 0;
}

int faktorialganjilgenap(int n){
    int a;
    a = n;

    if(a % 2 == 0){
        a = n / 2;
    }

    if(n == 1){
        return n;
    }

    return a * faktorialganjilgenap(n - 1);
}
