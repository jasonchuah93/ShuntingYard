#include "unity.h"
#include "operatorEvaluate.h"
#include "mock_operatorPop.h"
#include "mock_numberPush.h"
#include "mock_numberPop.h"
#include "mock_createNumberToken.h"


void setUp(){}

void tearDown() {}



void test_operator_evaluate(){



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





 operatorPop_CMockExpectAndReturn(37, &opeStack, token1);



 numberPop_CMockExpectAndReturn(39, &numStack, token2);



 numberPop_CMockExpectAndReturn(41, &numStack, token3);



 tempResult = number4.value*number3.value;

 createNumberToken_CMockExpectAndReturn(44, tempResult, &resultToken);







 numberPush_CMockExpect(48, &resultToken);



 operatorPop_CMockExpectAndReturn(50, &opeStack, token4);



 numberPop_CMockExpectAndReturn(52, &numStack, &resultToken);



 numberPop_CMockExpectAndReturn(54, &numStack, token5);



 finalResult = tempResult+number2.value;

 createNumberToken_CMockExpectAndReturn(57, finalResult, &finalToken);





 operatorEvaluate(&numStack,&opeStack,tempResult,finalResult);



}
