//This function calculates the factorial of a anumber n i.e. a user input.
#include<stdio.h>
int factorial(int n);
int main(){
    int n,f;
    printf("Enter the number: ");
    scanf("%d",&n);
    f = factorial(n);
    printf("The factorial is: %d",f);
    return 0;
}
int factorial(int n){
    if (n == 1){
        return 1;
    }
    int f_n1 = factorial(n-1);
    int f_n = f_n1  * n ;
}
