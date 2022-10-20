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

// this function changes the value at the address of the global 
// variable j
double storeDataAddress(void){

    // declare a pointer
    // the star is needed when declaring a pointer
    double *ptr;

    //get address of global variable j and store
    // it in pointer
    // must use the & when accessing an address of a variable
    //the star is not needed when storing an address to a pointer
    ptr = &j;

    //chane the value in the global variable J via the pointer
    *ptr += *ptr;

    //return pointer
    // star is not needed
    return (*ptr);
}
// this function returns the size of a double stored
int getDoubleBytes(void){
    // declare a pointer
    // the star is needed when declaring a pointer
    double *ptr;

    //get address of global variable j and store
    // it in pointer
    // must use the & when accessing an address of a variable
    //the star is not needed when storing an address to a pointer
    ptr = &j;

    //chane the value in the global variable J via the pointer
    *ptr += *ptr;

    //return the size of the value stored in the pointer
    // star is not needed
    return (sizeof(*ptr));

}
// this function returns the size of the pointer to a double 
int getPointerToDoubleBytes(void){

    // declare a pointer
    // the star is needed when declaring a pointer
    double *ptr;

    //get address of global variable j and store
    // it in pointer
    // must use the & when accessing an address of a variable
    //the star is not needed when storing an address to a pointer
    ptr = &j;

    //chane the value in the global variable J via the pointer
    *ptr += *ptr;

    //return the size of the pointer
    // star is not needed
    return (sizeof(ptr));
}
// this function prints the address to a pointer
void pointerToNull(void){
    // declare a pointer
    // the star is needed when declaring a pointer
    double *ptr;

    // store a value of null at the address in the pointer to a double
    // the star is not needed when storing an address to a pointer
    // NULL is an address where no data exists
    ptr = NULL;

    // get the address of the global static variable j
    // and store it in the pointer
    // must use teh & operator when accessing an address of a variable
    //star is not needed
    ptr = &j;

    // check if the pointer isnt null
    //the star is not needed when accessing the address of a pointer
    if (ptr){
        printf("The pointer is not null %p \n", ptr);
    } else {
        printf("The pointer is null %p \n", ptr);
    }
}