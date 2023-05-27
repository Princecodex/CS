#include<stdio.h>
int main(){
	int r,c,a[100][100],b[100][100],sum[100][100];
	
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
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("The sum of matrix 1 and 2\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d  ",sum[i][j]);
			}
		printf("\n");
		}
	}
return 0;
}
