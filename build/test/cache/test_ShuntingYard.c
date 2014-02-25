#include "unity.h"
#include "mock_Addition.h"
#include "ShuntingYard.h"


void setUp(){}

void tearDown() {}



void test_initTokenizer_should_initiate_and_return_a_tokenizer_properly()

{



 Tokenizer *testTokenizer = initTokenizer("2+3");

 if ((((testTokenizer)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)12);;};

 UnityAssertEqualString((const char*)("2+3"), (const char*)(testTokenizer->rawString), (((void *)0)), (_U_UINT)13);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((testTokenizer->startIndex)), (((void *)0)), (_U_UINT)14, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((testTokenizer->length)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

}



void test_should_add_2_values_from_tokenizer_using_stack(){



 Tokenizer type;

 addition_CMockExpectAndReturn(21, 2, 3, 5);

 Expression (2,3,5);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((ans.x)), (((void *)0)), (_U_UINT)23, UNITY_DISPLAY_STYLE_INT);





}
