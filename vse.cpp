#include <iostream>
#include <stdio.h>

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

// globals
static block *start_pointer = (block *)malloc(sizeof(block));

// FILE ROUTINES

// read file into memory
int read_file()
{
    // stub
}

// write file to disk
int write_file()
{
    // stub
}

// MEMORY ROUTINES

// add a new block 
void append_new_block()
{
    // stub
}

// return the last block
block last_block()
{
    // stub
    block *pointer = start_pointer;
    return block
}

// SCREEN ROUTINES

// setup current screen 
void init_screen()
{

}

// close down current screen 
void down_screen()
{

}

// MAIN ROUTINE

int main(int argc, char* argv[]) {

    // setup    
    start_pointer->prev = NULL;
    start_pointer->next = NULL;
    last_block();

    return 0;
}

