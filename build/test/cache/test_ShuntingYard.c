#include "unity.h"
#include "ShuntingYard.h"










void setUp(){}

void tearDown() {}



void test_evaluate_exploreShuntingYard_return_rawString(){



 Tokenizer expression = {.rawString = "2+3"};





 UnityAssertEqualString((const char*)("2+3"), (const char*)(expression.rawString), (((void *)0)), (_U_UINT)17);



}



void test_evaluate_exploreShuntingYard_return_startIndex(){



 Tokenizer expression = {.startIndex = 0};





 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((expression.startIndex)), (((void *)0)), (_U_UINT)26, UNITY_DISPLAY_STYLE_INT);



}



void test_evaluate_exploreShuntingYard_return_length(){



 Tokenizer expression = {.length =3};





 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((expression.length)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

}
