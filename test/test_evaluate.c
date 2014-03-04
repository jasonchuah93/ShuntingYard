#include "unity.h"
#include "ShuntingYard.h"
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "mock_initializeToken.h"
#include "mock_getToken.h"
#include "mock_numberPush.h"
#include "mock_operatorPush.h"
#include "mock_operatorPop.h"

void setUp(){}
void tearDown() {}

void test_evaluate_2_PLUS_3(){
	//Initialize tokenizer and token
	Tokenizer *tokenizer = malloc(sizeof(Tokenizer));
	tokenizer->rawString = "2+3";
	tokenizer->startIndex = 0;
	tokenizer->length = 3;
	
	Number *number2 = malloc(sizeof(Number));
	number2->type= NUMBER;
	number2->value=2;
	Token *token1 = (Token*)number2;
	
	Operator *plus = malloc(sizeof(Operator));
	plus->type= OPERATOR;
	plus->ope = ADD;
	Token *token2 = (Token*)plus;

	Number *number3 = malloc(sizeof(Number));
	number3->type= NUMBER;
	number3->value=3;
	Token *token3 = (Token*)number3;
	
	//Evaluate the function 
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("2+3",tokenizer);
	//Get token1 for number 2 and add to ouput
	getToken_ExpectAndReturn(tokenizer,token1);
	addToOutput_Expect(token1);
	//Get token2 for plus and push to stack
	getToken_ExpectAndReturn(tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 3 and add to output
	getToken_ExpectAndReturn(tokenizer,token3);
	addToOutput_Expect(token3);
	
	//Call funtion
	evaluate("2+3");
	
	//Unit Test 
	TEST_ASSERT_EQUAL_STRING("2+3",tokenizer->rawString);
	TEST_ASSERT_EQUAL(2,number2->value);
	TEST_ASSERT_EQUAL(ADD,plus->ope);
	TEST_ASSERT_EQUAL(3,number3->value);
}

void test_evaluate_4_PLUS_5_MULTIPLY_6(){
	//Initialize tokenizer and token
	Tokenizer *tokenizer = malloc(sizeof(Tokenizer));
	tokenizer->rawString = "4+5*6";
	tokenizer->startIndex = 0;
	tokenizer->length = 5;
	
	Number *number4 = malloc(sizeof(Number));
	number4->type= NUMBER;
	number4->value=4;
	Token *token1 = (Token*)number4;
	
	Operator *plus = malloc(sizeof(Operator));
	plus->type= OPERATOR;
	plus->ope = ADD;
	Token *token2 = (Token*)plus;
	
	Number *number5 = malloc(sizeof(Number));
	number5->type= NUMBER;
	number5->value=5;
	Token *token3 = (Token*)number5;
	
	Operator *multiply = malloc(sizeof(Operator));
	multiply->type= OPERATOR;
	multiply->ope = MULTIPLY;
	Token *token4 = (Token*)multiply;
	
	Number *number6 = malloc(sizeof(Number));
	number6->type= NUMBER;
	number6->value=6;
	Token *token5 = (Token*)number6;
	
	//Evaluate the function
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("4+5*6",tokenizer);
	//Get token1 for number 4 and add to output
	getToken_ExpectAndReturn(tokenizer,token1);
	addToOutput_Expect(token1);
	//Get token2 for plus and push to stack
	getToken_ExpectAndReturn(tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 5 and add to output
	getToken_ExpectAndReturn(tokenizer,token3);
	addToOutput_Expect(token3);
	//Get token4 for multiply and push to stack
	getToken_ExpectAndReturn(tokenizer,token4);
	operatorPush_Expect(token4);
	//Get token5 for number 6 and add to output
	getToken_ExpectAndReturn(tokenizer,token5);
	addToOutput_Expect(token5);
	
	//Call funtion
	evaluate1("4+5*6");
	
	//Unit test
	TEST_ASSERT_EQUAL_STRING("4+5*6",tokenizer->rawString);
	TEST_ASSERT_EQUAL(4,number4->value);
	TEST_ASSERT_EQUAL(ADD,plus->ope);
	TEST_ASSERT_EQUAL(5,number5->value);
	TEST_ASSERT_EQUAL(MULTIPLY,multiply->ope);
	TEST_ASSERT_EQUAL(6,number6->value);
}

void test_evaluate_3_bitwiseOR_7_PLUS_8_DIVIDE_9(){
	//Initialize tokenizer and token
	Tokenizer *tokenizer = malloc(sizeof(Tokenizer));
	tokenizer->rawString = "3|7+8/9";
	tokenizer->startIndex = 0;
	tokenizer->length = 7;
	
	Number *number3 = malloc(sizeof(Number));
	number3->type= NUMBER;
	number3->value=3;
	Token *token1 = (Token*)number3;
	
	Operator *bitwiseOR = malloc(sizeof(Operator));
	bitwiseOR->type= OPERATOR;
	bitwiseOR->ope = BITWISE_OR;
	Token *token2 = (Token*)bitwiseOR;
	
	Number *number7 = malloc(sizeof(Number));
	number7->type= NUMBER;
	number7->value=7;
	Token *token3 = (Token*)number7;
	
	Operator *plus = malloc(sizeof(Operator));
	plus->type= OPERATOR;
	plus->ope = ADD;
	Token *token4 = (Token*)plus;
	
	Number *number8 = malloc(sizeof(Number));
	number8->type= NUMBER;
	number8->value=8;
	Token *token5 = (Token*)number8;
	
	Operator *division = malloc(sizeof(Operator));
	division->type= OPERATOR;
	division->ope = DIVIDE;
	Token *token6 = (Token*)division;
		
	Number *number9 = malloc(sizeof(Number));
	number9->type= NUMBER;
	number9->value=9;
	Token *token7 = (Token*)number9;
	
	//Evaluate the function
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("3|7+8/9",tokenizer);
	//Get token1 for number 3 and add to output
	getToken_ExpectAndReturn(tokenizer,token1);
	addToOutput_Expect(token1);
	//Get token2 for bitwise OR and push to stack
	getToken_ExpectAndReturn(tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 7 and add to output
	getToken_ExpectAndReturn(tokenizer,token3);
	addToOutput_Expect(token3);
	//Get token4 for plus and push to stack
	getToken_ExpectAndReturn(tokenizer,token4);
	operatorPush_Expect(token4);
	//Get token5 for number 8 and add to output
	getToken_ExpectAndReturn(tokenizer,token5);
	addToOutput_Expect(token5);
	//Get token4 for divide and push to stack
	getToken_ExpectAndReturn(tokenizer,token6);
	operatorPush_Expect(token6);
	//Get token5 for number 9 and add to output
	getToken_ExpectAndReturn(tokenizer,token7);
	addToOutput_Expect(token7);
	
	//Call funtion
	evaluate2("3|7+8/9");
	
	//Unit test
	TEST_ASSERT_EQUAL_STRING("3|7+8/9",tokenizer->rawString);
	TEST_ASSERT_EQUAL(3,number3->value);
	TEST_ASSERT_EQUAL(BITWISE_OR,bitwiseOR->ope);
	TEST_ASSERT_EQUAL(7,number7->value);
	TEST_ASSERT_EQUAL(ADD,plus->ope);
	TEST_ASSERT_EQUAL(8,number8->value);
	TEST_ASSERT_EQUAL(DIVIDE,division->ope);
	TEST_ASSERT_EQUAL(9,number9->value);
}	

