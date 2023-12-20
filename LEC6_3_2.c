#include<stdio.h>
void main(){
	int i,n,fact=1;
	printf("Enter the Number you want the Factorial of: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The Factorial of %d is %d",n,fact);
}
