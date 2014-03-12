#include "unity.h"
#include "operatorEvaluate.h"
#include <stdlib.h>
#include "mock_operatorPop.h"
#include "mock_numberPop.h"
#include "mock_Multiply.h"

void setUp(){}
void tearDown() {}

void test_operator_evaluate(){
	//Initialize token and stack
	Operator multiply = {.operators=MULTIPLY};
	Token *token1 = (Token*)&multiply;
	
	Number number4 = {.value=4};
	Token *token2 = (Token*)&number4;
	
	Number number3 = {.value=3};
	Token *token3 = (Token*)&number3;
	
	Stack numStack;
	Stack opeStack;
	//Pop token1 from operator stack
	operatorPop_ExpectAndReturn(&opeStack,token1);
	//Pop token2 from number stack
	numberPop_ExpectAndReturn(&numStack,token2);
	//Pop token3 from number stack
	numberPop_ExpectAndReturn(&numStack,token3);
	//Multiply token2 and token3 using token1
	
	
	//Push the multiply value back to number stack
	//Pop token4 from operator stack
	//Pop the multiply value token from number stack
	//Pop token5 from number stack
	//Add multiply value token with token5 using token4
	
	operatorEvaluate(&numStack,&opeStack);
}
	