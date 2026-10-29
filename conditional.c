#include<stdio.h>

int main(){
    // Simple conditional statement
    int age = 20;
    
    if (age >= 18) {
        printf("You can vote!");
    }
    else{
        printf("You cannot vote!");
    }
    
    printf("\n");
    
    //Ternery statement
    age >= 18 ? printf("You can vote broo!!") : printf("You cannnot vote broo, its done!!");
    
    // Check wheather the letter is in Capital or small
    
    char ch;
    printf("Enter the Character name = ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        printf("The Character is in small letters");
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("The character is in big letters");
    }
    else {
        printf("You have entered and unknown character!");
    }
}