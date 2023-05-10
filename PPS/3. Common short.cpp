#include<stdio.h>
int main(){
	int n,num[100],temp;
	
	printf("Enter the number of element ");
	scanf("%d",&n);
	
	printf("Enter %d element\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&num[i]);
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	printf("Shorting the number in assending order\n");
	for(int i=0; i<n; i++){
		printf("%d\n",num[i]);
	}
return 0;
}