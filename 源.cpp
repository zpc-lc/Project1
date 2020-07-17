#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100

void swap(int &a,int &b) 
{	
	int t;
	t = a;
	a = b;
	b = t;

}
//引用类型做形参传递值，变更实参的值


int main()
{
	int m = 3, n = 5;

	 

	//swap(m, n);//交换M、N的值

	printf("%d, %d\n",m,n);

	return 0;

}