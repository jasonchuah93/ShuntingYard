#include "unity.h"
#include "ShuntingYard.h"
#include "Token.h"
#include "mock_GetToken.h"

void setUp(){}
void tearDown() {}

void test_should_return_proper_addition()
{
	//TextFIXTURE
	
	Tokenizer *newTokenizer->rawString == "2+3";
			   newTokenizer->startIndex == 0;
				newTokenizer->length == 3;
	
	Number *getNumToken = {NUMBER , 2};
	Token *numToken =(*Token)(getNumToken);
	
	getToken_ExpectAndReturn(newTokenizer,numToken);
	
	TEST_ASSERT_EQUAL(numToken,value);
	
				
	
	
	
	
	
	
	
	
	
	
}