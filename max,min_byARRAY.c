#include<stdio.h>

int numbers[10]={};
int counter , operand , z, j;



void main ()
{
	for(counter=0 ; counter<=9 ; counter++)
	{
		printf("Enter number%d: ",counter);
		scanf("%d",&numbers[counter]);
	}
	// bubble sort 
	for(counter=0 ; counter< 9 ; counter++)
	{
		for(j=0; j< 9-counter ; j++)
		{
			if(numbers[j] > numbers[j+1])
			{
				// swap
				z = numbers[j];
				numbers[j]= numbers[j+1];
				numbers[j+1]= z;
			}
		}
	}	
	printf("The Maximum Number is : %d\n",numbers[9]);
	printf("The Minimum Number is : %d\n",numbers[0]);


}