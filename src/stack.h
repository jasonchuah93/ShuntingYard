#ifndef __STACK_H__
#define __STACK_H__

#include "ShuntingYard.h"

typedef char stackToken; //This type is the tokens enter into the stack


//This struct store the token into the stack
typedef struct {
  char *data;
  int maxSize;
 
}stackT;


typedef struct {
	int value1;
	int value2;
	Operation ope;
}stackTokens;
	
stackT *initStack(char *expression, int value);
stackT *destroyStack(char *expression,int maxSize);
stackT *stackIsEmpty(char *expression,int maxSize);
stackT *stackIsFull(char *expression, int maxSize);

stackTokens *numberStack ( int value1 );
#endif //__STACK_H__