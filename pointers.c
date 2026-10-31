#include <stdio.h>

int main()
{
    int age = 22;
    
    int *ptr = &age;
    
    int _age = *ptr;
    
    printf("%d\n", _age);
    
    printf("%p \n", ptr);
    printf("%u \n", ptr);
    
    printf("%d \n", *ptr);
    
    printf("%d \n", *(&age));
    
    // Pointer to pointer 
    
    float price = 118.00;
    float *ptr1 = &price;
    
    printf("%p \n", ptr1);
    
    float **pptr = &ptr1;
    
    printf("%p \n", pptr); // Address of pptr
    printf("%p \n", *pptr); // Address of ptr1
    printf("%f \n", **pptr); // Value of ptr1
    

    return 0;
}