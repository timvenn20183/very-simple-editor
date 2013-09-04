#include <iostream>
#include <stdio.h>

using namespace std;

// structures
typedef struct Block
{
    char content[80];
    struct Block *next;
    struct Block *prev;
}block;

// globals
static block *start_pointer = (block *)malloc(sizeof(block));

int main()
{
    start_pointer->next = NULL;
    start_pointer->prev = NULL;
    strcpy(start_pointer->content,"TEST");

    block *test_pointer = start_pointer;
    cout << test_pointer->content;

    return 0;
}
