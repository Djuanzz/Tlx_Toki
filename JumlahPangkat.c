#include <stdio.h>

int jumlah(int n){
    if(n == 0){
        return 0;
    }

    return n*n + jumlah(n-1);
}
int main(){
    int oke;
    scanf("%d", &oke);
    printf("%d", jumlah(oke));
    return 0;
    /*
    1 2  3  4  5 (baris ke-)
    1 5 14 30 55 
    baris ke 4 merupakan 4^2 + 3^2 + 2^2 + 1^2
    baris ke 4 16 + 9 + 4 + 1 = 30
    */

}