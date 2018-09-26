/*

                                       PROGRAM DESCRIPTIVE HEADER

SOURCE CODE FILE NAME:  ghp_6.c

PROGRAMMER: Bryan Berrent  

DESCRIPTION:   Satifies GHP #6 requirements

ALGORITHM:

   1. Greet user (tell user the purpose of the program)
   2. Prompt the user to enter the radius of the sphere
   3. Read to user's input for radius
   5. Calculate the volume of the spher (formula: pi*(4.0/3.0)*radius^3)
   6. Display the radius in inchesand the volume of the sphere in cubic inches
   7. Terminate the program

CALL: a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED: September 21st 2015

BUGS:   

*/

/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/
# include <stdio.h> // PREPROCESSOR DIRECTIVE ALLOW THE USE OF printf( )
                    // AND scanf( )

/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW             */
/*****************************************************************************/
# define PI 3.14159


/*****************************************************************************/
/* PROGRAMMER CREATED PROTOTYPES ARE DIRECTLY BELOW                          */
/*****************************************************************************/
void intro_msg (void);
float rad_storage (void);
float calc_volume (float);
float closing_msg (float,float);
/*****************************************************************************/
/* THE main( ) FUNCTION IS DECLARED DIRECTLY BELOW; THE main( ) FUNCTION     */
/* ACCEPTS NO PARAMETERS/ARGUMENTS.  THE main( ) FUNCTION RETURNS            */
/* AN INTEGER  VALUE OF ZERO TO THE OPERATING SYSTEM WHEN THE                */
/* PROGRAM IS COMPLETE TO  INFORM THE OPERATING SYSTEM THAT THE              */
/* PROGRAM HAS SUCCESSFULLY TERMINATED.                                      */
/*****************************************************************************/

int   main   ( void )
{  // MARKS THE BEGINNING OF THE main(  ) BLOCK OF STATEMENTS

/*****************************************************************************/
/* LOCAL VARIABLE(S) FOR main( )(IF ANY) ARE DECLARED DIRECTLY BELOW         */
/*****************************************************************************/
         float  radius  = 0.0 ,   volume = 0.0  ;


// ALGORITHM STEP 1:   Greet user (tell user the purpose of the program)

intro_msg ();

// ALGORITHM STEP 2:   Prompt the user to enter the radius of the sphere

       


// ALGORITHM STEP 3:   Read the user's input for radius of the sphere

radius = rad_storage(); 
	//scanf( "%f%"  ,  &radius ) ;


// ALGORITHM STEP 4:   Calculate the volume (formula: pi*(4.0/3.0)*radius^3)
		
	    volume = calc_volume(radius);
          //volume  =  PI * (4.0/3.0) * (radius * radius * radius)  ;


// ALGORITHM STEP 5:   Display the radius and the volume to the screen

	closing_msg(radius,volume);
/*
         printf( " \n The volume of a sphere with a radius of %5.2f inches " ,  
               radius ) ;
         printf( " \n is %5.2f cubic inches. \n\n " ,  volume   ) ;
*/

// ALGORITHM STEP 6:   Sign-off with the user

        //printf( " \n Later gator.  \n\n\n " ) ;


/*****************************************************************************/
/* ALGORITHM STEP 7:  TERMINATE THE PROGRAM                                  */
/*****************************************************************************/
    return ( 0 ) ;

}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS



/*****************************************************************************/
/* PROGRAMMER CREATED FUNCTION DECLARATIONS/DEFINITIONS ARE BELOW            */
/*****************************************************************************/

void intro_msg (void)
{
	printf("\n This program calculates the volume of a sphere.\n");
	return;
}

float rad_storage (void)
{
	float radius = 0.0;
	printf("\n Please enter the radius of the sphere: ");
	scanf("%f",&radius);
	return(radius);
}

float calc_volume (float radius)
{
	float volume = 0.0;
	scanf("f", &radius);
	volume = PI * (4.0/3.0) * (radius * radius * radius);
	return(volume);
}

float closing_msg(float radius, float volume)
{
	printf("The volume of sphere with a radius of %5.2f inches " , 
radius );
	printf("\n is %5.2f cubic inches. \n\n " , volume );
	printf("\n Later gator. \n\n\n");
}
