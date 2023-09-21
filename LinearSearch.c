#include<stdio.h>


int size , counter , target , count =0 ;
int numbers[]={0};
void main()
{
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	for(counter = 0 ; counter < size ; counter++)
	{
		printf("Enter Number %d: ", counter);
		scanf("%d",&numbers[counter]);
	}
	printf("Enter Number to serach : ");
	scanf("%d",&target);
	for(counter = 0 ; counter < size ; counter++)
	{
		if(numbers[counter] == target)
		{
			printf("Element found at index %d\n",counter);
			count++;
		}
	}	
	printf("Element found %d times",count);
}