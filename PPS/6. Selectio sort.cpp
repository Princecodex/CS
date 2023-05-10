#include <stdio.h>
int main(){
	int num,ele[100],index,temp;

	printf("Enter number of elements ");
	scanf("%d",&num);

	printf("Enter %d integers\n",num);
	for(int i=0; i<num; i++){
    	scanf("%d", &ele[i]);
	}
	

    for (int i=0; i<num-1; i++){
        index=i;
        for (int j=i+1; j<num; j++){
            if(ele[j]<ele[index]){
                index=j;
            }
			if(index!=i)
        	temp=ele[i];
       		 ele[i]=ele[index];
        	ele[index]=temp;
    	}
    }

	printf("Selection sorting in ascending order:\n");
	for(int i=0;i<num;i++){
    	printf("%d\n",ele[i]);
	}
  return 0;
}