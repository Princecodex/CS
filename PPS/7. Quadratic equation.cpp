#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,discri,denomi,root1,root2,realpart,imagepart;
	
	printf("Enter the coefficients  a, b and c ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	discri=b*b-4*a*c;
	denomi=2*a;
	
	if(discri>0){
		root1=(-b+sqrt(discri))/denomi;
		root2=(-b-sqrt(discri))/denomi;
		printf("root1=%.2lf root2=%.2lf",root1,root2);
	}
	
	else if(discri==0){
		root1=root2=-b/denomi;
		printf("root1=root2=%.2lf",root1);
	}
	
	else{
		realpart=-b/denomi;
		imagepart=sqrt(-discri)/denomi;
		printf("root1=%.2lf root2=%.2lf ",realpart+imagepart,realpart-imagepart);
	}
	return 0;
}
