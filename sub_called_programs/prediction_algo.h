#include <stdio.h>
int prediction_algo(float marks, float attendence)
{
	float mark=marks,classes=attendence,totalmarks=10,totalclass=100,alpha;
	{
	//prediction algo
	mark=mark/totalmarks;
	classes=classes/totalclass;
	alpha=(mark+classes)/2;
	alpha=t*10;
	}
	printf("prediction for 2nd sessional:%.0f\n",alpha);
	return 0;
}
