// Name : ch2proj5.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) 
{
	int matrix[16];
	int row_sum[4];
	int col_sum[4];
	int dia_sum[2];
	
	printf("Enter the numbers from 1 to 16 in any order\n: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", 
				&matrix[0x0], &matrix[0x1], &matrix[0x2], &matrix[0x3], 
				&matrix[0x4], &matrix[0x5], &matrix[0x6], &matrix[0x7],
				&matrix[0x8], &matrix[0x9], &matrix[0xa], &matrix[0xb],
				&matrix[0xc], &matrix[0xd], &matrix[0xe], &matrix[0xf]);

	for (int i = 0; i < 4; ++i) 
	{
		row_sum[i] = 0;
		col_sum[i] = 0;
		for (int j = i * 4, k = i; j < (i + 1) * 4; ++j, k += 4)
		{
			row_sum[i] += matrix[j];
			col_sum[i] += matrix[k];
		}
	}
	
	dia_sum[0] = matrix[0] + matrix[5] + matrix[10] + matrix[15];
	dia_sum[1] = matrix[3] + matrix[6] + matrix[9] + matrix[12];


	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
				 matrix[0x0], matrix[0x1], matrix[0x2], matrix[0x3],
				 matrix[0x4], matrix[0x5], matrix[0x6], matrix[0x7],
				 matrix[0x8], matrix[0x9], matrix[0xa], matrix[0xb],
				 matrix[0xc], matrix[0xd], matrix[0xe], matrix[0xf]);

	printf("Row sums: %2d %2d %2d %2d\n", row_sum[0], row_sum[1], row_sum[2], row_sum[3]);
	printf("Col sums: %2d %2d %2d %2d\n", col_sum[0], col_sum[1], col_sum[2], col_sum[3]);
	printf("Diagonal sums: %2d %2d\n", dia_sum[0], dia_sum[1]);

	return 0;
}