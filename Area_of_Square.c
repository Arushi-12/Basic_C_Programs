#include<stdio.h>
int main(){
    int side;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    printf("The area of the square with side %d is %d",side,side*side);
    return 0;
}
