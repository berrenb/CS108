/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP #5

SOURCE CODE FILE NAME: areaOfCylinderV1.c	 

PROGRAMMER NAME: Bryan Berrent 

SHORT DESCRIPTION: How to calculate the area of a cylinder

ALGORITHM:
    1.Greet user(tell the purpose of the program)
    2.Prompt the user to enter the radius of a cylinder
    3.Read the input for radius
    4.Prompt the user to input the height
    5.Read the input for height
    6.Calculate area (formula: (2*pi*radius^2)+(2*pi*radius*height)
    7.Display the area on the screen in cubic inches
    8.Sign-off with the user
    9.Terminate the program


DATE SUBMITTED: September 15th 2015



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

   int radius = 0.0; 

   int height = 0.0; 

   int area = 0.0;


//ALGORITHM STEP 1: Greet the user(tell the purpose of the program)


   printf("\n This program is to calculate the area of a cylinder. \n") ;

   

//ALGORITHM STEP 2: Prompt user to input the radius

   printf("\n Please enter the radius of the cylinder:" ) ;


//ALGORITHM STEP 3: Read users input for radius

   scanf("%d" ,&radius);


//ALGORITHM STEP 4: Prompt user to enter height

   printf("\n Please enter the height of the cylinder:");



//ALGORITHM STEP 5: Read users input for height

   scanf("%d" , &height);

//ALGORITHM STEP 6: Calculate the area 

   area =  (2*PI*(radius*radius))+(2*PI*radius*height);


//ALGORITHM STEP 7:Display the area on screen 


   printf("\n The area of the cylinder is %d cubic inches\n",  area);



//AlGORITHM STEP 8: Sign off with the user


   printf("\nThank you for your time have a nice day\n");



/*****************************************************************************/
/* ALGORITHM STEP 9: TERMINATE THE PROGRAM                                   */
/*****************************************************************************/
    return ( 0 ) ;

}




