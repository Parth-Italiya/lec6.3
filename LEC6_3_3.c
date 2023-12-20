#include<stdio.h>
void main(){
	int i,n,mul;
	printf("Enter the Number of which you want the table of: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		mul=i*n;
		printf("\n%d * %d = %d",n,i,mul);
	}
}
