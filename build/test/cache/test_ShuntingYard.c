#include "unity.h"
#include "mock_getToken.h"
#include "ShuntingYard.h"




void setUp(){}

void tearDown() {}





void test_should_verify_first_token_type_from_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(20, testTokenizer, (Token*)2);

 Token *numToken = getToken(testTokenizer);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((numToken)), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);

}



void test_should_verify_second_token_type_fron_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(33, testTokenizer, (Token*)"+");

 Token *opeToken = getToken(testTokenizer);

 UnityAssertEqualString((const char*)("+"), (const char*)(opeToken), (((void *)0)), (_U_UINT)35);



}



void test_should_verify_third_token_type_fron_unknown_token(){



 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;





 getToken_CMockExpectAndReturn(47, testTokenizer, (Token*)3);

 Token *numToken = getToken(testTokenizer);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((numToken)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);



}



void test_should_push_number_token_to_number_stack(){









}
