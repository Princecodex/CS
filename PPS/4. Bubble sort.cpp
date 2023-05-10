#include <stdio.h>
int main(){
	int num,ele[100],swap;

	printf("Enter number of elements ");
	scanf("%d",&num);

	printf("Enter %d integers\n",num);
	for(int i=0; i<num; i++){
    	scanf("%d", &ele[i]);
	}
	
	for(int i=0;i<num-1;i++){
		for(int j=0;j<num-1-i;j++){
			if(ele[j]>ele[j+1]){
				swap=ele[j];
        		ele[j]=ele[j+1];
        		ele[j+1]=swap;
			}
    	}
    }
    
	printf("Bubble sorting in ascending order:\n");
	for(int i=0;i<num;i++){
     printf("%d\n",ele[i]);
	}
  return 0;
}