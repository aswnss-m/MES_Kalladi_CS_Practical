// Create a pattern with the number N.
#include<stdio.h>
int main(){
    char N[20];
    int i,j;
    printf("Enter N : ");
    scanf("%s",N);
    for(i=0;N[i] != '\0';i++){
        for(j=i;N[j] != '\0';j++){
            printf("%c",N[j]);
        }
        printf("\n");
    }
    return 0;
}