#include<stdio.h>
main()
{
	int month;

	printf("Enter the month number of Year :");
	scanf("%d",&month);
	
	switch(month){
		case 1 : printf("It's January.\n");
		break;
		case 2 : printf("It's February.\n");
		break;
		case 3 : printf("It's March.\n");
		break;
		case 4 : printf("It's April.\n");
		break;
		case 5 : printf("It's May.\n");
		break;
		case 6 : printf("It's June.\n");
		break;
		case 7 : printf("It's July.\n");
		break;
		case 8 : printf("It's August.\n");
		break;
		case 9 : printf("It's September.\n");
		break;
		case 10 : printf("It's October.\n");
		break;
		case 11 : printf("It's November.\n");
		break;
		case 12 : printf("It's December.\n");
		break;
		
		default :
			printf("Please enter valid number : ");
		break;
	}
}
