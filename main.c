#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    char inputs[][1026]={"01110100 01101000 01100001 01101110 01101011 00100000 01111001 01101111 01110101",
    "01001001 00100111 01001101 00100000 01010100 01001000 01000101 00100000 01000010 01000101 01010011 01010100 00100000 01010000 01010010 01001111 01000111 01010010 01000001 01001101 01001101 01000101 01010010 00100000 01010100 01001111 00100000 01001000 01000001 01010110 01000101 00100000 01000101 01010110 01000101 01010010 00100000 01001100 01001001 01010110 01000101 01000100 00100000 01010010 01000001 01000001 01000001 01000001 01000001 01000001 01000001 01000001 01000001 01000001 01000001 00100000 00101110 00101110 00101110 00100000 01101111 01101011 00100000 01101110 01101111 01110100 00100000 01110010 01100101 01100001 01101100 01101100 01111001 00100000 01100010 01110101 01110100 00100000 01110011 01110100 01101001 01101100 01101100 00100000 01101101 00100000 01110000 01110010 01100101 01110100 01110100 01111001 00100000 01100111 01101111 01101111 01100100 00100000 00100001 00100001 00100000 01110100 01101000 01101001 01110011 00100000 01101001 01110011 00100000 01100011 01101111 01101111 01101100 00100000 "};

    int outputSize ;

    for(int i=0 ; i< 2 ; i++){
        char* input = inputs[i] ;
        char** ArrayOfStrings = split(input , &outputSize);
        int* intArray = binStringArrayToNumberArray(ArrayOfStrings , outputSize);
            displayBinStringArray(ArrayOfStrings , outputSize);
            printf("\n\n");
            displayIntArray(intArray , outputSize);
            printf("\n\n");
            displayCharArray(intArray , outputSize);
            printf("\n\n");
            char* finalString = numberArrayToCharString( intArray , outputSize);
            puts(finalString);
            printf("\n\n");
    }

    system("pause");

    return 0;
}
