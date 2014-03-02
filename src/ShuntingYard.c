#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "ShuntingYard.h"

Token verifyTokenTypeFromUnknownToken(Token *unknownToken){
	//Mocked getToken function
	//Tokenizer become unknown Token type
	//Get Number Token from unknown Token
	
	if(unknownToken == NUMBER)
		{
			Token token = NUMBER;
			Number numToken = {.type = NUMBER, .value = 2};
			
			
			//Number *numToken =(Number*)(unknownToken);
		}
		return NUMBER;
		
}









		



