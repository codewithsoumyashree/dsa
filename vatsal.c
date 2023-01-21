#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, j, X;
    printf("Enter size\n");
    scanf("%d",&n);

    printf("Enter Sum equivalent\n");
    scanf("%d",&X);
    printf("Enter array elements \n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The pairs are : \n");

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == X){
                printf("%d , %d\n", arr[i], arr[j]);
            }
        }
    }
}