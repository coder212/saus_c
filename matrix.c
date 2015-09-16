#include <stdio.h>

int main()
{
	int Matrix[200][200];
	int i,j,d,c;
	printf("membuat matrix d x c \n");
	printf("masukkan ordo dari matiks tersebut dengan koma sebagai pemisah \n");
	scanf("%d , %d",&d,&c);
	for(i=0;i<d;i++){
		for(j=0;j<c;j++){
			printf("masukkan element dari Matriks[%d][%d]\n",i+1,j+1);
			scanf("%d",&Matrix[i][j]);
		}
	}
	printf("matrix yang diinputkan \n");
	for(i=0;i<d;i++){
		for(j=0;j<c;j++){
			printf("%-3d",Matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
