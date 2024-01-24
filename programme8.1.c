#include<stdio.h>
main()
{
	int number;
	
	printf("Enter number to check whether a number is even or odd :");
	scanf("%d",&number);
	
	(number%2==0) ? printf("This number is even.")
				  : printf("This number is odd.");
}
