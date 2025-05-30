#include <stdio.h>

int main(){
    int i;
    // BASE
    // for(i = 0; i < 6; i++){
    //     printf("%d",i);
    // }

    // BREAK
    // for(i = 0; i < 6; i++){
    //     if (i == 2){
    //         break;
    //     }
    //     printf("%d",i);
    // }

    // CONTINUE
    for(i = 0; i < 6; i++){
        if (i == 2){
            continue;
        }
        printf("%d",i);
    }
    

}