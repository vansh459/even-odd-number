#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if (x%2==0){
        printf("even");
    }
    if (x%2!=0);{
        printf("odd");
    }
    return 0;
}
