//include pre-processor directive
#include "./headers/Loops.h"

// this function will use a while loop
void loops1(void){
    //declare loop counter
    int i = START;
//set up loop
//use macro expression as condition
    while(condition(i)){
    printf("%d ", i);
    i--;
    }
    printf("blastoff\n");
}

// this function will use a do while loop
void loops2(void){
    //declare loop counter
    int i = START;
//set up do-while loop
    do {
    printf("%d ", i);
    i--;
    } while(condition(i)); // use macro expression as condition
    printf("blastoff\n");
}

// this function will use a for loop
void loops3(void){
    //declare loop counter
    int i = START;

//set up for loop
//use macro expression as condition of for loop
    for(i = START; condition(i); i--){
        printf("%d ", i);
    }
    printf("blastoff\n");
}

// this function will use a break statement
void loops4(void){
    //declare loop counter
    int i = START;

//set up for loop
//use macro expression as condition of for loop
    for(i = START; condition(i); i--){
        printf("%d ", i);

        if (break(i)){
            //terminate loop
            break;
        }
    }
    printf("early blastoff\n");
}

// this function uses a continue statement to skip the current
//iteration of the loop
void loops5(void){
    //declare loop counter
    int i = START;
//use macro expression as condition of for loop
    for(i = START; condition(i); i--){
        //use macro expression
        if (continue(i) != 0){
            //skip current iteration of loop
            continue;
        }
        printf("%d ", i);
    }
    printf("early blastoff\n");
}