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
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("2+3",tokenizer);
	//Get token1 for number 2 
	getToken_ExpectAndReturn(tokenizer,token1);
	numberPush_Expect(token1);
	//Get token2 for plus 
	getToken_ExpectAndReturn(tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 3
	getToken_ExpectAndReturn(tokenizer,token3);
	numberPush_Expect(token3);
	
	evaluate("2+3");
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
	//Get token1 for number 4 
	getToken_ExpectAndReturn(tokenizer,token1);
	numberPush_Expect(token1);
	//Get token2 for plus 
	getToken_ExpectAndReturn(tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 
	getToken_ExpectAndReturn(tokenizer,token3);
	numberPush_Expect(token3);
	//Get token4 for multiply 
	getToken_ExpectAndReturn(tokenizer,token4);
	operatorPush_Expect(token4);
	//Get token5 for number 6
	getToken_ExpectAndReturn(tokenizer,token5);
	numberPush_Expect(token5);
	
	evaluate1("4+5*6");

}		