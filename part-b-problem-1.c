/*
 * Adam Gardner, Section-001,  agardn56@byu.edu
 * Test 1: 
 * Input: 8000 24.5
 * Expected output: $161.10
 * Result: $8161.10 - I forgot to only sum the interest and not the full balance + interest. This led me to change the equation in the for loop
 *
 * Test 2;
 * Input: 8000 24.5
 * Expected output: $161.10
 * Result: $161.10 passed 
 *
 * Test 3;
 * Input: 210000 4.2
 * Expected output: $724.93
 * Result: $724.93 passed 
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//balance
	double bal;
	// Annual percentage rate
	double apr;
	//Interest
	double interest;

	printf("This program calculates the amount of interest you'll pay for one month\n");
	printf("Enter your balance and percentage rate, respectively:  ");
	fscanf(stdin, "%lf%lf", &bal, &apr);
	
	//This is supposed to check if bal and apr  was entered or not, but it doesn't work for apr because I need an XOR and I don't know how to invoke it in this context...
	if(bal == 0.00 || apr == 0.00){
		fprintf(stderr, "You must enter two, and only two, numbers\n");
		exit(1);
	}
	
	//divide apr by 100 to convert to decimal form
	apr /= 100;
	//divide apr by 365 days to give the interest rate for each day
	double dailyAPR = apr / 365;
	
	//for loop adds the product of balance and dailyAPR to interest
	for (int i = 0; i < 30; i++){
		interest += bal * dailyAPR;	
	}
	//Convert apr back to percentage form for printing out on screen
	apr *= 100;

	printf("The amount of interest you will pay is approximately $%.2lf for one month with an APR of %.2lf%% \n", interest, apr);

	return 0;
}
