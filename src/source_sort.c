/*
This is a simple algorithm to sort 0s, 1s and 2s in ascending order using time complexity O(n).

By: Stephen Boachie
email: stephen.boachie@hotmail.com
date: 13.04.2020

*/


#include <stdio.h>

// The array O as given and size defined as variable n.
int O[30] = { 2 , 2 , 1 , 0 , 1 , 0 , 1 , 1 , 0 , 2 , 2 , 1 , 1 , 1 , 2 , 0 , 0 , 1 , 1 , 0 , 1 , 0 , 1 , 2 , 0 , 0 , 0 , 1 ,1 , 2 }; 
int n = 30 ;

int c_0s = 0, c_1s = 0, c_2s = 0;   //Variable to hold the counts of 0s, 1s, 2s.
int pos = 0;                        // Variable to set the array index postion.


//Function to count the number of occurrences of all 0s, 1s, 2s
void count_arr(int * O, int n) {
    for (int i =0; i < n; i++) {
        if (O[i] ==0) c_0s++;       //Count total number of 0s.
        else if (O[i] ==1) c_1s++;  //Count total number of 1s.
        else if (O[i] ==2) c_2s++;  //Count total number of 2s.
        }
}


// Function to update the array by inserting 0s, 1s, 2s using index position.
void update_arr(int *O){

	// insert all the 0s from the beginning (pos for the length of c_0s)
	while (c_0s > 0) { 
		O[pos++] = 0;       //Inserting 0s and updating the index position with 0s count.
		c_0s--; 
	} 

	//insert all the 1s from the updated pos for the length of c_1s.
	while (c_1s > 0) { 
		O[pos++] = 1;       //Inserting 1s and updating the index position with counts of 1s.
		c_1s--; 
	} 

	//insert all the 2s from the updated pos for the length of c_2s.
	while (c_2s > 0) { 
		O[pos++] = 2;       //Inserting 2s while updating the postion to the end of the array. 
		c_2s--; 
	} 
 
}


// Function to display the output of the sorted array.
void display() {

    printf("The sorted array is: int O[30] = {");
    for (int i = 0; i < n; i++)  {      //Itterating through the sorted array 
        printf ("%d", O[i]);            //Displaying all the values of the array.                
        if (i < (n-1)) printf (",");    //Controlling the printing of the separator(,)
    }
    printf("}")  ;
}

// Main function
int main(){
    count_arr( O, n);   // Counting all 0s, 1s, 2s in the array.
    update_arr(O);      // Sorting the array in ascending order.
    display();          // Displaying the sorted array.
    return 0;       
  
}

