# An Algorithm to sort an array of 0s, 1s and 2s in Ascending Order.

This is an algorithm to sort an array of 0s, 1s and 2s in ascending order using time complexity O(n).


This work presents the algorithm used and a directory called src.

The src directory contains the source code and compiled executable file  writing in C.


### Algorithm

* Step 1: Iterate (loop) through the array and do the folowing
	*count all 0s using variable (c_0s)
	*Count all 1s using variable (c_1s)
	*Count all 2s using variable (c_2s)

* Step 2: Update the array by setting start positon variable (pos = 0).	
	* Inserting 0s:
		- From O[pos] to O[c_0s -1], insert 0s.
		- Set the starting position of 1s, pos = pos + c_0s.
	* Inserts 1s:
		- From O[pos] to O[(pos+c_1s) -1], insert 1s.
		- Set the starting position of 2s, pos = pos + c_1s.
	* Insert 2s:
		- From O[pos] to O[(pos + c_2s) -1]

* Step 3. Print the update array.
	* Loop through the updated array and print from O[0] to O[n-1].
		

	

