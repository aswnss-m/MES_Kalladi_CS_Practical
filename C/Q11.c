// Find the Armstrong numbers within a given range.
#include<stdio.h>
#include<math.h>
int find_Amstrong(int num){
    int len = 0, numcpy = num,numcpy2=num,sum=0;
    while(num!=0){
        num = num /10;
        len++;
    }
    while (numcpy!=0)
    {
        sum = sum+pow((numcpy%10),len);
        numcpy=numcpy/10;
    }
    if(sum ==numcpy2){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int x,y,i;
    printf("Enter the lower limit : ");
    scanf("%d",&x);
    printf("Enter the upper limit : ");
    scanf("%d",&y); 
    for(i=x;i<=y;i++){
        if(find_Amstrong(i)==1){
            printf("%d\n",i);
        }
    }
    return 0;
}