#include "unity.h"
#include "stack.h"
#include "mock_push.h"
#include "mock_getToken.h"
#include "ShuntingYard.h"




void setUp(){}

void tearDown() {}





void test_should_verify_first_token_type_from_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(22, testTokenizer, (Token*)2);

 Token *numToken = getToken(testTokenizer);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((numToken)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

}



void test_should_verify_second_token_type_fron_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(35, testTokenizer, (Token*)"+");

 Token *opeToken = getToken(testTokenizer);

 UnityAssertEqualString((const char*)("+"), (const char*)(opeToken), (((void *)0)), (_U_UINT)37);



}



void test_should_verify_third_token_type_fron_unknown_token(){



 Tokenizer *testTokenizer = malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(49, testTokenizer, (Token*)3);

 Token *numToken = getToken(testTokenizer);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((numToken)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);



}



void test_initStack_should_initiate_and_return_a_stack_properly(){

 stackT *testStack = (stackT*)initStack("2+3",3);

 if ((((testStack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)57);;};

 UnityAssertEqualString((const char*)("2+3"), (const char*)(testStack->data), (((void *)0)), (_U_UINT)58);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((testStack->maxSize)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);



}



void test_destroyStack_should_destroy_and_return_empty_stack(){

 stackT *testStack = destroyStack(((void *)0),0);

 if ((((testStack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)65);;};

 UnityAssertEqualString((const char*)(((void *)0)), (const char*)(testStack->data), (((void *)0)), (_U_UINT)66);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((testStack->maxSize)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);



}



void test_emptyStack_should_be_empty(){



 stackT *testStack = stackIsEmpty(" ",0);

 if ((((testStack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)74);;};

 UnityAssertEqualString((const char*)(" "), (const char*)(testStack->data), (((void *)0)), (_U_UINT)75);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((testStack->maxSize)), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);



}



void test_fullStack_should_be_full(){



 stackT *testStack = stackIsFull("2+3*4/5+6",9);

 if ((((testStack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)83);;};

 UnityAssertEqualString((const char*)("2+3*4/5+6"), (const char*)(testStack->data), (((void *)0)), (_U_UINT)84);



}



void test_push_first_token_to_number_stack(){



 Number *numToken = malloc(sizeof(Number));

 numToken->type = NUMBER;

 numToken->value = 2;



 stackTokens *numberToken = numberStack(2);

 pushNumberTokenToNumberStack_CMockExpectAndReturn(95, numToken, 2);

 stackTokens *firstToken = pushNumberTokenToNumberStack (numToken);



 UnityAssertEqualNumber((_U_SINT)((firstToken)), (_U_SINT)((numberToken->value1)), (((void *)0)), (_U_UINT)98, UNITY_DISPLAY_STYLE_INT);





}
