// Find the factorial of a number using recursion
# include<stdio.h>
int factorial(int num){
    if (num == 0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(){
    int c,fact;
    printf("Enter the number  : ");
    scanf("%d",&c);
    fact = factorial(c);
    printf("%d! = %d\n",c,fact);
    return 0;
}