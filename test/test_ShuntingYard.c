#include "unity.h"
#include "ShuntingYard.h"
#include <malloc.h>
#include <string.h>
#include "mock_getToken.h"


void setUp(){}
void tearDown() {}


void test_should_get_unknowToken_from_expression(){
	
	//Create test fixture
	Token numToken = {0}; 
	Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));
	testTokenizer->rawString = "2+3";
	testTokenizer->startIndex=0;
	testTokenizer->length=3;
	
	getToken_ExpectAndReturn(testTokenizer,(Token*)2);
	Token *newToken = getToken(testTokenizer);
	
	TEST_ASSERT_EQUAL(2,newToken);
	
	
}

