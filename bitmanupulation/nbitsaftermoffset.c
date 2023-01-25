#include<stdio.h>

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}

int getmask(int n, int m){
    int mask = (1 << n) - 1; // create a mask with n bits set
    mask = mask << m; // shift the mask by m bits
    printf("Mask: %x\n", mask);
    return mask;
}

int main(){
    int numberofbitstoset = 2;
    int afteroffset = 3;
    int mask = getmask(numberofbitstoset,afteroffset);
    printBits(sizeof(mask), &mask);
    //printf("mask: %b", getmask(numberofbitstoset, afteroffset));
    //getmask(int numberofbitstoset, int afteroffset);
}