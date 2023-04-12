#include <stdio.h>

// Function declarations
int operate(int num1, char operator, int num2);
int getValueOperator();
int help();

int main(int argc, char *argv[]){
    getValueOperator();
}

// Retrieve value's and the operator from the user
int getValueOperator(){
    // Initialize variables
    int num1, num2;
    char operator;
    // Get the users two numbers and the operation they want to do
    printf("Number one: ");
    scanf("%d", &num1);
    printf("Operator: ");
    scanf(" %c", &operator);
    printf("Number two: ");
    scanf(" %d", &num2);
    // Call operate function to do the calculation
    operate(num1, operator, num2);

    return 0;
}

// Provide the results from the operation
int operate(int num1, char op, int num2){
    int result = 0;    
    switch(op){
        case '+': 
            result = num1 + num2;
            printf("Addition: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtration: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication: %d\n", result );
            break;
        case '/':
            result = num1 / num2;
            printf("Division: %d\n", result );
            break;
        case '%':
            result = num1 + num2;
            printf("Remainder: %d\n", result );
            break;
        default:
            printf("Unable to do operation.\n");
            help();
    }
    return 0;
}

int help(){
    printf("#####################\n");
    printf("#     Operations    #\n");
    printf("#     +,-,*,/,%%     #\n");
    printf("#####################\n");

    return 0;
}