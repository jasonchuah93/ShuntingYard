#include "unity.h"
#include "ShuntingYard.h"
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "mock_initializeToken.h"
#include "mock_getToken.h"
#include "mock_numberPush.h"
#include "mock_operatorPush.h"

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
	initTokenizer_ExpectAndReturn("2+3",tokenizer);
	getToken_ExpectAndReturn(tokenizer,token1);
	numberPush_Expect(token1);
	getToken_ExpectAndReturn(tokenizer,token2);
	operatorPush_Expect(token2);
	getToken_ExpectAndReturn(tokenizer,token3);
	numberPush_Expect(token3);
	
	evaluate("2+3");
}