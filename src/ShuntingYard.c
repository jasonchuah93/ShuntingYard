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
	
	return contents;
}

stackT *destroyStack(char *expression,int maxSize){
	stackT *contents = malloc(sizeof(stackT));
	contents->data = NULL;
	contents->maxSize = maxSize;
	
	return contents;
}

stackT *stackIsEmpty(char *expression,int maxSize){
	stackT *contents = malloc(sizeof(stackT));
	contents->data = " ";
	contents->maxSize = maxSize;
	
	return contents;
}

stackT *stackIsFull(char *expression, int maxSize){
	stackT *contents = malloc(sizeof(stackT));
	contents->data = "2+3*4/5+6";
	contents->maxSize = maxSize;
	
	return contents;

}

stackTokens *numberStack ( int value1 ){
	
	stackTokens numStack;
	numStack.value1 = value1;
	Number *numToken= {2};
	Token *newToken = (Token*)(numToken);
	stackTokens *contents = malloc(sizeof(stackTokens));
	contents->value1 = newToken;
	return contents;
	
}







		



