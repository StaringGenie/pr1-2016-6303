#include <stdio.h>
#include "get_name.h"
#include <string.h>

char* get_name()
{
    char* name = (char*)malloc(80*sizeof(char));
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n')
    {
      name[i] = ch;
      i++;
    }
    name[i] = '\0';
    return name;
}
