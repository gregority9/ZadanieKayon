#include <stdio.h>
#include <stdint.h>
#include "mymodule.h"



int main() {
    
    

    while(1){
        printf("wyjscie - 0, warn - 1, error - 2\n");
        int a;
        scanf("%d", &a);
        if(a==0) break;
        else if(a == 1){
            uint64_t warning_pc = WARN();
            printf("PC during warn: 0x%lx\n", warning_pc);
        }
        else if(a == 2){
            uint64_t error_pc = ERROR();
            printf("PC during error: 0x%lx\n", error_pc);
        }
        else printf("blad\n");
    }

    return 0;
}