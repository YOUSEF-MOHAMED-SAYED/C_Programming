#include<stdio.h>

unsigned int operand1 ,operand2, ID ;
void Add();
void Subtract();
void Multiply();
void Divide();
void And();
void Or();
void Not();
void Xor();
void Reminder();
void Increment();
void Decrement();

void main()
{
	printf("Enter the Operation ID: ");
	scanf("%d",&ID);
	if((ID==1) || (ID==2) || (ID==3) || (ID==4) || (ID==5) || (ID==6) || (ID==8) || (ID==9)){
		printf("Enter the first operand: ");
		scanf("%d",&operand1);
		printf("Enter the second operand: ");
		scanf("%d",&operand2);
		switch(ID){
			case(1):
				Add();break;
			case(2):
				Subtract();break;
			case(3):
				Multiply();break;
			case(4):
				Divide();break;
			case(5):
				And();break;
			case(6):
				Or();break;
			case(8):
				Xor();break;
			case(9):
				Reminder();break;
		}

	}
	else if((ID==7) || (ID==10) || (ID==11)){
		printf("Enter the One operand: ");
		scanf("%d",&operand1);
		switch(ID){
			case(7):
				Not();break;
			case(10):
				Increment();break;
			case(11):
				Decrement();break;	
		}
	}
	else
		printf("WROND ID!");
}
void Add(){
	printf("The Operation is Add The Result is : %d ",operand1 + operand2);
}
void Subtract(){
	printf("The Operation is Subtract The Result is : %d ",operand1 - operand2);
}
void Multiply(){
	printf("The Operation is Multiply The Result is : %d ",operand1 * operand2);
}
void Divide(){
	printf("The Operation is Divide The Result is : %d ",operand1 / operand2);
}
void And(){
	printf("The Operation is And The Result is : %d ",operand1 && operand2);
}
void Or(){
	printf("The Operation is Or The Result is : %d ",operand1 || operand2);
}
void Xor(){
	printf("The Operation is Xor The Result is : %d ",operand1 ^ operand2);
}void Reminder(){
	printf("The Operation is Reminder The Result is : %d ",operand1 % operand2);
}
void Not(){
	printf("The Operation is Not The Result is : %d ",!(operand1));
}
void Increment(){
	printf("The Operation is Increment The Result is : %d ",++operand1);
}
void Decrement(){
	printf("The Operation is Decrement The Result is : %d ",--operand1);
}







