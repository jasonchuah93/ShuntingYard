#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShuntingYard.h"
#include "initializeToken.h"
#include "getToken.h"

/*
	This function is to evaluate expression "2+3"
	
	input  : expression contains "2+3"
	output : none
	return : token 
	Mocking function : 1)initTokenizer(); initialize expression into tokenizer
					   2)getToken();	  get tokens from the tokenizer
					   3)numberPush();   add number token to the output
					   4)operatorPush();  push only operator tokens into the operator stack
					   
*/	

void evaluate (char *expression){
	
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number2 token push to number stack
	token = getToken(tokenizer);
	numberPush (token);
	//Get plus token and push to stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number3 tokenpush to number stack
	token = getToken(tokenizer);
	numberPush (token);
	
}

/*
	This function is to evaluate expression "4+5*6"
	
	input  : expression contains "4+5*6"
	output : none
	return : token 
	Mocking function : 1)initTokenizer(); initialize expression into tokenizer
					   2)getToken();	  get tokens from the tokenizer
					   3)numberPush();    push only number tokens into the number stack
					   4)operatorPush();  push only operator tokens into the operator stack
*/	

void evaluate1 (char *expression){
	
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number4 tokenpush to number stack
	token = getToken(tokenizer);
	numberPush(token);
	//Get plus token and push to stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number5 tokenpush to number stack
	token = getToken(tokenizer);
	numberPush(token);
	//Get multiply token and push to stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number6 token push to number stack
	token = getToken(tokenizer);
	numberPush(token);
	
}

/*
	This function is to evaluate expression "3|7+8/9"
	
	input  : expression contains "3|7+8/9"
	output : none
	return : token 
	Mocking function : 1)initTokenizer(); initialize expression into tokenizer
					   2)getToken();	  get tokens from the tokenizer
					   3)numberPush();    push only number tokens into the number stack
					   4)operatorPush();  push only operator tokens into the operator stack
*/	

void evaluate2 (char *expression){
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number3 token and push to number stack
	token = getToken(tokenizer);
	numberPush(token);
	//Get bitwiseOR token and push to stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number7 token and push to number stack
 	token = getToken(tokenizer);
	numberPush(token);
	//Get plus token and push to stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number8 token and push to number stack
	token = getToken(tokenizer);
	numberPush(token);
	//Get divide token and push to stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number9 token and push to number stack
	token = getToken(tokenizer);
	numberPush(token);
}

/*
	This function is to evaluate expression "2+3*4"
	
	input  : expression contains "2+3*4"
	output : none
	return : token 
	Mocking function : 1)initTokenizer(); initialize expression into tokenizer
					   2)getToken();	  get tokens from the tokenizer
					   3)numberPush();    push only number tokens into the number stack
					   4)operatorPush();  push only operator tokens into the operator stack
*/	
void evaluate3 (char *expression){
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number2 token and push to number stack
	token = getToken(tokenizer);
	numberPush(token);
	//Get plus token and push to operator stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number3 token and push to number stack
	token = getToken(tokenizer);
	numberPush(token);
	//Get multiply token and push to operator stack
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number4 token and push to number stack
	token = getToken(tokenizer);
	numberPush(token);
	
}