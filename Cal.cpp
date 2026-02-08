#include <stdio.h>

// --- Prototypes ---
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

int main()
{
    int num1, num2;
    float result;
    char op;

    printf("simple Calculator (+ , - , * , /)\n");
    printf("enter first num: ");
    scanf("%d", &num1);
    printf("enter operator (+ , - , * , /): ");
    scanf(" %c", &op);
    printf("enter second num: ");
    scanf("%d", &num2);
    printf("\nprocess:\n");
    printf("\nprocess:\n");
    
    if (op == '+')
    {
        result = add(num1, num2);
        printf("%d + %d\n", num1, num2);
        printf("result:\n%.0f\n", result);
    }
    else if (op == '-')
    {
        result = sub(num1, num2);
        printf("%d - %d\n", num1, num2);
        printf("result:\n%.0f\n", result);
    }
    else if (op == '*')
    {
        result = mul(num1, num2);
        printf("%d * %d\n", num1, num2);
        printf("result:\n%.0f\n", result);
    }
     else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Error: Cannot divide by zero!\n");
        }
        else
        {
            result = div(num1, num2);
            printf("%d / %d\n", num1, num2);
            printf("result:\n%.2f\n", result);
        }
    }
    return 0;
}//end if

int add(int a, int b)
{
    return a + b;
}//edit plus func

int sub(int a, int b)
{
    return a - b;
}//testconflict

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return (float)a / b;
}
//new develop
