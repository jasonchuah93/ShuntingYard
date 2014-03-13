#include "unity.h"
#include "operatorEvaluate.h"
#include <stdlib.h>
#include "mock_numberPush.h"
#include "mock_operatorPop.h"
#include "mock_numberPop.h"
#include "mock_createNumberToken.h"

void setUp(){}
void tearDown() {}

void test_operator_evaluate(){
	//Initialize token and stack
	Tokenizer tokenizer;
	Operator multiply = {.operators=MULTIPLY};
	Token *token1 = (Token*)&multiply;
	
	Number number4 = {.value=4};
	Token *token2 = (Token*)&number4;
	
	Number number3 = {.value=3};
	Token *token3 = (Token*)&number3;
	
	Operator addition = {.operators=ADD};
	Token *token4 = (Token*)&addition;
	
	Number number2 = {.value=2};
	Token *token5 = (Token*)&number2;
	
	int tempResult,finalResult; 
	Stack numStack;
	Stack opeStack;
	Token resultToken;
	Token finalToken;
	
	//Pop token1 from operator stack
	operatorPop_ExpectAndReturn(&opeStack,token1);
	//Pop token2 from number stack
	numberPop_ExpectAndReturn(&numStack,token2);
	//Pop token3 from number stack
	numberPop_ExpectAndReturn(&numStack,token3);
	//Multiply token2 and token3 using token1
	tempResult = number4.value*number3.value;
	createNumberToken_ExpectAndReturn(tempResult,&resultToken);
	
	
	//Push the multiply value back to number stack
	numberPush_Expect(&resultToken);
	//Pop token4 from operator stack
	operatorPop_ExpectAndReturn(&opeStack,token4);
	//Pop the multiply value token from number stack
	numberPop_ExpectAndReturn(&numStack,&resultToken);
	//Pop token5 from number stack
	numberPop_ExpectAndReturn(&numStack,token5);
	//Add multiply value token with token5 using token4
	finalResult = tempResult+number2.value; // here 12 +2= 14
	createNumberToken_ExpectAndReturn(finalResult,&finalToken);
	
	//Call function
	operatorEvaluate(&numStack,&opeStack,tempResult,finalResult); 
	
}
	