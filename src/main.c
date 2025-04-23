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
	char* token=strtok(str,marks);
	char** result=NULL;
	while(token != NULL)
		{
		(*count)++;
		if(*count == 1)
			{
			result=(char**)calloc(*count,sizeof(char*));
			
			}
		else
			{
			char** test =(char**)realloc(result,(*count)*sizeof(char*));
			if(test == NULL)
				{
				(*count)--;
				for(int i=0;i<(*count);i++)
					{
					free(result[i]);
					}
				}	
			}
		result[*count-1]=(char*)calloc(strlen(token)+1,sizeof(char));
		strcpy(result[*count-1],token);
		result[*count-1][strlen(token)]='\0';
		token=strtok(NULL,marks);
		}
	free(str);
	return(result);
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
	return 0;
	}

