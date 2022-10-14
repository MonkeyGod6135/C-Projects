// include header file
#include "./headers/Decisions.h"

//write the code for the functions
//defined in the header file

//this function will use the comparison operators,
//and the if, if-else, if-else-if statements
void decisions1(void){
    //declare a variable of type float
    //int it using constant defined in header file
    float num = NUM;

    //use if statement
    if (num <40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);
    }

    num += num;
    //use if else statement
    if (num <40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);
    } else {
        printf("Num (%.2f) is not less than 40000.0 \n", num);
    }

    num = 0.0;
    //use if-else-if
    if (num == 0.0){
        printf("Num (%.2f) is equal to 0.0 \n", num);
    } else if (num < 40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);
    } else {
        printf("Num (%.2f) is not less than 40000.0 \n", num);
    }

}
/*this function will use the logical operators(&&, ||, !) */
void decisions2(void){
    //declare a variable of type float
    //int it using constant defined in header file
    float num = NUM;

    //logical AND operator
    //both must be true
    if (num > 0.0 && num < 40000.0){
        printf("Num (%.2f) is between 0.0 and 40000.0 \n",num);
    }
    // OR operator
    // only 1 must be true
    if (num > 0.0 || num < 40000.0){
        printf("Num (%.2f) is greater than 0.0 or less than 40000.0 \n",num);
    }

    // Not operator
    // inverse bool value
     if (!(num > 0.0 && num < 40000.0)){
        printf("Num (%.2f) is greater than 0.0 or less than 40000.0 \n",num);
    }
}

// bool
void decisions3(void){
//declare a variable of type float
//int it using constant defined in header file
float num = NUM;

//declare bool type
bool IsNotBetween = !(num > 0.0 && num < 40000.0); // false

// use bool in if else 
    if (IsNotBetween){
    printf("Num (%.2f) is not between 0.0 and 40000.0 \n",num);
    } else{
    printf("Num (%.2f) is between 0.0 and 40000.0 \n",num);
    }

}
// ternary operators
void decisions4(void){
    //declare a variable of type float
    //int it using constant defined in header file
    float num = NUM;

    //declare bool type
    bool IsNotBetween = !(num > 0.0 && num < 40000.0); // false

    // declare a variable of type float and initalize it
    //using ternary op
    float extra = IsNotBetween? (num - 40000.0) : 0.0; // operand 3 will be returned

    // display 
    printf("Extra is %.2f \n", extra);
}
// switch
    void decisions5(void){
        // declare variables
        char operation;
        int num1;
        int num2;

        // input operation
        printf("Enter operation to be preformed (+, -, *, /): ");
        scanf("%c", &operation);
        printf("Enter First number: ");
        scanf("%d", &num1);
         printf("Enter second number: ");
        scanf("%d", &num2);

        //switch
        switch (operation)
        {
        case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

            case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

            case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

            case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;

        
        default:
        printf("Invalid operation!\n");
            break;
        }
    }
    // short circut evaluation - the compiler skips evaluation of sub-expresstions in a logical expression
    void decisions6(void){
        // variables
        int x = 1;
        bool y = true;

        // short evaluation will not take place
        if(x == 1 && y){
            printf("If block executed.\n");
        } else {
            printf("Else block executed.\n");
        }

        // short evaluation will take place
         if(x == 2 && y){
            printf("If block executed.\n");
        } else {
            printf("Else block executed.\n");
        }

        y = false;
        // short evaluation will not take place
         if(x !=1 || y){
            printf("If block executed.\n");
        } else {
            printf("Else block executed.\n");
        }
        
    }