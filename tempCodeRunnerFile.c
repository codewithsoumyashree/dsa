#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int stackA_60[MAXSIZE], stackB_60[MAXSIZE], stackC_60[MAXSIZE];
int sizeA=0,sizeB=0,sizeC=0;
void Push(int *stack,int item, int *size) 
{ 
	if((*size)>MAXSIZE) 
	{ 
		printf("OVERFLOW\n"); 
	} 
	else 
	{ 
		stack[*size] = item; 
		(*size)++;
	}
}
int Pop(int *stack, int *size)
{
    if( (*size) <= 0 ) 
	{ 
		return -1; 
	} 
	else 
	{ 
		int x = stack[(*size)-1];
        printf("POPED ELEMENT %d",x);
		(*size)--; 
		return x; 
	}
}
void copyAtoC() 
{ 
	int x; 
	while ( sizeA > 0 )   
	{ 
		x = Pop( stackA_60, &sizeA); 
		Push( stackB_60, x, &sizeB); 
	} 
	while ( sizeB > 0 ) 
	{ 
		x = Pop( stackB_60, &sizeB); 
		Push( stackC_60, x, &sizeC); 
	} 
}
int main()
{
    int size, item1, item; 
	scanf("%d",&size);
    for(item1 = 0; item1<size; item1++) 
	{ 
		scanf("%d",&item); 
		Push( stackA_60, item, &sizeA); 
	}
    copyAtoC();
	return 0;
}