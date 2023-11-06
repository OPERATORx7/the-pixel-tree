/*  
author: @operatorx7
project name: a pin tree in c
original release date: 16/10/2019

project description:
The main program ask you to type a digit number. 
Once a digit number is received by the signed decimal integer format specifier, "%d", a for loop function display 'a pin tre' according to N number, which is our "%d".
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	/*variable declaration*/
	int i, N, nbStar, nbSpace, numLigne;
	
	/*entering the number of fir branches*/
	printf("Please enter a number to display the tree: ");
	scanf("%d",&N);
	
	/*display of the tree according to N number*/
	
	for(numLigne=0; numLigne<=N; numLigne++){
		nbSpace=N-numLigne;
		nbStar=2*numLigne-1;
		
	for(i=0; i<=nbSpace; i++){
	  	printf(" ");
	}
		  
	for(i=0; i<nbStar; i++){
		printf("*");
	}
		  
		printf("\n");
	}
	return EXIT_SUCCESS;
}
