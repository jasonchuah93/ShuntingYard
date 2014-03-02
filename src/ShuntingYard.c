#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "ShuntingYard.h"

 Token tokenizeUnknownTokenFromExpression(Token *unknownToken){
	//Mocked getToken function
	//Tokenizer become unknown Token type
	//Token newToken = (Token*)getToken(NUMBER);
	//Get Number Token from unknown Token
	
	Token token = NUMBER; //Input
		Number numToken = {.type = NUMBER, .value = 2}; //Output
	if(*unknownToken == NUMBER)
		return NUMBER;
	else if (*unknownToken == OPERATOR)
		return OPERATOR;
	else if (*unknownToken == IDENTIFIER)
		return IDENTIFIER;
		
}
	
	



		








		



