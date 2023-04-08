// This program takes a number n from the user and  calculates sum from 0 to n and also print them in reverse. 
int main(){
    int n,sum;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("The sum is: %d",sum);
    
    for(int i = n;i >= 1;i--){
        printf("%d",i);
    }
    return 0;
}
