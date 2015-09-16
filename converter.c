#include <stdio.h>
#include <string.h>

void sapa(){
    printf("Selamat datang di konverter bilangan\n");
    printf("by sam korep\n");
}
void clasi(){
    int i;
    for (i=0; i < 100;i++){
        printf("\n");
    }
}
void binary(int b){
    if ( b > 0){
        binary(b/2);
        printf("%d",b%2);
    }
}
int pkt (int b, int c){
   
   int poin = 1,i;
   for (i=0;i<c;i++){
       poin *= b;
   }
   return poin;
}
int cekdes(int c){
    
    if(c < 0){
        return 1;
    }
    return 0;
}
int cekbin(char str[], int *c){
    int i,des = 0;
    for(i=0;i < strlen(str);i++){
        if((str[i] - '0' !=1) && (str[i] - '0' !=0)){
            return 1;
        }
    }

    for (i =0; i <  strlen(str) ; i++)
    {
        if (str[i] - '0' == 1) {
            des = des + pkt(2,strlen(str)-1-i);
        }
    }
    *c = des;
    return 0;
}
 
int cekokt(char str[],int *c) {
    int i,des=0;
     
    
    if ((strlen(str) >= 6) && (str[0] > 49)) {
        return 1;
    }
     
    for (i = 0; i < strlen(str); i++)
    {
        if (!((str[i] > 47 ) && (str[i] < 56)))
        {
            return 1;
        }
    }
    
    for (i =0; i <  strlen(str) ; i++)
    {
        des = des + (str[i] - '0') * pkt(8,strlen(str)-1-i);
    }
    *c = des;
    return 0;
}
 
int cekhex(char str[],int *c) {
    int i,des=0;
     
    
    for (i = 0; i < strlen(str); i++)
    {
        if (! ( ((str[i] > 47 ) && (str[i] < 58)) || ((str[i] > 96 ) && (str[i] < 103)) || ((str[i] > 64 ) && (str[i] < 71)) ))
        {
            return 1;
        }
    }
    
    for (i =0; i < strlen(str) ; i++)
    {
        if ((str[i] >= '0' ) && (str[i] <= '9')) {
            des = des + (str[i] - '0') * pkt(16,strlen(str)-1-i);
        }
        else if ((str[i] > '@' ) && (str[i] < 'G')) {
            des = des + (str[i] - 55) * pkt(16,strlen(str)-1-i);
        }
        else if ((str[i] > 96 ) && (str[i] < 'g')) {
            des = des + (str[i] - 87) * pkt(16,strlen(str)-1-i);
        }
    }
    *c = des;
    return 0;
}
 
int main() {
    int c,des;
    int d;
    char oct[6],bin[16],hex[4],lagi;
    sapa();
    do {
        printf("\n\n===============================\nBasis Angka Masukan\n1. Desimal\n2. Biner\n3. Oktal\n4. Heksadesimal\nChoose: ");
        scanf("%d",&d);
        switch(d) {
           case 1:
                printf("Masukan angka desimal (Maksimal 65535): ");
                scanf("%d",&des);
                 if(cekdes(des) != 0) {
                      printf("Input salah");
                      break;
                 }
                 printf("Biner: ");
                 binary(des);
                 printf("\nOktal: %o",des);
                 printf("\nHexa: %X",des);
                 break;
            case 2:
                 printf("Masukan angka biner (Maksimal 16 bit): ");
                 scanf("%s",bin);
                 if(cekbin(bin,&des) != 0) {
                     printf("Input salah");
                     break;
                 }
                 printf("\nDesimal: %d",des);
                 printf("\nOktal: %o",des);
                 printf("\nHexa: %X",des);
                 break;
            case 3:
                 printf("Masukan angka Oktal (Maksimal 177777): ");
                 scanf("%s",oct);
                 if(cekokt(oct,&des) != 0) {
                    printf("Input salah");
                    break;
                 }
                 printf("Desimal: %d",des);
                 printf("\nBiner: ");
                 binary(des);
                 printf("\nHexa: %X",des);
                 break;
            case 4:
                 printf("Masukan angka hexa (Maksimal FFFF): ");
                 scanf("%s",hex);
                 if(cekhex(hex,&des) != 0) {
                     printf("Input salah");
                     break;
                 }
                 printf("Desimal: %d",des);
                 printf("\nBiner: ");
                 binary(des);
                 printf("\nOktal: %o",des);
                 break;
            default: printf("Tidak Tersedia");
        } 
        printf("\napa mau konvert lagi y/t:");
        scanf("%s",&lagi);

    } while((lagi == 'y') || (lagi == 'Y'));
    return 0;
} 
