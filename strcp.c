#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    
    char a[1024];
    static int test_val = -72;
    if(argc <2){
        
        printf("penggunaan: %s <kata yang akan ditampilkan>\n",argv[0]);
        exit(0);
    }

    strcpy(a,argv[1]);
    printf("penggunaan control inputan yang benar adalah:\n");
    printf("%s",a);
    printf("\npenggunaan control inputan yang salah adalah:\n");
    printf(a);
    printf("\n");
    printf("[*] test_val @ 0x%08x = %d 0x%08x\n",&test_val,test_val,test_val);
    exit(0);
}
