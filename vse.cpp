#include <iostream>
#include <stdio.h>
#include "vse_file.cpp"
#include "vse_scrn.cpp"

using namespace std;

// constants
const int characters_per_block = 80;                

// structures
typedef struct Block
{
    char content[characters_per_block];
    struct Block *next;
    struct Block *prev;
}block;

int main(int argc, char* argv[]) {
    return 0;
}
