/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP #4

SOURCE CODE FILE NAME: volumeOfSphere.c
  
PROGRAMMER NAME: Bryan Berrent

SHORT DESCRIPTION: Calculates and displays the volume of a sphere

ALGORITHM:    
1. Display a greeting message
    2. Ask user for the radius
    3. Store the radius
    4. Calculate the volume (formula: pi * (4.0/3.0) * radius^3)
    5. Display the volume
    6. Sign-off with the user
    7. Terminate program
 

CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED:

BUGS:

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/

#include <stdio.h>

/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW             */
/*****************************************************************************/

#define PI 3.141593

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

	float radius = 0.0;

	float volume = 0.0;


//ALGORITHM STEP 1:

	printf("\nThis program is used to calculate the volume of a sphere.\n\n");
 	
	//GREETING MESSAGE

//ALGORITHM STEP 2:

	printf("\nEnter the radius: "); //ASKS FOR RADIUS


//ALGORITHM STEP 3: 

	scanf("%f", &radius); //STORES UESER INPUT INTO RADIUS

//ALGORITHM STEP 4:
	volume = PI * (4.0/3.0) * (radius*radius*radius); //CALCULATES VOLUME OF SPHERE

//ALGORITHM STEP 5:

	printf("\nBased on the given radius of %f the volume is %f\n\n",radius,volume);

	//OUTPUTS THE VOLUME BASED ON THE INPUT

/*****************************************************************************/
/* ALGORITHM STEP 7: TERMINATE THE PROGRAM                                 
*/
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS









