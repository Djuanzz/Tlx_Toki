#include <stdio.h>

int main(){
    int baris, kolom;
    int bilangan[110][110];

    scanf("%d", &baris);
    scanf("%d", &kolom);

    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            scanf("%d", &bilangan[i][j]);
        }
    }

    for(int i = 1; i <= kolom; i++){
        for(int j = baris; j >= 1; j--){
            printf("%d ", bilangan[j][i]);
        }
        printf("\n");
    }


    return 0;
}