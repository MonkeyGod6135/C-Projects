#include "./headers/Pointers.h"

/*
* each variable and function gets stored in memory (in the stack)
* each location in memory to where it's stored is reffered to as
* its address. unlike other variables that store values of a
* certain type (like int, float, etc.), a pointer is a variable
* that stores a address. an interger variable stores an interger value.
* a integer poniters stores a address of a ingter variable.
*/
// this function prints itself
void printAddress(void){
    //the %p foramt specifier
    printf("The printAddress function is stored at %p\n", printAddress);
}
// this function returns the address of the global variable i
int * getAddress(void){
    // declare a pointer
    // the star is needed when declaring a pointer
    int *ptr;

    //get address of global variable i and store
    // it in pointer
    // must use the & when accessing an address of a variable
    //the star is not needed when storing
    ptr = &i;

    //return pointer
    // star is not needed
    return ptr;

}
// 
int getDataAtAddress(void){
    // declare a pointer
    // the star is needed when declaring a pointer
    int *ptr;

    //get address of global variable i and store
    // it in pointer
    // must use the & when accessing an address of a variable
    //the star is not needed when storing
    ptr = &i;

    //return pointer
    // star is not needed
    return (*ptr);
}