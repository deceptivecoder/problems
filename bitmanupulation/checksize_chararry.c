

#include<stdio.h>
#include<string.h>
#define MYSIZEOF(x) (char*) (&x+1) - (char*) (&x)

void *myMemcpy(void *dest_str, const void *src_str, size_t n){
    // Typecast src and dest addresses to (char *) 
    char *csrc = (char *)src_str; 
    char *cdest = (char *)dest_str;
    // Copy contents of src[] to dest[] 
    for (size_t i=0; i<n; i++) 
        cdest[i] = csrc[i];

    return dest_str;
}

void main(){
    char src[] = "Hardik";
    char dst[10];
    size_t size = sizeof(src)/sizeof(src[0]);   //used to find the actual size of data
    printf("\nstrlen of char array: %ld\n", strlen(src));  //strlen tries to find number of char in array, look for null and count.
    printf("\nnsize of char array :%ld\n", size);

    printf("\nmysizeof :%ld\n", MYSIZEOF(src));
    printf("\nmyMemcpy :%s\n", (char*)myMemcpy(dst, src, sizeof(src)));

    int src1[] = {0,1,2,3,4,5,6,7};
    int dst1[10];
    size_t size1 = sizeof(src1)/sizeof(src1[0]);   //used to find the actual size of data
    
    printf("\nsize of int array :%ld\n", size1);
    printf("\nmysizeof :%ld\n", MYSIZEOF(src1));
    printf("\nmyMemcpy :%s\n", (char*)myMemcpy(dst1, src1, sizeof(src1)));
    for (size_t i=0; i<size1; i++)
        printf(" %d ", dst1[i]);

    


}

//strlen of char array src ("Hardik"): 6 whereas sizeof char array 7 
//strlen of char array src ("H"): 1 whereas sizeof char array 2
//strlen of char array src ("H"): 0 whereas sizeof char array 1
//Strlen() counts the numbers of characters in a string while sizeof() returns the size of an operand.
//Strlen() looks for the null value of variable but sizeof() does not care about the variable value.
//Return value in strlen() is long int on the other hand return value in sizeof() is unsigned int.
