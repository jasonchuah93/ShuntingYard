#include "unity.h"
#include "operatorEvaluate.h"
#include <stdlib.h>
#include "mock_operatorPop.h"

void setUp(){}
void tearDown() {}

void test_operator_evaluate(){
	
	Stack numStack;
	Stack opeStack;
	
	operatorPop_Expect(&opeStack);
	
	operatorEvaluate(&numStack,&opeStack);
}