#include<stdio.h>
int main(){
	int num,ele[100],key,flag;

	printf("Enter number of elements ");
	scanf("%d",&num);

	printf("Enter %d integers\n",num);
	for(int i=0; i<num; i++){
    	scanf("%d", &ele[i]);
	}
	
  	for(int i=1;i<=num-1; i++) {
    key = ele[i];
    int j;
	for(j=i-1; j>=0; j--){
		if(ele[j]>key){
		   ele[j+1]=ele[j];
		   flag=1;  
		}
		else{
		break;
		}
	}
	if(flag){
		ele[j+1]=key;
	}
	
}
	printf("Insertion sorting in ascending order:\n");
	for(int i=0; i<num; i++){
     printf("%d\n",ele[i]);
	}
return 0;
}
	