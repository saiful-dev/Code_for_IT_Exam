#include<stdio.h>
int main() {
    int number,i;
    printf("Enter a positive integer :");
    scanf("%d",&number);
    printf("factor of %d are :",number);
    for ( i = 1; i <= number; ++i)
    {
        if (number %i == 0)
        {
            printf("%d, ",i);
        }
        
    }
    
}