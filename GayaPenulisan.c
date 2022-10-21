#include <stdio.h>
#include <string.h>

int main(){
    char kata[105];
    scanf("%s", kata);

    for(int i = 0; i < strlen(kata); i++){
        if(kata[i] >= 'A' && kata[i] <= 'Z'){
            kata[i] += 32;
        }
    }
    for(int i = 0; i < strlen(kata); i++){
        
        if(kata[i] == '_'){
            kata[i] = kata[i+1] - 32;
            for(int j = i; j < strlen(kata); j++){
                kata[j+1] = kata[j+2];
            }
        }
    }

    for(int i = 0; i < strlen(kata); i++){
        printf("%c", kata[i]);
    }
    return 0;
    /*
    input  : super_vin_hebat
    output : superVinHebat
    */
}