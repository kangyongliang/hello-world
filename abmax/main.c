#include <stdio.h>
#include <stdlib.h>
//#include "max.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	extern int max(int a, int b);
	int a=1,b=2,c;
	c=max(a,b);
	printf("the max is:%d\n",c);
//	printf("hello, c world.") ;
	return 0;
}

