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
