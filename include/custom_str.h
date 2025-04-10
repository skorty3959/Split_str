#ifndef CUSTOM_STR_H
#define CUSTOM_STR_H
#include <stdlib.h>
#include <stdio.h>

char* read_string(size_t limit);
char** split_str(char* input,const char* marks,int* count);

#endif

