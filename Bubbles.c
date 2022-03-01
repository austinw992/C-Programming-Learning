  
/*
 * File: bubble.c
 * Author: Austin Wang
 * Date Created: 1 September 2020
 * Purpose: 
 */


//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();

void sort();

// void function switches value in the array using pointers
void swap(int*,int*);






// variable that is storing an array of values
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};



//the following functions are based on the prototypes provided
//prototypes were instructed to not be touched


//display the different arrays and what numbers moved
void  printValues(){
	int x = 0;
	printf("[");
	// produces the values to be printed from the sort and swap
	//the amount for the loop is from the define MAX
	for (x =0; x <MAX; x++) {
		//tried to cancatication but the + gave errpr cpdes
		printf ( "%d" , values[x]);	
	}
	//prints out the different variarties as an array
	printf("]  \n", x);

} //ends the printValues function

//function created to sort the values in the array for propper organization
void sort(){
	int a;
	int b;
	//for loop that sorts the value in the array from smallest to largest
	//this bubble format was obtained from assignment
	for (a = 0; a < MAX-1; a++) {
		for (b = 0; b < MAX-1; b++)  {
			if (values[b] > values [b+1]) {
				swap(values+b, values+b+1);
	}
	}
	printValues();
	}

	// prints the sorted values within the array
	//printValues();

} //ends void sort function

//function is used to swap the values for a display of correct order
// pointers need to be assigned a variable for location
// the * means the position unlike & where it shows the address
void swap(int* small, int* large){

	 	//pointers to swap values in the array as the for loop runs in sort
		int temp;
		temp = *small;
		*small = *large;
		*large = temp;
	
} //ends void swap function


// main will run the program, given by instructor
int main(){

	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();

	return(0);
} //end main