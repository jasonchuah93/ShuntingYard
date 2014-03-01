#include <string.h>
#include "unity.h"
#include "ShuntingYard.h"
//#include "mock_getToken.h"
//#include <stdlib.h>



void setUp(){}
void tearDown() {}

void test_evaluate_exploreShuntingYard_return_rawString(){
	//Create text fixture
	Tokenizer expression = {.rawString = "2+3"};
	
	//Unit test
	TEST_ASSERT_EQUAL_STRING("2+3",expression.rawString);
	
}

void test_evaluate_exploreShuntingYard_return_startIndex(){
	//Create text fixture
	Tokenizer expression = {.startIndex = 0};
	
	//Unit test
	TEST_ASSERT_EQUAL(0 , expression.startIndex);
	
}

void test_evaluate_exploreShuntingYard_return_length(){
	//Create text fixture
	Tokenizer expression = {.length =3};
	
	//Unit test
	TEST_ASSERT_EQUAL(3 , expression.length);
}
/*
void test_should_pass_the_correct_token_type_to_correct_stack(){
	//Create text fixture
	Tokenizer *newTokenizer =malloc(sizeof(Tokenizer));
	newTokenizer->rawString ="2+3";
	newTokenizer->startIndex =0;
	newTokenizer->length =3;
	Number *numToken = malloc (sizeof(Number));
	numToken->type = NUMBER;
	numToken->value =2;
	Token *tempToken = (Token*)numToken;
	getToken_ExpectAndReturn(newTokenizer,tempToken);
	
}

*/

/*
void test_should_return_Number_token_type_from_get_token()
{
	//Test Fixture
	Number getNumber = {0};
	mockGetToken_ExpectAndReturn(2,2);
	getNumber =  numToken(2);
	TEST_ASSERT_EQUAL(2,getNumber.value);
	
}
*/
/*
void test_should_return_Operation_token_type_from_get_token()
{
	//Test Fixture
	Operator getOperator = {' '};
	mockGetToken_ExpectAndReturn('+','+');
	getOperator =  opeToken('+');
	TEST_ASSERT_EQUAL('+',getOperator.ope);
	
}
*/