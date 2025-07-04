#include <stdio.h>
#include <string.h>

/*
    5. Self-Check Quiz
    - A Union reuses the same memory for all members, where as a struct usually creates separate memory spaces for each member.
    - It is unsafe because it is undefined behaviour, when reading a member that was not recently written.
    - Please see below for code example:
    ```
    union test
    {
        uint32_t d;
        uint8_t  i;
    }
    union test data;
    data.d = 100;
    printf("%d", data.d);
    ```
*/

/* 6. Practice Assignment
    GPT, please see below for my answers to questions 6.
*/

union Data
{
    float f;
    int i;
    char c[4];
};


void chatgpt_learn(void)
{
    union Data d;
    d.i = 100;
    printf("%i :: %s :: %d", d.i, d.c, d.f);
    strncpy(d.c, "tes\0", 4-1);
    printf("%i :: %s :: %d", d.i, d.c, d.f);
}