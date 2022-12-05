// #include<stdio.h>

// void main(){

//     char * str = "Kaushal";
//     str = "Billore";
//     //str[1] = 'x';
//     printf("%s\n", str);
// }


#include <stdio.h>
int main() {
    char hello[] = "Hello";
    const char * const str = hello; 
    str[4] = '!'; // error, attempt to modify the string
    char hi[] = "Hi";
    str = hi; // error, attempt to reassign the pointer to a different location.
    return 0;
}