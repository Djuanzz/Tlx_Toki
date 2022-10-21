#include <stdio.h>
 
int main(void) {
	int n, kasus;

    scanf("%d", &kasus);
    for(int i = 1; i <= kasus; i++){
        
        scanf("%d", &n);
        int ulang = n;
        int temp = 0;
        int nol = 0;
        

        while(n) {
            temp = temp * 10 + n % 10;
            n = n/10;
        }
    
        // while(ulang != 0 && ulang % 10 == 0){
        // 	ulang = ulang / 10;
        // 	nol++;
        // }
    
        for(int i = 0; i < nol; i++){
            printf("0");    
        }
    
        printf("%d\n", temp);
    }
	return 0;
}
