/*
                     PROGRAM DESCRIPTIVE HEADER 

SOURCE CODE FILE NAME: studentData.c
  
PROGRAMMER NAME: Bryan Berrent

SHORT DESCRIPTION: Displays students statistics from a file

ALGORITHM:
1. In a created function definition 
	i. Create an element called last name which holds 20 characters at most
	ii. Create an element which holds the age of the student
	iii. Create an element which holds the GPA of the student 
	iv. Create an element which holds the class level of the student
2. Create an array which holds exactly 11 instances of the structure 
3. In a PCF named populate
	i. Open the file ghp22_23.dat
	ii. Loop through each element of the array
	iii. Store in each element of the array the contents from ghp22_23.dat
	iv. Close the file
4. In a PCF named show_it
	i. Create a for loop which goes until the size of the array (11) is reached
	ii. Output the contents of the array
5. In a PCF named detect
	i. Create 3 integer local variables fresh3,count21, and vowelc
	ii. Create a for loop which goes until the size of the array(11) is reached
	iii. Check to see if that position of the array contains a gpa 3.0 or greater and is also a freshman
		a. if true, increment fresh3 by one
	iv. Check to see if that position of the array contains a student who is 21 or older and has a gpa less then 3
		a. If true, increment count21 by one
	v. Check to see the amount of students who are a junior, senior or graduate student and have a last name beginning with a vowel
		a. If true, increment vowelc by one
6. Terminate


CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED:

BUGS:

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE ARE DIRECTLY BELOW                        */
/*****************************************************************************/
#include <stdio.h>


/*****************************************************************************/
/* STRUCTURE DEFINITIONS ARE DIRECTLY BELOW                                  */
/****************************************************************************/
typedef struct suny
{
  char last_name[20];
  char rank;
  int age;
  float gpa;
}poly;


/*****************************************************************************/
/* FUNCTION PROTOTYPES ARE DIRECTLY BELOW                                    */
/*****************************************************************************/
void populate(poly[]);
void show_it(poly []);
void detect(poly []);

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






//ALGORITHM STEP 2: Create an array which holds exactly 11 instances of the structure 

poly students[11];

//ALGORITHM STEP 3: In a PCF named populate

populate(students);

/*****************************************************************************/
/* ALGORITHM STEP 6: TERMINATE THE PROGRAM                                 
*/
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS


/*****************************************************************************/
/* FUNCTION DECLARATIONS ARE DIRECTLY BELOW                                  */
/*****************************************************************************/

void populate(poly in_students[]){

FILE *words;

int i = 0;

words = fopen( "/home/f/csci/urbanc/ghp22_23.dat" , "r" ); 

while(!feof(words)){
	fscanf(words , "%s" "%s" "%d" "%f" , &in_students[i].last_name, &in_students[i].rank, &in_students[i].age, &in_students[i].gpa);
	i++;
}	
fclose(words);

show_it(in_students);

return;
}

//ALGORITHM STEP 4
void show_it(poly in_students[]){

int i = 0;

for(i = 0; i < 11; i++){

	printf("\n\nLAST NAME \t CLASS \t AGE \t GPA");
	printf("\n\n%s \t %c \t %d \t %f",in_students[i].last_name,in_students[i].rank,in_students[i].age,in_students[i].gpa);
}
detect(in_students);
return;
}

//ALGORITHM STEP 5
void detect(poly in_students[]){
int i = 0;
int fresh3 = 0;
int count21 = 0;
int vowelc = 0;


for(i = 0; i < 11; i++){
	if(in_students[i].gpa >= 3.0 && in_students[i].rank == 'F'){
		fresh3++;
	}
	if(in_students[i].age >= 21 && in_students[i].gpa < 3.0){
		count21++;
	}
	if(in_students[i].rank != 'F' && in_students[i].rank != 'S' && in_students[i].last_name[0]=='A' || in_students[i].last_name[0]=='E' ||in_students[i].last_name[0]=='I'||in_students[i].last_name[0]=='O'||in_students[i].last_name[0]=='U'){	
		vowelc++;
	}
}	
	printf("\n\nThe amount of Freshmen who have a 3.0 GPA or above is: %d",fresh3);
	printf("\nThe amount of Students who are over 21 and have a gpa less than 3.0 is: %d",count21);  
	printf("\nThe amount of students whose last name starts with a vowel and are either a Junior, Senior or Graduate Student is: %d\n\n",vowelc);

return;
}
