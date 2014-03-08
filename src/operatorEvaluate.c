#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShuntingYard.h"
#include "operatorEvaluate.h"


int operatorEvaluate(Stack *numberStack , Stack *operatorStack){
	
	void *tempToken;
	//Pop multiply token from Operator Stack
	tempToken = operatorPop(operatorStack);
	//numberPop(numberStack);
	
	return 1;
	
	
}
	