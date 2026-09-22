#include <stdio.h>

int main(){

    int n1, n2;
    char n;
    float result;


    printf("For Sum(a)");
    printf("\nFor Difference(b)");
    printf("\nFor Multiply(c)");
    printf("\nFor Devision(d)");

    printf("\n\nEnter Any One: ");
    scanf("%c", &n);

    if(n != 'a' || n != 'b' || n != 'c' || n != 'd'){
        printf("Please Enter Valid Character"); 
        return 0;
    }

    printf("\nEnter Your Frist Number: ");
    scanf("%d", &n1);

    printf("Enter Your Secound Number: ");
    scanf("%d", &n2);


    switch(n){

        case 'a' : result = n1 + n2;
                    printf("\n%d + %d = %.2f",n1, n2, result); break;

        case 'b' : result = n1 - n2;
                    printf("\n%d - %d = %.2f",n1, n2 ,result); break;

        case 'c' : result = n1 * n2;
                    printf("\n%d X %d = %.2f",n1, n2 ,result); break;

        case 'd' : if(n2 != 0){
                    result = n1 / n2;
                    printf("\n%d / %d = %.2f",n1, n2 ,result); break;
                    }
                    
                    else{
                        printf("0 Can't Devided");
                    }

    }


}