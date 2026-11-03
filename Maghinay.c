#include <stdio.h>
int main () {
    int number;
    printf("Enter any Number:");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%dEven Number!", number);
    }else{
        printf("%d Odd Number!", number);
    }
}
