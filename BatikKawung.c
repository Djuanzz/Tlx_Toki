#include <stdio.h>

int main(){
    int ukuran, angka;
    char huruf;
    scanf("%d %c %d", &ukuran, &huruf, &angka);

    int matriks[ukuran][ukuran];
    for(int i = 0; i < ukuran; i++){
        for(int j = 0; j < ukuran; j++){
            if(matriks[i] == matriks[j]){
                printf("%d ", angka);
            } else if(matriks[i] == matriks[ukuran - j - 1]){
                printf("%d ", angka);
            } else {
                printf("%c ", huruf);
            }
        }
        printf("\n");
    }

    return 0;
}   