#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "ShuntingYard.h"
#include "stack.h"
#include "push.h"
#include "pop.h"

Token verifyTokenTypeFromUnknownToken(Token *unknownToken){}

 stackT *initStack(char *expression, int maxSize){
	stackT *contents = malloc(sizeof(stackT));
	contents->data = expression;
	contents->maxSize = maxSize;
	contents->top = 0;
	return contents;
}

stackT *destroyStack(char *expression){
	stackT *contents = malloc(sizeof(stackT));
	free(contents->data);
	contents->data = NULL;
	contents->maxSize = 0;
	contents->top = 0;

} 


	









		



