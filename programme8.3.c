#include<stdio.h>
main()
{
     	int s;
     	printf("Enter student's score :");
     	scanf("%d",&s);
     	
     	if( s >= 85){
     		printf("You have passed your examinations with A Grade.\n");
		 }
		else if( s >= 75){
     		printf("You have passed your examinations with B Grade.\n");
		 }
		else if( s >= 65){
     		printf("You have passed your examinations with C Grade.\n");
		 }
		else if( s >= 55){
     		printf("You have passed your examinations with D Grade.\n");
		 } 
		else{
			printf("You have passed your examinations with F Grade.\n");
		}
		 
     	
}
