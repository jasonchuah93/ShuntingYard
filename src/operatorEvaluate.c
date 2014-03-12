#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShuntingYard.h"
#include "operatorEvaluate.h"


int operatorEvaluate(Stack *numberStack , Stack *operatorStack){
	void *tempToken;
	Token *resultToken;
	//Pop token1 from Operator Stack
	tempToken =(Token*)operatorPop(operatorStack);
	//Pop token2 from number stack
	tempToken =(Token*)numberPop(numberStack);
	//Pop token3 from number stack
	tempToken =(Token*)numberPop(numberStack);
	//Multiply token2 and token3 by token1
	//resultToken = (Token*)multiply(numberStack->value1,operatorStack->value2);
	
	
	
	
	return 1;
	
}
	