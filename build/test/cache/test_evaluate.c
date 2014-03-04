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



 getToken_CMockExpectAndReturn(41, tokenizer, token1);

 addToOutput_CMockExpect(42, token1);



 getToken_CMockExpectAndReturn(44, tokenizer, token2);

 operatorPush_CMockExpect(45, token2);



 getToken_CMockExpectAndReturn(47, tokenizer, token3);

 addToOutput_CMockExpect(48, token3);





 evaluate("2+3");





 UnityAssertEqualString((const char*)("2+3"), (const char*)(tokenizer->rawString), (((void *)0)), (_U_UINT)54);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((number2->value)), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((ADD)), (_U_SINT)((plus->ope)), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number3->value)), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

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







 initTokenizer_CMockExpectAndReturn(94, "4+5*6", tokenizer);



 getToken_CMockExpectAndReturn(96, tokenizer, token1);

 addToOutput_CMockExpect(97, token1);



 getToken_CMockExpectAndReturn(99, tokenizer, token2);

 operatorPush_CMockExpect(100, token2);



 getToken_CMockExpectAndReturn(102, tokenizer, token3);

 addToOutput_CMockExpect(103, token3);



 getToken_CMockExpectAndReturn(105, tokenizer, token4);

 operatorPush_CMockExpect(106, token4);



 getToken_CMockExpectAndReturn(108, tokenizer, token5);

 addToOutput_CMockExpect(109, token5);





 evaluate1("4+5*6");





 UnityAssertEqualString((const char*)("4+5*6"), (const char*)(tokenizer->rawString), (((void *)0)), (_U_UINT)115);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((number4->value)), (((void *)0)), (_U_UINT)116, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((ADD)), (_U_SINT)((plus->ope)), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((number5->value)), (((void *)0)), (_U_UINT)118, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((MULTIPLY)), (_U_SINT)((multiply->ope)), (((void *)0)), (_U_UINT)119, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((number6->value)), (((void *)0)), (_U_UINT)120, UNITY_DISPLAY_STYLE_INT);

}



void test_evaluate_3_bitwiseOR_7_PLUS_8_DIVIDE_9(){



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







 initTokenizer_CMockExpectAndReturn(167, "3|7+8/9", tokenizer);



 getToken_CMockExpectAndReturn(169, tokenizer, token1);

 addToOutput_CMockExpect(170, token1);



 getToken_CMockExpectAndReturn(172, tokenizer, token2);

 operatorPush_CMockExpect(173, token2);



 getToken_CMockExpectAndReturn(175, tokenizer, token3);

 addToOutput_CMockExpect(176, token3);



 getToken_CMockExpectAndReturn(178, tokenizer, token4);

 operatorPush_CMockExpect(179, token4);



 getToken_CMockExpectAndReturn(181, tokenizer, token5);

 addToOutput_CMockExpect(182, token5);



 getToken_CMockExpectAndReturn(184, tokenizer, token6);

 operatorPush_CMockExpect(185, token6);



 getToken_CMockExpectAndReturn(187, tokenizer, token7);

 addToOutput_CMockExpect(188, token7);





 evaluate2("3|7+8/9");





 UnityAssertEqualString((const char*)("3|7+8/9"), (const char*)(tokenizer->rawString), (((void *)0)), (_U_UINT)194);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((number3->value)), (((void *)0)), (_U_UINT)195, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((BITWISE_OR)), (_U_SINT)((bitwiseOR->ope)), (((void *)0)), (_U_UINT)196, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((number7->value)), (((void *)0)), (_U_UINT)197, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((ADD)), (_U_SINT)((plus->ope)), (((void *)0)), (_U_UINT)198, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((number8->value)), (((void *)0)), (_U_UINT)199, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((DIVIDE)), (_U_SINT)((division->ope)), (((void *)0)), (_U_UINT)200, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((number9->value)), (((void *)0)), (_U_UINT)201, UNITY_DISPLAY_STYLE_INT);

}
