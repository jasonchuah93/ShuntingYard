#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShuntingYard.h"
#include "operatorEvaluate.h"


int operatorEvaluate(Stack *numberStack , Stack *operatorStack,int tempValue,int finalValue){
	
	void *tempToken;
	
	//Pop token1 from Operator Stack
	tempToken =(Token*)operatorPop(operatorStack);
	//Pop token2 from number stack
	tempToken =(Token*)numberPop(numberStack);
	//Pop token3 from number stack
	tempToken =(Token*)numberPop(numberStack);
	//Multiply token2 and token3 by token1
	tempToken =(Token*)createNumberToken(tempValue);
	//Push the multiplyResult token to number stack
	numberPush(tempToken);
	//Pop token 4 from Operator Stack
	tempToken =(Token*)operatorPop(operatorStack);
	//Pop the multiplyResult token from number stack
	tempToken =(Token*)numberPop(numberStack);
	//Pop token5 from number stack
	tempToken =(Token*)numberPop(numberStack);
	//Add multiplyResult token and token5 by token 4
	tempToken =(Token*)createNumberToken(finalValue);

	return 1;
	
}
	
	
	
	
	