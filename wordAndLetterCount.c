/*
                     PROGRAM DESCRIPTIVE HEADER

SOURCE CODE FILE NAME: wordAndLetterCount.c
  
PROGRAMMER NAME: Bryan Berrent

SHORT DESCRIPTION: Counts words and letters from a file

ALGORITHM:
1. Create a 2D array containing exactly 40 rows and 25 columns
2. In a Program Created Function named Populate
	i. Create a variable to count the amount of words
	ii. Open the file ghp_15.dat
iii. Store in each element the contents from the file named ghp_15.dat
	iv. Send the content of the array along with the word count into a 
program created function named show_it
3. In the program created function named show_it
	i. Loop through each element in the 2D array 
	ii. Output the contents in the array
	iii. Send the content of the array along with the word count into a 
program created function named detect
4. In the program created function named detect
	i. Created a nested for loop searching through the elements in the 2D 
array
	ii. Check to see if there is a space
		a. If true, break.
		b. If false, check to see if the content at the position of 
the array is a lowercase letter
			1. If true increment lowercase count by 1
	iii. Check to see if there is a space
		a. If true, break.
		b. If false, check to see if the content at the position of 
the array is an uppercase letter
			1. If true increment uppercase count by 1
	iv. Calculate the total (formula: total = upper + lower).
	v. Output the amount of words, letters, upper case letters, and lower 
case letters
5. Terminate

CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED:

BUGS:

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE ARE DIRECTLY BELOW                        */
/*****************************************************************************/
#include <stdio.h>

/*****************************************************************************/
/* FUNCTION PROTOTYPES ARE DIRECTLY BELOW                                    */
/*****************************************************************************/
void populate(char[][25]);
void show_it(char[][25],int);
void detect(char[][25],int);


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






//ALGORITHM STEP 1: Create a 2D array containing exactly 40 rows and 25 columns

char word_array[40][25];

//ALGORITHM STEP 2: In a Program Created Function named Populate

populate(word_array);

return;
/*****************************************************************************/
/* ALGORITHM STEP 5: TERMINATE THE PROGRAM                                 */
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS


/*****************************************************************************/
/* FUNCTION DECLARATIONS ARE DIRECTLY BELOW                                  */
/*****************************************************************************/

//Continuation of Algorithm Step 2

void populate (char word_array[][25]){

FILE *words; 

word_array[40][25];

int i = 0 ; 

//Variable to store the word count
int cword = 0;

//Opens the file ghp_15.dat
words = fopen( "/home/f/csci/urbanc/ghp_15.dat" , "r" ); 

//Loop to store the contents of ghp_15.dat into the array
while(!feof(words))
	{   
	
	fscanf(words ,"%s", &word_array[i]) ; 
        i++ ;  
        
	}  
        
	   cword = i;
	
	   fclose(words);
	
	//Sends the contents of cword and word_array into show_it
	show_it(word_array,cword);

return;

}

//ALGORITHM STEP 3
void show_it(char word_array[][25],int cword){

int j = 0;
int i = 0;

printf("\nThe words are:\n ");

//Loop through each element in the 2D array
for(i = 0; i < cword - 1; i++)
{
	//Outputs the contents of the array
	printf("%s\n",word_array[i]);
	
}
	//Sends the contents of cword and word_array into detect
	detect(word_array,cword);
}

//ALGORITHM STEP 4
void detect(char word_array[][25],int cword){

int total = 0;

int i = 0;

int j = 0;

int upperl = 0;

int lowerl = 0;

//Nested for loop
for(i = 0; i < cword - 1; i++)
{
	for(j = 0; j < 25;j++)
	{
		//Check for a space
		if((word_array != NULL) && (word_array[i][j] == '\0'))
		{
			break;
		}
		
		//Increment lower counter
		else if(islower(word_array[i][j]))
		{
			lowerl++;
		}
		
		//Check for a space
		if((word_array != NULL) && (word_array[i][j] == '\0'))
		{
			break;
		}
		
		//Increment upper count
		else if(isupper(word_array[i][j]))
		{
			upperl++;
		}
	}
}

//Calculate total amount of letters
total = upperl + lowerl;

//Output results
printf("\nWord count: %d \n",cword -1);

printf("\nNumber of Uppercase letters: %d\n",upperl);

printf("\nNumber of Lowercase letters: %d\n",lowerl);

printf("\nTotal number of letters: %d\n",total);

printf("\nHave a great day!\n\n");
		

return;	
}
