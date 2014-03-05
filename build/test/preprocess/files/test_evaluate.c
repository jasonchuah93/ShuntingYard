#include "unity.h"
#include "mock_operatorPush.h"
#include "mock_operatorPop.h"
#include "mock_numberPush.h"
#include "mock_initializeToken.h"
#include "mock_getToken.h"
#include "ShuntingYard.h"


void setUp(){}

void tearDown() {}



void test_evaluate_2_PLUS_3(){



 Tokenizer tokenizer = {.rawString = "2+3", .startIndex = 0, .length = 3};



 Number number2 = {.type= NUMBER, .value=2};

 Token *token1 = (Token*)&number2;



 Operator plus = {.type= OPERATOR, .operators = ADD};

 Token *token2 = (Token*)&plus;



 Number number3 = {.type= NUMBER, .value=3};

 Token *token3 = (Token*)&number3;







 initTokenizer_CMockExpectAndReturn(29, "2+3", &tokenizer);



 getToken_CMockExpectAndReturn(31, &tokenizer, token1);

 numberPush_CMockExpect(32, token1);



 getToken_CMockExpectAndReturn(34, &tokenizer, token2);

 operatorPush_CMockExpect(35, token2);



 getToken_CMockExpectAndReturn(37, &tokenizer, token3);

 numberPush_CMockExpect(38, token3);





 evaluate("2+3");



}



void test_evaluate_4_PLUS_5_MULTIPLY_6(){



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







 initTokenizer_CMockExpectAndReturn(67, "4+5*6", &tokenizer);



 getToken_CMockExpectAndReturn(69, &tokenizer, token1);

 numberPush_CMockExpect(70, token1);



 getToken_CMockExpectAndReturn(72, &tokenizer, token2);

 operatorPush_CMockExpect(73, token2);



 getToken_CMockExpectAndReturn(75, &tokenizer, token3);

 numberPush_CMockExpect(76, token3);



 getToken_CMockExpectAndReturn(78, &tokenizer, token4);

 operatorPush_CMockExpect(79, token4);



 getToken_CMockExpectAndReturn(81, &tokenizer, token5);

 numberPush_CMockExpect(82, token5);





 evaluate1("4+5*6");





}



void test_evaluate_3_bitwiseOR_7_PLUS_8_DIVIDE_9(){



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







 initTokenizer_CMockExpectAndReturn(117, "3|7+8/9", &tokenizer);



 getToken_CMockExpectAndReturn(119, &tokenizer, token1);

 numberPush_CMockExpect(120, token1);



 getToken_CMockExpectAndReturn(122, &tokenizer, token2);

 operatorPush_CMockExpect(123, token2);



 getToken_CMockExpectAndReturn(125, &tokenizer, token3);

 numberPush_CMockExpect(126, token3);



 getToken_CMockExpectAndReturn(128, &tokenizer, token4);

 operatorPush_CMockExpect(129, token4);



 getToken_CMockExpectAndReturn(131, &tokenizer, token5);

 numberPush_CMockExpect(132, token5);



 getToken_CMockExpectAndReturn(134, &tokenizer, token6);

 operatorPush_CMockExpect(135, token6);



 getToken_CMockExpectAndReturn(137, &tokenizer, token7);

 numberPush_CMockExpect(138, token7);





 evaluate2("3|7+8/9");



}
