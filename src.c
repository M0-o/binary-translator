#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int numberOfSubstrings(char* string){

    int numOfSubstrings = 1 ;

    for(int i=0 ; i< strlen(string) ; i++ ){

            if(string[i]==' ') numOfSubstrings++ ;

    }

    return numOfSubstrings ;

}

char** intialisingArray(char* string , int* arraySize){

    int size = numberOfSubstrings( string) ;

    char** subStringsArray = (char**)malloc(size * sizeof(char*));

    for(int i=0 ; i< size ; i++ ){

        *(subStringsArray+i)= (char*)malloc(9 * sizeof(char));

    }

    *arraySize = size ;
    return subStringsArray ;
}

char **split(char *string , int *outputSize){

    char** subStringsArray = intialisingArray(string , outputSize ) ;

    int indexOfSubstring = 0 ;
    int k = 0 ;
    char* currentSubstring = (char*)malloc(9 * sizeof(char));
    currentSubstring[8]='\0';

    for(int i=0 ; i< strlen(string) ; i++ ){

        if(string[i]==' '){
            strcpy(subStringsArray[indexOfSubstring], currentSubstring) ;
            indexOfSubstring++ ;
            k=0 ;
            continue ;
        }

        currentSubstring[k++]= string[i];

    }

    strcpy(subStringsArray[indexOfSubstring], currentSubstring) ;
    return subStringsArray ;
}

void displayBinStringArray(char** stringArray , int size){


    printf("[");

    for(int i=0 ; i< size ; i++){

        printf("\"");
        printf(" %s ", stringArray[i]);
        printf("\"");

        if(i != size-1) printf(" , ");
        if((i+1)%5 == 0 ) printf("\n") ;

    }
    printf("]");
}

void displayIntArray(int* intArray , int size){


    printf("[");

    for(int i=0 ; i< size ; i++){

        printf(" %d ", intArray[i]);

        if(i != size-1) printf(" , ");
        if((i+1)%5 == 0 ) printf("\n") ;

    }
    printf("]");
}

void displayCharArray(int* CharArray , int size){


    printf("[");

    for(int i=0 ; i< size ; i++){

        printf("\"");
        printf(" %c ", CharArray[i]);
        printf("\"");

        if(i != size-1) printf(" , ");
        if((i+1)%5 == 0 ) printf("\n") ;

    }
    printf("]");
}




int binaryToDecimal(char* string){

    int result=0 ;

    for(int i=0 ; i< strlen(string) ; i++){
        int power = 7 - i ;
        if(string[i]=='1') result+= pow(2 , power );
    }

    return result ;
}


int* binStringArrayToNumberArray(char** stringArray , int size){

    int* intArray = (int*)malloc(size * sizeof(int));

    for(int i=0 ; i<size ; i++){

        intArray[i]= binaryToDecimal(stringArray[i]);

    }

    return intArray ;

}

char* numberArrayToCharString(int* intArray , int size){

    char* string= (char*)malloc((size) * sizeof(char));
    string[size ]='\0' ;

    for(int i=0 ; i< size ; i++){
        string[i]= (char)intArray[i] ;
    }

    return string ;

}



