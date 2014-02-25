#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "ShuntingYard.h"

Tokenizer *initTokenizer(char *expression){
	Tokenizer *newTokenizer = malloc (sizeof(Tokenizer));
	newTokenizer->rawString =expression;
	newTokenizer ->startIndex =0;
	newTokenizer ->length =strlen(expression);
	return newTokenizer;
}

Tokenizer NumberStack (int input){
	Tokenizer type;
	if(isdigit(input))
		type=NUMBER;
	else
		return type;
	
}

Tokenizer OperatorStack (char input){
	Tokenizer type;
	type=OPERATORS;
	return type;
}

Expression addExpression (int x, int y, int answer){
	Expression ans;
	answer = addition(x,ans);
	return answer;

}



