#include <stdio.h>
#include <string.h>

void tobiner(int x){
     
     if(x> 0){

        tobiner(x/2);
        printf("%d",x%2);
     }
}

int main(){
    
    char ch[500];
    int b;
    printf("masukkan kata yang akan di konvert jadi angka decimal ,biner dan hexa: ");
    gets(ch);
    printf("Ascii\tdecimal\tbiner\thexadecimal\toktal\n");
    for(int i =0;i < strlen(ch);i++){

        b= (int)ch[i];
        printf("%c\t",b);
        printf("%d",b);
        printf("\t");
        tobiner(b);
        if(b==32)printf("\t");
        printf(" ");
        printf("\t%x",b);
        printf("\t%o\n",b);
    }
    return 0;
}

