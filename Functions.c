// include pre-processor
#include "./headers/Functions.h"

/*  This function ahs 3 parameters, all having char *
*   when you have a * in the type of a parameter, it means the 
*   parameter is a pointer. pointers refer to memory locations
*   instead of holding values. Char * means the parameters refer
*   to a memory location that would store a collection of characters.
*   this is how C deals with strings. there is no string type in C;
*   there is char *.
*/
void congratulate1(char *student, char *course, char *programmer){
    printf("%s has done as much %s programming as %s. \n",
    student, course, programmer);
}

void congratulate2(char *student, char *course, char *programmer){
    // strlen function
    int days = strlen(programmer);

    printf("%s has done as much %s programming as %s could fit into %d days. \n",
    student, course, programmer, days);
}

float fahrenheitFromCelsius(float celsius){
    // macro expression
    float fahrenheit = fahrenheit(celsius);
    //return
    return fahrenheit;
}