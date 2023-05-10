#include<stdio.h>
int main(){
	int num,quot,sum=0,reve=0;
	
	printf("Enter the num ");
	scanf("%d",&num);
	
	while(num>0){
		quot=num%10;
		sum=sum+quot;
		reve=reve*10+quot;
		num=num/10;
	}
	
	printf("\nThe sum is %d",sum);
	printf("\nThe reverse is %d",reve);
	
	return 0;
}