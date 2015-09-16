#include <stdio.h>
#include <string.h>

void sapaan(){

    printf("Kata komputer 0.1.0\n");
    printf("by arbaun zuhdi ma'arif\n");

}

void garis(){

    printf("%s\n","==================================================================================");

}

void tobiner(int x){
     
     if(x> 0){

        tobiner(x/2);
        printf("%d",x%2);
     }
}

int main(){
    
    char ch[500];
    int b;
    sapaan();
    garis();
    printf("masukkan kalimat yang akan di translate ke bahasa komputer: ");
    gets(ch);
    printf("%s\n",ch);

    for(int i =0;i < strlen(ch);i++){

        b= (int)ch[i];
        tobiner(b);

    }

    printf("\n");
    garis();
    return 0;
}
