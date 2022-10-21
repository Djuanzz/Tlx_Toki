#include <stdio.h>

int main(){
    int kasus, maks, cek = 0;
    scanf("%d", &kasus);
    scanf("%d", &maks);
    int angka[kasus];
    int indeks[kasus];

    for(int i = 0; i < kasus; i++){
        scanf("%d", &angka[i]);
        indeks[i] = i;
    }

    for(int i = 0; i < kasus; i++){
        if(maks == angka[i]){
            printf("%d", indeks[i]);
            cek++;
            break;
        }
    }

    if(cek == 0){
        printf("-1");
    }

    return 0;
}