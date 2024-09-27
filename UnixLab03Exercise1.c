

/**************************************************************************
* AccessID:  		< add your AccessID Here>
* Date:  		< add today's date here>
* Assignment:  		< add Lab02 -- Request 01>
*
*-------------------------------------------------------------------------

* Program Description: 	< add a description of what this program does

*************************************************************************/

// include library references
#include <stdio.h>
#include <stdlib.h>


/**************************************************************************
FunctionName:  <enter function name here>

<what does function do>

*************************************************************************/

/**************************************************************************
getMenuOption

Presents the user with a menu of options and allows them to choose 
which function to run.

*************************************************************************/
int getMenuOption () {
	//variables
	int choice = 0;
	int yesNo = 0;
	
	
	while ((choice == 0))  {
		fflush(stdin);

		printf("***********    MENU    **************\n");
		printf("Which Excercise? 1, 2, 3, 4?");	
		scanf("%d",&choice);	
		while(getchar()!= '\n');
	
		
		switch(choice) {
			case 1:
				printf("Menu Item 1 not implemented.\n");	
				printf("Try Another Item? (1=Y,0=N)");
				scanf(" %d",&yesNo);

				
				if (yesNo == 1) {
						choice = 0;
				}
				else {
						choice = -1;
				}
				break;
				
			case 2:
				printf("Menu Item 2 not implemented.\n");	
				printf("Try Another Item? (1=Y,0=N)");
				scanf(" %d",&yesNo);
				
						
				if (yesNo == 1) {
						choice = 0;
				}
				else {
						choice = -1;
				}
				break;
				
			case 3:
				printf("Menu Item 3 not implemented.\n");	
				printf("Try Another Item? (1=Y,0=N)");
				scanf(" %d",&yesNo);
				
						
				if (yesNo == 1) {
						choice = 0;
				}
				else {
						choice = -1;
				}
				break;
			
			case 4:
				printf("Menu Item 4 not implemented.\n");	
				printf("Try Another Item? (1=Y,0=N)");
				scanf(" %d",&yesNo);

						
				if (yesNo == 1) {
						choice = 0;
				}
				else {
						choice = -1;
				}
				break;
				
			default:
				printf("Invalid Menu Option!!!\n");	
				choice = 0;
				break;
				
		}			
	}
	
	return choice;
}

int getNumberFromUser(int min, int max) {
	
	// do something like getMenuOption to get a NUMBER between
	// min and max
	//dyamic message 
	// Enter # from <min> to <max>:
	//if number not between min and max, respond and reask.
	//if is not a number, respond and reask. don't forget to flush
}

int printArray(int []) {
}

int convertDecimalToBinary (int NumToConvert, int NumLeadingZeroes) {
	
	// you MUST use getNumberFromUser function with range 0 to 32767
	// create an array 
	// print array 
	// we will talk about the exact algroithm in class.
	
	
}

int main(void) {
	// variables
	int choice;
	
	choice = getMenuOption();
	
	switch(choice) {
		case -1:
			printf("Use Quit Program.\n");		
			break;		
			
		case 1:
			// get number from user function call goes here.
			printf("\n\n*** TEST GET NUMBER FROM USER ***\n");
			break;
			
		case 2:
			// print array function call goes here.	
			printf("\n\n*** TEST PRINT ARRAY OF NUMBERS ***\n");
			break;
		
		case 3:
			//convert decimal to binary function goes here
			printf("\n\n*** TEST CONVERT TO BINARY ***\n");			
			break;
		
		case 4:
			//printf("Menu Item 4 not implemented.\n");		
			break;
	}	
	
} // end function main

