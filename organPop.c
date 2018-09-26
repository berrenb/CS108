/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP #10

SOURCE CODE FILE NAME: organPop.c
  
PROGRAMMER NAME: Bryan Berrent

SHORT DESCRIPTION: Predicting the population of organisms

ALGORITHM:
    
1. Greet the user
2. Ask user for starting number of organisms
3. Store that number of organisms
4. Ask user for average daily increase
5. Store that number
6. Ask user the number of days the organisms will be left to multiply
7. Store that number
8. Output Starting values
9. Create a variable called count with an initial value of 2
10. Checks if count <= number of days the organisms will be left to multiply
	i. If true
		a. Calculate the number of organisms. Formula: (num_of_orgs = 
num_of_orgs + (num_of_orgs * avg_increase))
		b. Output the result
		c. increment count by 1
	ii. If false
		a. Sign off with the user
11. Terminate
    

CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED: 10/15/15

BUGS:

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE ARE DIRECTLY BELOW                        */
/*****************************************************************************/

#include <stdio.h>



/*****************************************************************************/
/* THE main( ) FUNCTION IS DECLARED DIRECTLY BELOW; THE main( ) FUNCTION     */
/* ACCEPTS NO PARAMETERS/ARGUMENTS.  THE main( ) FUNCTION RETURNS AN INTEGER */
/* VALUE OF ZERO TO THE OPERATING SYSTEM WHEN THE PROGRAM IS COMPLETE TO     */
/* INFORM THE OPERATING SYSTEM THAT THE  PROGRAM HAS SUCCESSFULLY TERMINATED.*/
/*****************************************************************************/

int  main ( void )

{  // MARKS THE BEGINNING OF THE main( ) BLOCK OF STATEMENTS

/*****************************************************************************/
/* LOCAL VARIABLE(S) FOR main( )(IF ANY) ARE DECLARED DIRECTLY BELOW         */
/*****************************************************************************/

float num_of_orgs = 0.0;
float avg_increase = 0.0;
float num_of_days = 0.0;




//ALGORITHM STEP 1: 

printf("\nThis program predicts the approximate population of organisms.\n");

//ALGORITHM STEP 2:

printf("\nEnter the starting number of organisms: ");

//ALGORITHM STEP 3:

scanf("%f", &num_of_orgs);

//ALGORITHM STEP 4:

printf("\nEnter average increase as a decimal number: ");

//ALGORITHM STEP 5: 

scanf("%f", &avg_increase);

//ALGORITHM STEP 6:

printf("\nEnter the number of days: ");

//ALGORITHM STEP 7:

scanf("%f", &num_of_days);

//ALGORITHM STEP 8:

printf("\n\nDay 1     Population: %f\n",num_of_orgs);

//ALGORITHM STEP 9: 

int count = 2;

//ALGORITHM STEP 10:

while(count <= num_of_days){
	num_of_orgs = num_of_orgs + (num_of_orgs * avg_increase);
	printf("Day %d     Population: %f\n",count, num_of_orgs);
	count++;
}

printf("\nThanks for using my program!\n\n");





/*****************************************************************************/
/* ALGORITHM STEP 11: TERMINATE THE PROGRAM                                 
*/
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS








