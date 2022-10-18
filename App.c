#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"

int main(void){
    // puts("Hello World!!");
    // Testing Basic IO functionality
    // output();
    // input();
    // Testing Decisions functionality
    //decisions1();
    //decisions2();
    //decisions3();
    //decisions4();
    //decisions5();
    // Testing Basic IO functionality
    //loops1();
    //loops2();
    //loops3();
    //loops4();
    //loops5();
    // TESTING Functions 
    // Declare three character arrays 
    char student[] = "Dwan";
    char course[] = "Ruby";
    char programmer[] = "Yukihiro Matsumoto";
    congratulate1(student, course, programmer);
    congratulate2(student, course, programmer);
    printf("%.2f degrees celsius = %.2f degrees fahrenheit \n",
    0.0, fahrenheitFromCelsius(0.0));
    printf("%.2f degrees celsius = %.2f degrees fahrenheit \n",
    0.0, fahrenheitFromCelsius(100.0));

}