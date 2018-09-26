/*

SOURCE CODE FILE NAME: coins.c

PROGRAMMER NAME: Bryan Berrent

ALGORTIHM:
1.	Greet User
2.	Ask user for amount of pennies
3.	Store number
4.	Ask user for amount of nickels
5.	Store number
6.	Ask user for amount of dimes
7.	Store number
8.	Ask user for amount of quarters
9.	Store number
10.	Calculate total based on the input (formula: total = (pennies *1) 
+ (nickels * 5) + (dimes * 10) + (quarter * 25)).
11.	Check to see if total equals 100
	a.	If true, output: Congrats, your total is equal to a dollar
	b.	If false, check to see if the total is greater than a dollar
		i.	If true, output: Your total is greater than a dollar
		ii.	If false, output: Your total is less than a dollar
12.	Sign off with the user
13.	Terminate

DATE SUBMITTED: October 1st 2015

*/

#include <stdio.h>

#define PENNY 1
#define NICKEL 5
#define DIME 10
#define QUARTER 25

int calc_total (int, int, int, int);
int check_status (int);
void result(int);

int
main(void)
{

int user_p = 0;
 
int user_n = 0;

int user_d = 0;

int user_q = 0;

int total = 0; 

int status = 0; 

//ALGORITHM STEP 1

printf("\nThis program doesn't do much.\n");

//ALGORITHM STEP 2

printf("\nEnter the number of pennies: ");

//ALGORITHM STEP 3

scanf("%d", &user_p);

//ALGORITHM STEP 4

printf("\nEnter the number of nickels: ");

//ALGORITHM STEP 5

scanf("%d", &user_n);

//ALGORITHM STEP 6

printf("\nEnter the amount of dimes: ");

//ALGORITHM STEP 7
scanf("%d", &user_d);

//ALGORITHM STEP 8

printf("\nEnter the amount of quarters: ");

//ALGORITHM STEP 9

scanf("%d", &user_q);

//ALGORITHM STEP 10

total = calc_total(user_p,user_n,user_d,user_q);

//ALGORITHM STEP 11

status = check_status(total);


//ALGORITHM 12

result(status);

//ALGORITHM STEP 13
return (0);
}

int calc_total (user_p, user_n, user_d, user_q)
{
int total = 0;
total = (user_p * PENNY) + (user_n * NICKEL) + (user_d * DIME) + (user_q * 
QUARTER);

return total;
}

int check_status (total)
{
	int status = 0;
	if(total == 100)
		status = 1;
	else if (total > 100)
		status = 2;
	else
		status = 3; 
return status;
}

void result (status)
{
	if (status == 1)
		printf("\nCONGRATS YOUR TOTAL IS EQUAL TO 1 DOLLAR!\n\n");
	else if (status == 2)
		printf("\nSorry, Your total is great than a dollar.\n\n");
	else
		printf("\nSorry, your total is less than a dollar.\n\n");
	printf("\nLater Gator\n\n");	

return;
}

