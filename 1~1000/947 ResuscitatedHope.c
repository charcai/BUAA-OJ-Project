#include<stdio.h>

char leftcw[4]= {'<','^','>','v'};
char leftccw[4]= {'<','v','>','^'};
char rightcw[4]= {'>','v','<','^'};
char rightccw[4]= {'>','^','<','v'};
char downcw[4]= {'v','<','^','>'};
char downccw[4]= {'v','>','^','<'};
char upcw[4]= {'^','>','v','<'};
char upccw[4]= {'^','<','v','>'};
char a[3],b[3];
int n;

void find (char* x, char* y, int n,char target)
{
	char cw=0,ccw=0;
	if(x[n]==target)cw=1;
	if(y[n]==target)ccw=1;
	if(cw&&ccw)printf("sleepy jyb\n");
	else if(cw)printf("cw\n");
	else printf("ccw\n");
}

int main()
{
	while(scanf("%s%s%d",a,b,&n)!=EOF)
	{
		n%=4;
		if(a[0]=='<')find(leftcw,leftccw,n,b[0]);
		else if (a[0]=='>')find(rightcw,rightccw,n,b[0]);
		else if (a[0]=='^')find(upcw,upccw,n,b[0]);
		else find(downcw,downccw,n,b[0]);
	}
}
