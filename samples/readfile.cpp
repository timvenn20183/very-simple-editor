#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{

    // open file

    // pointer to file
    FILE * pFile;
    long lSize;
    char * buffer;
    char character;
    size_t result;
    long counter;

    pFile = fopen(argv[1],"r");

    fseek (pFile,0, SEEK_END);
    lSize = ftell(pFile);
    rewind (pFile);

    buffer = (char*) malloc (sizeof(char)*lSize);

    result = fread(buffer,1,lSize,pFile);

    fclose(pFile);


    counter = 0;
    character = buffer[counter];

    while (character != '\0') {
        printf("%c",character);
        counter++;
        character = buffer[counter];
    }

    free (buffer);

    // print filename
    printf("\nFilename : %s\n", argv[1]);

    // output 
    printf("File size is : %lu\n", lSize);    
    
    return 0;    

}
