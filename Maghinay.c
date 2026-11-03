#include <stdio.h>
#include <string.h>
int main () {
    // Check if a number is even or odd
    int number;
    char choice[10];
    do{

    printf("Enter any Number:");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%d is an Even Number!", number);
}else{
    printf("%d is an Odd Number!", number);
}

printf("\nDo you want to check another number? (Y/N: )");
scanf(" %c", &choice);

}while(strcmp(choice, "yes") == 0);
printf("Thank you for using the program!");
return 0;

}
