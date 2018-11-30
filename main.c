#include <stdio.h>
#include "sub_called_programs/prediction_algo.c"
int main()
{
	int rollno,branch;			//declaration of int data type
	printf("Enter your branch\n1. IT\n2. CSE");
	printf("\nEnter your choice(1,2)\n");
	scanf("%d",&branch);
	if (branch >= 3)			//check if the user enter number other than 1 or 2
	{
		printf("Wrong Choice!\n");
		return(0);
	}
	printf("Enter your rollno:\n");
	scanf("%d",&rollno);
	if(branch==2 && rollno>=125)
	{
		printf("CSE doesnot have students more than 124\n");	//check if the user enter rollno more than 124 if branch =2
		return(0);
	}
	if (branch==1 && rollno>=11)
	{
		printf("IT doesnot have students more than 10\n");		// check if the user enter rollno more than 10 if branch =1
		return(0);
	}
	{/*for array*/
		if(branch==2)
		{
			rollno=rollno-1;
		}
		else
		{
			rollno=rollno+123;
		}
	}
	{/*call for function in another file*/
		prediction_algo(rollno);//call for prediction_algo(),its where magic happens
	}
	return 0;
}
