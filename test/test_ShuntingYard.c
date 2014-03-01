#include "unity.h"
#include "ShuntingYard.h"
#include <malloc.h>
#include <string.h>
#include "mock_initialTokenizer.h"
#include "mock_getToken.h"

void setUp(){}
void tearDown() {}

void test_should_get_number_token_from_unknown_token(){
	
	
	
}



/*
void test_evaluate_exploreShuntingYard_return_expression(){
	//Create text fixture
	Tokenizer expression0 = {.rawString = "2+3",.startIndex = 0,.length = 3};
	
	//Unit test
	TEST_ASSERT_EQUAL_STRING("2+3",expression0.rawString);
	TEST_ASSERT_EQUAL(0 , expression0.startIndex);
	TEST_ASSERT_EQUAL(3 , expression0.length);
}
*/

/*
void test_expression_should_tokenize_into_token(){
	
	//Tokenizer expression = {.rawString = " ",.startIndex = 0,.length = 0};
	//initializeToken_Expect("2+3",0,3);
	//expression = evaluate("2+3",0,3);
	
}
*/













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