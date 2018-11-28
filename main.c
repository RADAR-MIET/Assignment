#include <stdio.h>
#include "sub_called_programs/marks_1.h"
#include "sub_called_programs/attendence_1.h"
#include "sub_called_programs/prediction_algo.h"
int main()
{
	int rollno,branch;			//declaration of int data type
	float marks,attendence;		//declaration of float data type
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
	if(branch==2 && rollno>124)
	{
		printf("CSE doesnot have students more than 124\n");	//check if the user enter rollno more than 124 if branch =2
		return(0);
	}
	if (branch==1 && rollno>10)
	{
		printf("IT doesnot have students more than 10\n");		// check if the user enter rollno more than 10 if branch =1
		return(0);
	}
	{/*for switch case so that there can be no same case*/
		if(branch==2)
		{
			rollno=rollno;
		}
		else
		{
			rollno=rollno+124;
		}
	}
	{/*call for function in another file*/
		marks=marks_1(rollno);// call for marks_1 program in marks_1.h header file
		attendence=attendence_1(rollno);//call for attendence_1 program in attendence_1.h header file
		prediction_algo(marks,attendence);//call for prediction_algo(),its where magic happens
	}
	return 0;
}