#include "unity.h"
#include "operatorEvaluate.h"
#include "mock_operatorPop.h"


void setUp(){}

void tearDown() {}



void test_operator_evaluate(){



 Stack numStack;

 Stack opeStack;



 operatorPop_CMockExpect(14, &opeStack);



 operatorEvaluate(&numStack,&opeStack);

}
