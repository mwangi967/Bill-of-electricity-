//program to culculate electricity bill
/*
Auther :Dyvine Eshiuma
Reg No:CT102/G/24154/24
*/
#include<stdio.h>
int main(){
	int customerID,unitsconsumed;
	float chargesperunit,surcharge=0,totalbill;
	char customername[50];
	
	
	printf("Enter the customerID:");
	scanf("%d", &customerID);
	
	printf("Enter the customername:");
	scanf("%s", &customername);
	
	printf("Enter the unitsconsumed:");
	scanf("%d", &unitsconsumed);
	

	if(unitsconsumed<=199){
		chargesperunit=1.20;
	}
	 else if(unitsconsumed>199 && unitsconsumed<=399)
	{
		chargesperunit=1.50;}

	else if(unitsconsumed>399 && unitsconsumed<=599){
	
		chargesperunit=1.80;
	}
	else(chargesperunit=2.00);
		
	totalbill=chargesperunit*unitsconsumed;

if(unitsconsumed>400){
   surcharge=0.15;
   totalbill=totalbill*surcharge;
}


if(totalbill<100){
	totalbill=100;
}

printf("Customers Name:%s\n",customername);
printf("Customers Id No.:%d\n",customerID);
printf("Total Units Consumed:%d\n",unitsconsumed);
printf("Charges Per Unit:%.2f\n",chargesperunit);
printf("Total Bill:%.2f\n",totalbill);

	return 0;
}