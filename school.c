#include<stdio.h>

int classes[3][10] =
{
	{40 , 45 , 60 , 70 , 43 , 44 , 52 , 85 , 97 , 35},
	{75 , 69 , 80 , 79 , 83 , 44 , 29 , 82 , 76 , 40},
	{68 , 81 , 84 , 73 , 40 , 49 , 72 , 76 , 91 , 55}
};

int passed ,failed , i , j , k , z , sum ;
double average ; 

void main()
{
	//passed and failed
	for(i=0 ; i < 3; i++)
	{
		for(j=0 ; j<10 ; j++)
			if(classes[i][j] >= 50)
			{
				passed++;
			}
			else
				failed++;
	}
	printf("Number of passed stduents is : %d\n",passed);
	printf("Number of failed stduents is : %d\n",failed);
	
	// sort
	for(i=0 ; i < 3 ; i++)
	{
		for(j=0 ; j < 9 ;j++)
		{
			for(k=0; k< 9-j ; k++)
			{
				if(classes[i][k] > classes[i][k+1])
				{
					z = classes[i][k];
					classes[i][k] = classes[i][k+1];
					classes[i][k+1] = z;
				}
			}
		}
	
	}
	// highest grade
	if( classes[0][9] > classes[1][9])
	{
		if(classes[0][9] > classes[2][9])
		{
			printf("Highest grade is %d\n",classes[0][9]);
		}
		else
			printf("Highest grade is %d\n",classes[2][9]);
			
	}
	else if( classes[1][9] > classes[2][9])
	{
		printf("Highest grade is %d\n",classes[1][9]);
	}
	else
	{
		printf("Highest grade is %d\n",classes[2][9]);
			
	}
	
	// lowest grade
	if( classes[0][9] < classes[1][9])
	{
		if(classes[0][9] < classes[2][9])
		{
			printf("Lowest grade is %d\n",classes[0][9]);
		}
		else
			printf("Lowest grade is %d\n",classes[2][9]);
			
	}
	else if( classes[1][9] < classes[2][9])
	{
		printf("Lowest grade is %d\n",classes[1][9]);
	}
	else
	{
		printf("Lowest grade is %d\n",classes[2][9]);
			
	}
	
	//average 
	for(i=0 ; i < 3; i++)
	{
		for(j=0 ; j<10 ; j++)
		{
			sum += classes[i][j];
		}
	}
	average = (double)sum / 30 ;
	printf("Average grade is: %d\n",average);




}