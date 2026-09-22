#include <stdio.h>

int main(){

    float result;
    char opption;
    int N1, N2;

    printf("Enter Your Equation: ");
    scanf("%d %c %d", &N1, &opption, &N2);

    switch(opption)
    {
    case '+' : result = (float)N1+N2;
               printf("Sum Is = %.2f",(float)result);
               break;
    
    case '-' : result = (float)N1-N2;
               printf("Substraction Is = %.2f",(float)result);
               break;
    
    case '*' : result = (float)N1*N2;
               printf("Multiply Sum Is = %.2f",(float)result);
               break;
    
    case '/' : result = (float)N1/N2;
               printf("devision Is = %.2f",(float)result);
               break;

    default : printf("Please Enter Valid Equation");



    }


}