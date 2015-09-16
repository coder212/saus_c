#include <stdio.h>
#include <string.h>

int main(){

    char s[40],b[40];
    printf ("masukkan huruf yang akan dibalikan :");
    scanf("%s",s);
     if(s[0]=='n' && s[1]=='g'){
         for(int i = strlen(s); i >= 2; i--){
             printf("%c",s[i]);
         }
         printf("ng");
    }else if(s[strlen(s)-1]=='g'&& s[strlen(s)-2]=='n'){
          printf("ng");
          for(int i=strlen(s)-3;i>=0;i--){
              printf("%c",s[i]);
          }
    }
    else{
        for(int i=strlen(s);i >= 0;i--){
       
            int j = 0;
            b[j]=s[i];
            printf("%s",b);
            j++;
       }
    }

   
   printf("\n");
   return 0;
}
