// Check for palindrome string.
#include <stdio.h>
int main(){
    char A[100];
    int i,flag=1,len=0;
    printf("Enter the string : ");
    scanf("%s",A);
    for (i=0;A[i]!='\0';i++){
        len++;
    }
    for(i=0;i<len;i++){
        if(A[i] != A[len-1]){
            flag =0;
        }
        len--;
    }
    if(flag ==1){
        printf("Palindrome !\n");
    }
    else{
        printf("Not Palindrome !\n");
    
    }
    return 0;
}