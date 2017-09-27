#include <stdio.h>

static int data; //global value (if not static it would be written up

void apples_set(int value)
{
    data = value;
}

int apples_get()
{
 
    return data;
}

