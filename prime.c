#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++)
        if(n%i==0){
            c++;
        }
    if(c==2){
    printf("it is a prime  number");
    }
    else{
        printf("it is not a prime number");
    }
}