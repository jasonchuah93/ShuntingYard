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





 initTokenizer_CMockExpectAndReturn(39, "2+3", tokenizer);

 getToken_CMockExpectAndReturn(40, tokenizer, token1);

 numberPush_CMockExpect(41, token1);

 getToken_CMockExpectAndReturn(42, tokenizer, token2);

 operatorPush_CMockExpect(43, token2);

 getToken_CMockExpectAndReturn(44, tokenizer, token3);

 numberPush_CMockExpect(45, token3);





 evaluate("2+3");







}
