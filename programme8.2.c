#include<stdio.h>
main()
{
  int units;
  float bill, ac, EB;//ac=additional charge , EB=electicity bill
  
  printf("Enter the electricity unit charge :");
  scanf("%d",&units);
  
  if(units<=50){
  	bill= units * 0.50;
  }
  
  else if(units<=150){
  	bill= 25 + ((units - 50) * 0.75);
  }
  else if(units<=250){
  	bill= 100 + ((units - 150) * 1.20);
  }
  else{
  	bill= 220 + ((units - 250) * 1.50);
  }
  
   ac = bill * 0.20	;
   EB = bill + ac;
   printf("Your electricity bill is : %.3f",EB);
}
