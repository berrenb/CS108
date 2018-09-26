/* 
 PROGRAM DESCRIPTIVE HEADER                                                 
                                                                          
 SOURCE CODE FILE NAME:  craps.c                                          
                                                                            
 PROGRAMMER: Bryan Berrent                                               
                                                                           
 PURPOSE:  DEMONSTRATE LOOPING AND SELECTION BY PLAYING CRAPS               
                                                                            
 DESCRIPTION:  WE WILL BUILD THE GAME ONE ALGORITHM STEP AT A TIME  

 ALGORITHM:

     STEP 1: INTRODUCE THE GAME                                       
     STEP 2: ROLL THE DICE                                            
     STEP 3: READ THE TOTAL OF THE TWO ROLLED DICE                   
     STEP 3A: IF THE ROLL IS 7 OR 11, THEN THE USER WINS AND          
              THE USER IS DONE (GO TO STEP 4)                                       
     STEP 3B: IF THE ROLL IS 2, 3, OR 12, THEN THE USER LOSES         
              AND THE USER IS DONE (GO TO STEP 4)                                      
     STEP 3C: IF THE ROLL IS 4, 5, 6, 8, 9, OR 10, THEN THAT        
               BECOMES THE USER'S POINT
     STEP 3C1: DISPLAY THE USER'S POINT                            
     STEP 3C2: THE USER ROLLS   
     STEP 3C2: DISPLAY THE USER'S ROLL                                  
     STEP 3C4: IF THE ROLL IS EQUAL TO THE USER'S POINT           
               THEN THE USER WINS AND THE USER IS DONE (GO TO STEP 4)            
     STEP 3C5: IF THE ROLL IS 7 THEN THE USER LOSES AND THE         
               USER IS DONE (GO TO STEP 4)                                         
     STEP 3C6: IF THE USER DOES NOT ROLL HIS "POINT" OR A 7,      
               THEN THE USER ROLLS AGAIN (GO TO STEP 3C2)           
     STEP 4: SIGN-OFF WITH USER  
     STEP 5: TERMINATE      
                                                                          
 CALL: a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)          
                                                                           
 DATE SUBMITTED:                                            
                                                                           
 BUGS:  NONE DETECTED                                                       
*/

/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include <time.h>


/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW             */
/*****************************************************************************/



/*****************************************************************************/
/* THE main( ) FUNCTION IS DECLARED DIRECTLY BELOW; THE main( ) FUNCTION     */
/* ACCEPTS NO PARAMETERS/ARGUMENTS.  THE main( ) FUNCTION RETURNS AN INTEGER */
/* VALUE OF ZERO TO THE OPERATING SYSTEM WHEN THE PROGRAM IS COMPLETE TO     */
/* INFORM THE OPERATING SYSTEM THAT THE  PROGRAM HAS SUCCESSFULLY TERMINATED.*/
/*****************************************************************************/
int main( void )
{  // MARKS THE BEGINNING OF THE main( ) BLOCK OF STATEMENTS

/*****************************************************************************/
/* LOCAL VARIABLE(S) FOR main( )(IF ANY) ARE DECLARED DIRECTLY BELOW         */
/*****************************************************************************/

    int die_1 = 0 , die_2 = 0 , point = 0, status = 0 ;

    srandom ( (unsigned) time (NULL) ) ; //NECESSARY FOR RANDOM NUMBERS



// ALGORITHM STEP 1: INTRODUCE THE GAME                                       
                                                 
    printf( "\n\n\n Welcome to the game of Craps. \n\n" ) ;



// ALGORITHM STEP 2: ROLL THE DICE                                            
 
    die_1 = random ( ) % 6 + 1 ;

    die_2 = random ( ) % 6 + 1 ;


 
// ALGORITHM STEP 3: READ THE TOTAL OF THE TWO ROLLED DICE       
  
    printf( "\n\nYou rolled : %d \n\n\n" , die_1 + die_2 ) ;



// ALGORITHM STEP 3A: IF THE ROLL IS 7 OR 11, THEN THE USER WINS AND          
//                    THE USER IS DONE  (GO TO STEP 4)                                        
 
   if(die_1 + die_2 == 7 || die_1 + die_2 == 11) 
            printf( "You are a WINNER!!\n\n") ;

 

// ALGORITHM STEP 3B: IF THE ROLL IS 2, 3, OR 12, THEN THE USER LOSES         
//                    THE USER IS DONE (GO TO STEP 4)                                         
 	else if (die_1 + die_2 == 2 || die_1 + die_2 == 3 || die_1 + 
die_2 == 12)
          printf( "Sorry, but you lose.\n\n") ;

//    ALGORITHM STEP 3C: IF THE ROLL IS 4, 5, 6, 8, 9, OR 10, THEN THAT        
//                    BECOMES THE USER'S POINT                            
 	else{
	      status = 1;
              point  =  die_1 + die_2;
}

// ALGORITHM STEP 3C1: DISPLAY THE USER'S POINT                           

            printf( "\n\nYour point is: %d \n\n\n", point ) ;

            while (status == 1)
            { 

// ALGORITHM STEP 3C2: THE USER ROLLS 
   
             die_1 = random ( ) % 6 + 1;

             die_2 = random ( ) % 6 + 1;

// ALGORITHM STEP 3C3: DISPLAY THE USER'S ROLL
   
              printf( "\n\nYour point is %d and you rolled a %d \n\n\n" , 
                      point, die_1 + die_2 ) ;  

// ALGORITHM STEP 3C4: IF THE ROLL IS EQUAL TO THE USER'S POINT           
//                     THEN THE USER WINS AND THE USER IS DONE 
//                     (GO TO STEP 4)     
 
             if (point == die_1 + die_2)

             {
                  printf( "    You Win!! \n\n") ;
			status = 0;
              }        

// ALGORITHM STEP 3C5: IF THE ROLL IS 7 THEN THE USER LOSES AND THE         
//                     USER IS DONE  (GO TO STEP 4)  

             else if (die_1 + die_2 == 7)

             {

                 printf( "    Sorry, you lose.\n\n") ;

                 status = 0;

             }
  

// ALGORITHM STEP 3C6: IF THE USER DOES NOT ROLL HIS "POINT" OR A 7,      
//                     THEN THE USER ROLLS AGAIN (GO TO STEP 3C2)           

            }  // END OF WHILE LOOP
    



// ALGORITHM STEP 4: SIGN-OFF WITH USER

    printf( "\n\n\n Thank you for playing craps.\n\n") ;
          

/*****************************************************************************/
/* ALGORITHM STEP 5: TERMINATE                                               */
/*****************************************************************************/
    return ( 0 ) ;

}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS




