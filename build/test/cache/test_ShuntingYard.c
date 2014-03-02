#include "unity.h"
#include "stack.h"
#include "mock_getToken.h"
#include "ShuntingYard.h"




void setUp(){}

void tearDown() {}





void test_should_verify_first_token_type_from_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(21, testTokenizer, (Token*)2);

 Token *numToken = getToken(testTokenizer);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((numToken)), (((void *)0)), (_U_UINT)23, UNITY_DISPLAY_STYLE_INT);

}



void test_should_verify_second_token_type_fron_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(34, testTokenizer, (Token*)"+");

 Token *opeToken = getToken(testTokenizer);

 UnityAssertEqualString((const char*)("+"), (const char*)(opeToken), (((void *)0)), (_U_UINT)36);



}



void test_should_verify_third_token_type_fron_unknown_token(){



 Tokenizer *testTokenizer = malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(48, testTokenizer, (Token*)3);

 Token *numToken = getToken(testTokenizer);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((numToken)), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);



}



void test_initStack_should_initiate_and_return_a_stack_properly(){

 stackT *testStack = (stackT*)initStack("2+3",3);

 if ((((testStack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)56);;};

 UnityAssertEqualString((const char*)("2+3"), (const char*)(testStack->data), (((void *)0)), (_U_UINT)57);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((testStack->maxSize)), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((testStack->top)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

}



void test_destroyStack_should_destroy_and_return_empty_stack(){

 stackT *testStack = initStack(((void *)0),0);

 if ((((testStack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)64);;};

 UnityAssertEqualString((const char*)(((void *)0)), (const char*)(testStack->data), (((void *)0)), (_U_UINT)65);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((testStack->maxSize)), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((testStack->top)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);







}
