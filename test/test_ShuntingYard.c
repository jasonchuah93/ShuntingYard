#include "unity.h"
#include "ShuntingYard.h"
#include "mock_Addition.h"

void setUp(){}
void tearDown() {}

void test_initTokenizer_should_initiate_and_return_a_tokenizer_properly()
{
	//Initiate a new tokenizer which will contain the data of 2+3
	Tokenizer *testTokenizer = initTokenizer("2+3");
	TEST_ASSERT_NOT_NULL(testTokenizer);
	TEST_ASSERT_EQUAL_STRING("2+3", testTokenizer->rawString);
	TEST_ASSERT_EQUAL(0,testTokenizer->startIndex);
	TEST_ASSERT_EQUAL(3,testTokenizer->length);
}

void test_should_add_2_values_from_tokenizer_using_stack(){
	
	
	addition_ExpectAndReturn(2,3,5); //mocking
	Expression (2,3,5);
	TEST_ASSERT_EQUAL(5,ans);
	
	
}