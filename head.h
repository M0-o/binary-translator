#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

char **split(char *string , int *outputSize);
void displayBinStringArray(char** stringArray , int size);
int* binStringArrayToNumberArray(char** stringArray , int size);
void displayIntArray(int* intArray , int size);
void displayCharArray(int* CharArray , int size);
char* numberArrayToString(int* intArray , int size);

#endif // HEAD_H_INCLUDED
