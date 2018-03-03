#include <stdio.h>

float principal;
float intrestRate;
int loanTerm;
float intrestCharge;

main(void)	{
	
	printf("Enter loan principal (-1 to end): ");
	scanf("%f", &principal);
	
	while(principal != (-1))	{
		printf("Enter intrest rate: ");
		scanf("%f", &intrestRate);
		
		printf("Enter term of the loan in days: ");
		scanf("%d", &loanTerm);
		
		intrestCharge = principal * intrestRate * loanTerm / 365;
		printf("The Intrest charge is $%.2f\n", intrestCharge);
	
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
	}

}
