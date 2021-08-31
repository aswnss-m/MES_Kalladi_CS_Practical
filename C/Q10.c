// Find the currency denomination of a given amount.
// Print the number of 2000,500,100 etc notes to make the given amount
#include <stdio.h>
#include<math.h>
int main(){
    int temp,i,current[10],amount;
    int available_currencies[] = {2000,500,200,100,50,20,10,5,2,1};
    printf("Enter the amount : ");
    scanf("%d",&amount);
    printf("Given amount : %d\n",amount);
    for(i=0;i<10;i++){
        if(amount>=available_currencies[i]){
            temp = floor(amount/available_currencies[i]);
            current[i] = temp;
            amount = amount-(available_currencies[i]*current[i]);
        }
        else{
            current[i]=0;
        }
    }
    for (i=0;i<10;i++){
        printf("Rs %d : %d\n",available_currencies[i],current[i]);
    }
    return 0;
}