#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Pointers.h"
#include "./headers/PassByReference.h"

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
    /*char student[] = "Dwan";
    char course[] = "Ruby";
    char programmer[] = "Yukihiro Matsumoto";
    congratulate1(student, course, programmer);
    congratulate2(student, course, programmer);
    printf("%.2f degrees celsius = %.2f degrees fahrenheit \n",
    0.0, fahrenheitFromCelsius(0.0));
    *printf("%.2f degrees celsius = %.2f degrees fahrenheit \n",
     100.0, fahrenheitFromCelsius(100.0)); */
    // printAddress();
     //printf("The global variable i stores its value at %p\n", getAddress());
     //printf("The global variable i stores now stores %d\n", getDataAtAddress());
     //printf("The global static variable j now stores %.2f\n", storeDataAddress());
     //printf("The size of the value in the global stsic variable j is %d\n", getDoubleBytes());
     //printf("The size of the pointer to the global static variable j is %d\n", getPointerToDoubleBytes());
     //pointerToNull();
     // Testing Pass by Reference
     //declare doubles for (x,y) point
     double x =3.0;
     double y =4.0;
     // delcare doubles for (radiusPtr, thetaPtr)
     double radiusPtr;
     double thetaPtr;

     // call cartesianToPolor
     // must use the & to accress an address of a variable
     cartesianToPolar(x, y, &radiusPtr, &thetaPtr);

     printf("(%.2f, %.2f) equals (%.2f, %.2f) \n", x ,y, radiusPtr, thetaPtr);
}