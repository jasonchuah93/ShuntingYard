#include "unity.h"
#include "mock_operatorPush.h"
#include "mock_numberPush.h"
#include "mock_initializeToken.h"
#include "mock_getToken.h"
#include "ShuntingYard.h"


void setUp(){}

void tearDown() {}



void test_evaluate_2_PLUS_3(){



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







 initTokenizer_CMockExpectAndReturn(38, "2+3", tokenizer);



 getToken_CMockExpectAndReturn(40, tokenizer, token1);

 numberPush_CMockExpect(41, token1);



 getToken_CMockExpectAndReturn(43, tokenizer, token2);

 operatorPush_CMockExpect(44, token2);



 getToken_CMockExpectAndReturn(46, tokenizer, token3);

 numberPush_CMockExpect(47, token3);



 evaluate("2+3");

}



void test_evaluate_4_PLUS_5_MULTIPLY_6(){



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







 initTokenizer_CMockExpectAndReturn(86, "4+5*6", tokenizer);



 getToken_CMockExpectAndReturn(88, tokenizer, token1);

 numberPush_CMockExpect(89, token1);



 getToken_CMockExpectAndReturn(91, tokenizer, token2);

 operatorPush_CMockExpect(92, token2);



 getToken_CMockExpectAndReturn(94, tokenizer, token3);

 numberPush_CMockExpect(95, token3);



 getToken_CMockExpectAndReturn(97, tokenizer, token4);

 operatorPush_CMockExpect(98, token4);



 getToken_CMockExpectAndReturn(100, tokenizer, token5);

 numberPush_CMockExpect(101, token5);



 evaluate1("4+5*6");



}
