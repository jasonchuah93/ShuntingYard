#include "unity.h"
#include "ShuntingYard.h"
#include "stack.h"
#include <malloc.h>
#include <string.h>
#include "mock_getToken.h"


void setUp(){}
void tearDown() {}


void test_should_verify_first_token_type_from_unknown_token(){
	//Create test fixture
	Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));
	testTokenizer->rawString = "2+3";
	testTokenizer->startIndex=0;
	testTokenizer->length=3;
	//Mock getToken function and get the first token which is 2
	//and cast it to Number Token 
	getToken_ExpectAndReturn(testTokenizer,(Token*)2);
	Token *numToken = getToken(testTokenizer);
	TEST_ASSERT_EQUAL(2,numToken);
}

void test_should_verify_second_token_type_fron_unknown_token(){
	//Create test fixture
	Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));
	testTokenizer->rawString = "2+3";
	testTokenizer->startIndex=0;
	testTokenizer->length=3;
	//Mock getToken function and get the second token which is "+"
	//and cast it to Operator Token 
	getToken_ExpectAndReturn(testTokenizer,(Token*)"+");
	Token *opeToken = getToken(testTokenizer);
	TEST_ASSERT_EQUAL_STRING("+",opeToken);

}

void test_should_verify_third_token_type_fron_unknown_token(){
	//Create test fixture
	Tokenizer *testTokenizer = malloc(sizeof(Tokenizer));
	testTokenizer->rawString = "2+3";
	testTokenizer->startIndex=0;
	testTokenizer->length=3;
	//Mock getToken function and get the third token which is 3
	//and cast it to Number Token 
	getToken_ExpectAndReturn(testTokenizer,(Token*)3);
	Token *numToken = getToken(testTokenizer);
	TEST_ASSERT_EQUAL(3,numToken);

}

void test_initStack_should_initiate_and_return_a_stack_properly(){
	stackT *testStack = (stackT*)initStack("2+3",3);
	TEST_ASSERT_NOT_NULL(testStack);
	TEST_ASSERT_EQUAL_STRING("2+3", testStack->data);
	TEST_ASSERT_EQUAL(3,testStack->maxSize);
	TEST_ASSERT_EQUAL(0,testStack->top);
}

void test_destroyStack_should_destroy_and_return_empty_stack(){
	stackT *testStack = initStack(NULL,0);
	TEST_ASSERT_NOT_NULL(testStack);
	TEST_ASSERT_EQUAL_STRING(NULL,testStack->data);
	TEST_ASSERT_EQUAL(0,testStack->maxSize);
	TEST_ASSERT_EQUAL(0,testStack->top);


	
}