#include<stdio.h>
 main(){
	int i,n,sum=0;
	printf("Enter a Value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("\nYour Sum of N numbers is: %d",sum);
}
