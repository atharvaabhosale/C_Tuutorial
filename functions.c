#include<stdio.h>

// Declare function
void printHello();
void goodBye();
int addition(int a, int b);

int main() {
    
    // Function Calling 
    printHello();    
    goodBye();
    int c = addition(10,20);
    
    printf("\n%d",c);
    return 0;
}

// Actual Function 
void printHello() {
    printf("Hello Atharva, This side function!!\n");
}

void goodBye() {
    printf("Good Bye Atharva!!");
}

int addition(int a, int b) {
    return  a + b;
}

