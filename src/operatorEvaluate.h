#ifndef __OPERATOR_EVALUATE_H__
#define __OPERATOR_EVALUATE_H__


#include "ShuntingYard.h"

typedef struct{
	int value1;
	int value2;
}Stack;


int operatorEvaluate(Stack *numberStack , Stack *operatorStack);

#endif //__OPERATOR_EVALUATE_H__