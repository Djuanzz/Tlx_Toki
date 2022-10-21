#include <stdio.h>
#include <string.h>

int main(){
    char kata[105];
    int angka;
    scanf("%s", kata);
    scanf("%d", &angka);

    // printf("%c", kata[1]);
    for(int i = 0; i < strlen(kata); i++){
        kata[i] = kata[i] - 26 + angka;

        if(kata[i] < 'a'){
            kata[i] = kata[i] + 26;
        }
    }

    for(int i = 0; i < strlen(kata); i++){
        printf("%c", kata[i]);
    }

    return 0;
}