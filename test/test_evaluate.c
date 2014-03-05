#include "unity.h"
#include "ShuntingYard.h"
#include <string.h>
#include <stdlib.h>
#include "mock_initializeToken.h"
#include "mock_getToken.h"
#include "mock_numberPush.h"
#include "mock_operatorPush.h"
#include "mock_operatorPop.h"

void setUp(){}
void tearDown() {}

void test_evaluate_2_PLUS_3(){
	//Initialize tokenizer and token
	Tokenizer tokenizer = {.rawString = "2+3", .startIndex = 0, .length = 3};
	
	Number number2 = {.type= NUMBER, .value=2};
	Token *token1 = (Token*)&number2;
	
	Operator plus = {.type= OPERATOR, .operators = ADD};
	Token *token2 = (Token*)&plus;
	
	Number number3 = {.type= NUMBER, .value=3};
	Token *token3 = (Token*)&number3;
	
	//Evaluate the function 
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("2+3",&tokenizer);
	//Get token1 for number 2 and add to ouput
	getToken_ExpectAndReturn(&tokenizer,token1);
	numberPush_Expect(token1);
	//Get token2 for plus and push to stack
	getToken_ExpectAndReturn(&tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 3 and add to output
	getToken_ExpectAndReturn(&tokenizer,token3);
	numberPush_Expect(token3);
	
	//Call funtion
	evaluate("2+3");
	
}

void test_evaluate_4_PLUS_5_MULTIPLY_6(){
	//Initialize tokenizer and token
	Tokenizer tokenizer = {.rawString = "4+5*6", .startIndex = 0, .length = 5};
	
	Number number4 = {.type= NUMBER, .value=4};
	Token *token1 = (Token*)&number4;
	
	Operator plus ={.type = OPERATOR,.operators = ADD};
	Token *token2 = (Token*)&plus;
	
	
	Number number5 = {.type= NUMBER, .value=5};
	Token *token3 = (Token*)&number5;
	
	Operator multiply ={.type = OPERATOR,.operators = MULTIPLY};
	Token *token4 = (Token*)&multiply;
	
	Number number6 = {.type= NUMBER, .value=6};
	Token *token5 = (Token*)&number6;
	
	//Evaluate the function
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("4+5*6",&tokenizer);
	//Get token1 for number 4 and add to output
	getToken_ExpectAndReturn(&tokenizer,token1);
	numberPush_Expect(token1);
	//Get token2 for plus and push to stack
	getToken_ExpectAndReturn(&tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 5 and add to output
	getToken_ExpectAndReturn(&tokenizer,token3);
	numberPush_Expect(token3);
	//Get token4 for multiply and push to stack
	getToken_ExpectAndReturn(&tokenizer,token4);
	operatorPush_Expect(token4);
	//Get token5 for number 6 and add to output
	getToken_ExpectAndReturn(&tokenizer,token5);
	numberPush_Expect(token5);
	
	//Call funtion
	evaluate1("4+5*6");
	
	
}

void test_evaluate_3_bitwiseOR_7_PLUS_8_DIVIDE_9(){
	//Initialize tokenizer and token
	Tokenizer tokenizer = {.rawString = "3|7+8/9", .startIndex = 0, .length = 7};
	
	Number number3 = {.type= NUMBER, .value=3};
	Token *token1 = (Token*)&number3;
	
	Operator bitwiseOR ={.type = OPERATOR,.operators = BITWISE_OR};
	Token *token2 = (Token*)&bitwiseOR;
	
	Number number7 = {.type= NUMBER, .value=7};
	Token *token3 = (Token*)&number7;
	
	Operator plus ={.type = OPERATOR,.operators = ADD};
	Token *token4 = (Token*)&plus;
	
	Number number8 = {.type= NUMBER, .value=8};
	Token *token5 = (Token*)&number8;
	
	Operator division ={.type = OPERATOR,.operators = DIVIDE};
	Token *token6 = (Token*)&division;
	
	Number number9 = {.type= NUMBER, .value=9};
	Token *token7 = (Token*)&number9;
	
	//Evaluate the function
	//Initialize tokenizer
	initTokenizer_ExpectAndReturn("3|7+8/9",&tokenizer);
	//Get token1 for number 3 and add to output
	getToken_ExpectAndReturn(&tokenizer,token1);
	numberPush_Expect(token1);
	//Get token2 for bitwise OR and push to stack
	getToken_ExpectAndReturn(&tokenizer,token2);
	operatorPush_Expect(token2);
	//Get token3 for number 7 and add to output
	getToken_ExpectAndReturn(&tokenizer,token3);
	numberPush_Expect(token3);
	//Get token4 for plus and push to stack
	getToken_ExpectAndReturn(&tokenizer,token4);
	operatorPush_Expect(token4);
	//Get token5 for number 8 and add to output
	getToken_ExpectAndReturn(&tokenizer,token5);
	numberPush_Expect(token5);
	//Get token4 for divide and push to stack
	getToken_ExpectAndReturn(&tokenizer,token6);
	operatorPush_Expect(token6);
	//Get token5 for number 9 and add to output
	getToken_ExpectAndReturn(&tokenizer,token7);
	numberPush_Expect(token7);
	
	//Call funtion
	evaluate2("3|7+8/9");
	
}	

