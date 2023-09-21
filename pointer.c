#include <stdio.h>

int  counter ,z , swap ;
void sort(int *ptr);
int arr[10]={0};

void main(){
	for(counter=0 ; counter < 10 ; counter++)
	{
		printf("Enter Numeber%d: ",counter);
		scanf("%d",&arr[counter]);
	}
	sort(arr);
	printf("Numbers After Sort:");
	for(counter=0 ; counter < 10 ; counter++)
	{
	printf("%d ",arr[counter]);
	}
}
void sort(int *ptr)
{
	for(counter=0 ; counter < 9 ; counter++)
	{
		for(z=0 ; z<9-counter ; z++)
		{
			if(ptr[z] > ptr[z+1])
			{
				swap = ptr[z];
				ptr[z] = ptr[z+1];
				ptr[z+1] = swap;
			}	
		}	
	}
}
