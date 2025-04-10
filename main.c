#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char** split_str(char* input,char* marks,int* count)
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
	int n;
	scanf("%d\n",&n);
	char* input=(char*)calloc(n,sizeof(char));
	char* marks=",";
	int count;
	for(int i=0;i<n;i++)
		{	
		scanf("%s\n",input[i]);
		}
	char** substrings=split_str(input,marks,count);
	for(int i=0;i<count;i++)
		{
		printf("%s\n",substrings[i]);
		free(substrings[i]);
		}
	free(substrings);
	}

