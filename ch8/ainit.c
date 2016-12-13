// Name : ainit.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

int main(void) {

	/* Array initialization */
	int a[5] = {1, 3}; // == {1, 3, 0, 0, 0}
	int b[5] = {0/*, 0, 0, 0, 0*/}; // All-zero array.
	int c[] = {1, 2, 3, 4, 5}; // The length of the array may be omitted if an initializer is present.

	/* Designated initializer */
	int d[15] = {[2] = 27, [5] = 6 , [14] = 1}; // Initialize only designated elements, and all the others become zero.
	int e[] = {[2] 27, [5] =6 , [14] = 1, [15] =0};


	return 0;
}