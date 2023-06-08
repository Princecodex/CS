#include<stdio.h>
int main(){
	int r, c, a[100][100], b[100][100], do[100][100];
	
	printf("Enter the number of rows you want and columns you want ");
	scanf("%d%d",&r,&c);
	
	printf("Enter First Matrix\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter Second Matrix\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("Enter the element %d%d ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The Multiplication of First and Second Matrix is\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			do[i][j]=a[i][j]*b[i][j];
			printf("%d ",Multi[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
