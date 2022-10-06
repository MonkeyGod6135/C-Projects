// include header file
#include "./headers/BasicIO.h"

// write the code for the functions declared
// in the header file

//This function will use printf and puts
// to output data to stdout (therminal)
void output (void){
    // printf formats and outputs a series
    // of characters and values to stdout
    // it does not append a new line character
    // to the end
    printf("your first name is %s\n", FIRST_NAME);
    printf("your last name is %s\n", LAST_NAME);
    printf("your weight is %f and your age is %d\n", WEIGHT, AGE);

    //puts outputs a string (char *) to stdout.
    // it does append a new line character to the 
    // end of its output
    puts(FIRST_NAME);
    puts(LAST_NAME);
}

// this function will use a scanf to
// input data from stdin (keyboard)
void input(void){
    // declare variables to store input data
    int age;
    float weight;
    char name[] = " ";

    //input an integer
    printf("Enter your age: ");
    // scanf reads the value from the stdin per
    // type specifed in the fromat specifier
    // and stores it in the address of the 
    // specifed variable
    scanf("%d", &age);
    printf("Entered age is: %d", age);

    //float
    printf("\nEnter your weight: ");
    scanf("%f", &weight);
    printf("Entered wieght is: %.2f", weight);

    //char
    printf("\nEnter your name: ");
    scanf("%s", &name);
    printf("Entered wieght is: %s", name);
}