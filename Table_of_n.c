#This program prints the table of a number

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i<=10;i++){
        printf("%d X %d = %d \n",n,i,i*n);
    }
    return 0;
}
