#include <stdio.h> 
#include <string.h>

struct ST_DHTML {
	char szTag[25];
	char szCmdTagAbertura[25];
	char szCmdTagFechamento[25];
	int iTipo;
	int (*function)(char*);
};