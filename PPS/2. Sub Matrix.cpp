#include<stdio.h>
int main(){
	int r,c,a[100][100],b[100][100],sub[100][100];
	
	printf("Enter the number of rows ");
	scanf("%d",&r);
	
	printf("Enter the number of columns ");
	scanf("%d",&c);
	
	printf("Enter the elements of matrix 1\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("Enter the element %d%d ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the elements of matrix 2\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("Enter the element %d%d ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			sub[i][j]=a[i][j]-b[i][j];
		}
	}	
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d  ",sub[i][j]);
			if(j==c-1){
				printf("\n\n");
			}
		}
	}
	return 0;
}