// Display the short form of a string. E.g. Computer Science : CS
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    char userInput[200],abb[10];
    int index=0,i;
    printf("Enter the String : ");
    fgets(userInput,200,stdin);
    for(i=0;userInput[i] != '\0';i++){
        if(isupper(userInput[i])){
            abb[index] = userInput[i];
            index++;
        }
    }
    printf("Abbreviation : %s\n",abb);
}