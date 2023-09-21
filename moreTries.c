#include<stdio.h>

void main()
{
	int ID , password ;
	printf("Please Enter your ID: ");
	scanf("%d",&ID);
	switch(ID){
	case(1234):
		printf("Please Enter your Password: ");
		scanf("%d",&password);
		if(password==7788)
			printf("Welcome Amr");
		else {
			printf("Try Again:");
			scanf("%d",&password);
			if(password==7788)
				printf("Welcome Amr");
				else{
					printf("Try Again:");
					scanf("%d",&password);
					if(password==7788)
						printf("Welcome Amr");
						else 
							printf("NO more tries!");
				}
		}		
	break;
	case(5678):
		printf("Please Enter your Password: ");
		scanf("%d",&password);
		if(password==5566)
			printf("Welcome Amr");
		else {
			printf("Try Again:");
			scanf("%d",&password);
			if(password==5566)
				printf("Welcome Amr");
				else{
					printf("Try Again:");
					scanf("%d",&password);
					if(password==5566)
						printf("Welcome Amr");
						else 
							printf("NO more tries!");
				}
		}		
	break;
	case(9870):
		printf("Please Enter your Password: ");
		scanf("%d",&password);
		if(password==1122)
			printf("Welcome Amr");
		else {
			printf("Try Again:");
			scanf("%d",&password);
			if(password==1122)
				printf("Welcome Amr");
				else{
					printf("Try Again:");
					scanf("%d",&password);
					if(password==1122)
						printf("Welcome Amr");
						else 
							printf("NO more tries!");
				}
		}		
	break;
	default:
		printf("You are Not register");
	}


}