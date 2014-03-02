#include "unity.h"
#include "mock_getToken.h"
#include "ShuntingYard.h"




void setUp(){}

void tearDown() {}





void test_should_get_unknowToken_from_expression(){





 Token numToken = {0};

 Tokenizer *testTokenizer =malloc(sizeof(Tokenizer));

 testTokenizer->rawString = "2+3";

 testTokenizer->startIndex=0;

 testTokenizer->length=3;



 getToken_CMockExpectAndReturn(21, testTokenizer, (Token*)2);

 Token *newToken = getToken(testTokenizer);



 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((newToken)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);





}
