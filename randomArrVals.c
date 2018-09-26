/*
             PROGRAM DESCRIPTIVE HEADER 

SOURCE CODE FILE NAME: randomArrVals.c
  
PROGRAMMER NAME: Bryan Berrent 

SHORT DESCRIPTION: Creates a 2D array with random values and displays:
					-highest value 
					-lowest value
					-average value
					-highest address
					-lowest address

ALGORITHM: 

1. Create a 2D array which will hold exactly 3 rows and 5 columns
2. Store a random number from 0-100 in each position of the array 
3. In a Program Created Function called show_it()
	i. Create a nested for loop
	ii. Display the row number
	iii. Display the column number 
	iv. Display the address 
	v. Display the integer value stored in that position of the array
4. In a Program created function called hi_lo_avg()
	i. Create to variables named h_val, l_val, i_high, i_low, j_high, j_low, total and avg
	ii. Set the value of h_val and l_val to be the element at row 0, col 0. 
	iii. Set the value of total and avg to be 0.
	iv. Create a nested for loop
		1. Test if h_val < the value at (row)(col)
			a. If true, store that number in h_val
			b. Store the row in i_high
			c. Store the column in j_high
		2. Test if l_val > the value at row(col)
			a. If true, store the number in l_val
			b. Store the row in i_low
			c. Store the column in j_low
		3. Add the value of the element to the total
	v. Calculate the Average (formula: avg=total/15)
	vi. Display the Highest Value including the row, column and address
	vii. Display the Lowest Value including the row, column and address
	viii. Display the average 
5. Terminate

CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED:

BUGS:

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE ARE DIRECTLY BELOW                        */
/*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include <time.h>


/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE ARE DIRECTLY BELOW                         */
/*****************************************************************************/




/*****************************************************************************/
/* PCF PROTOTYPES ARE DIRECTLY BELOW                                         */
/*****************************************************************************/
void show_it(int [][5]);
void hi_lo_avg(int [][5]);

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

srandom ( (unsigned) time (NULL) );

//ALGORITHM STEP 1:

int arr[3][5];
int i = 0;
int j = 0;
//ALGORITHM STEP 2:

arr[0][0] = random() % 100;
arr[0][1] = random() % 100;
arr[0][2] = random() % 100;
arr[0][3] = random() % 100;
arr[0][4] = random() % 100;
arr[1][0] = random() % 100;
arr[1][1] = random() % 100;
arr[1][2] = random() % 100;
arr[1][3] = random() % 100;
arr[1][4] = random() % 100;
arr[2][0] = random() % 100;
arr[2][1] = random() % 100;
arr[2][2] = random() % 100;
arr[2][3] = random() % 100;
arr[2][4] = random() % 100;


//ALGORITHM STEP 3:

show_it(arr);

//ALGORITHM STEP 4:

hi_lo_avg(arr);


/*****************************************************************************/
/* ALGORITHM STEP XX : TERMINATE THE PROGRAM                                 
*/
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS



/*****************************************************************************/
/* PCF DECLARATION/DEFINITIONS ARE DIRECTLY BELOW                            */
/*****************************************************************************/

void show_it(int fun_arr[][5]){
	
	int i = 0;
	int j = 0;
	
	for(i = 0; i <= 2; i++){
	
		for(j = 0; j <= 4; j++){
		
		printf("Row number = %d Column number = %d\n",i,j);
		printf("Address = %p Value = %d\n\n",fun_arr[i][j],fun_arr[i][j]);
		}
}	

return;
}

void hi_lo_avg(int fun_arr[][5]){

	int i = 0;
	int j = 0;
	int h_val = fun_arr[0][0];
	int l_val = fun_arr[0][0];
	float total = 0;
	float avg = 0;
	int i_high = 0;
	int i_low = 0;
	int j_high = 0;
	int j_low = 0;

	for(i = 0; i <= 2; i++)
	{

		for(j = 0; j <= 5; j++)
		{
			
		total = total + fun_arr[i][j];
	
		if(l_val > fun_arr[i][j])
			l_val = fun_arr[i][j];
			i_high = i;
			j_high = j;	

		if(h_val < fun_arr[i][j])
			h_val = fun_arr[i][j];
			i_low = i;
			j_low = j;
		}
	}
	
	avg = total/15;
	
printf("High value: %d Row: %d Col: %d\n",h_val,i_high,j_high);
 
printf("Address: %p\n\n",&fun_arr[i_high][j_high]);

printf("Low value: %d Row: %d Col: %d\n ",l_val,i_low,j_low);

printf("Address: %p\n\n",&fun_arr[i_low][j_low]);

printf("Average value: %f\n\n",avg);
	
return;
}
