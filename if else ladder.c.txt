//demostrating if else ladder
#include <stdio.h>
int main()
{
	int maths,kisw,bio,phyc,chem,average_score;
	printf("enter the marks for the five subjects");
	scanf("%d%d%d%d%d",&maths,&kisw,&bio,&phyc,&chem);
		average_score=(maths+kisw+bio+phyc+chem)/5;
	printf("average_score=%d\n",average_score);
	if(average_score>=90&&average_score<=100)
	{
		printf("grade A");
	}
	else if(average_score>=80&&average_score<90)
	{
		printf("grade B");
	}
else if(average_score>=70&&average_score<80)
{
	printf("grade C");
}
	else if(average_score>=60&&average_score<70)
	{
		printf("grade D");
		}
else if(average_score>=50&&average_score<60)
	{
		printf("grade E");
	}
		else if(average_score>50)
	{
		printf("fail");
	}
	}
