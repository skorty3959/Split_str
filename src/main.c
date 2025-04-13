#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/custom_str.h"

char** split_str(char* input,const char* marks,int* count)
	{
	char* str=strdup(input);
	if(str == NULL)
		{
		return NULL;
		}
	*count=0;
	char* token=strtok(str,marks);
	while(token != NULL)
		{
		(*count)++;
		token=strtok(NULL,marks);
		}
	char** result=(char**)calloc(*count,sizeof(char*));
	if(result == NULL)
		{
		free(str);
		return NULL;
		}
	}
	


int main()
	{
	size_t limit=1000;
	int count=0;
	const char* marks=",";
	char* input=read_string(limit);
	char** substrings=split_str(input,marks,&count);
	for(int i=0;i<count;i++)
		{
		printf("%s\n",substrings[i]);
		free(substrings[i]);
		}
	free(substrings);
	}

