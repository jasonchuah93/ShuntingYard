#include "unity.h"
#include "operatorEvaluate.h"
#include "mock_operatorPop.h"
#include "mock_numberPop.h"
#include "mock_Multiply.h"


void setUp(){}

void tearDown() {}



void test_operator_evaluate(){



 Operator multiply = {.operators=MULTIPLY};

 Token *token1 = (Token*)&multiply;



 Number number4 = {.value=4};

 Token *token2 = (Token*)&number4;



 Number number3 = {.value=3};

 Token *token3 = (Token*)&number3;



 Stack numStack;

 Stack opeStack;



 operatorPop_CMockExpectAndReturn(25, &opeStack, token1);



 numberPop_CMockExpectAndReturn(27, &numStack, token2);



 numberPop_CMockExpectAndReturn(29, &numStack, token3);

 operatorEvaluate(&numStack,&opeStack);

}
