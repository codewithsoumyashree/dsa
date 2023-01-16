#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int stackA_60[MAXSIZE], stackB_60[MAXSIZE], stackC_60[MAXSIZE];
int sizeA=0,sizeB=0,sizeC=0;
void Push(int *stack,int item, int *size_60) 
{ 
	if((*size_60)>MAXSIZE) 
	{ 
		printf("OVERFLOW\n"); 
	} 
	else 
	{ 
		stack[*size_60] = item; 
		(*size_60)++;
	}
}
int Pop(int *stack, int *size_60)
{
    if( (*size_60) <= 0 ) 
	{ 
		return -1; 
	} 
	else 
	{ 
		int x = stack[(*size_60)-1];
		(*size_60)--; 
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
    printf("\nTHE ELEMENT IS COPPIED FROM A TO B");
	while ( sizeB > 0 ) 
	{ 
		x = Pop( stackB_60, &sizeB); 
		Push( stackC_60, x, &sizeC); 
	} 
    printf("\nTHE ELEMENT IS COPPIED FROM b TO c");
}
int main()
{
    int size_60, item1, item;
    printf("enter size:");
	scanf("%d",&size_60);
    for(item1 = 0; item1<size_60; item1++) 
	{ 
		scanf("%d",&item); 
		Push( stackA_60, item, &sizeA); 
	}
    copyAtoC();
    printf("\nTHE ELEMENTS ARE COPPIED COMPLETLY");
	return 0;
}