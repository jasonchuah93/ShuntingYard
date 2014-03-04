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
					   3)addToOutput();    push only number tokens into the number stack
					   4)operatorPush();  push only operator tokens into the operator stack
*/	

void evaluate (char *expression){
	
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number2 token
	token = getToken(tokenizer);
	addToOutput (token);
	//Get plus token
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number3 token
	token = getToken(tokenizer);
	addToOutput (token);
	
}

/*
	This function is to evaluate expression "4+5*6"
	
	input  : expression contains "4+5*6"
	output : none
	return : token 
	Mocking function : 1)initTokenizer(); initialize expression into tokenizer
					   2)getToken();	  get tokens from the tokenizer
					   3)addToOutput();    push only number tokens into the number stack
					   4)operatorPush();  push only operator tokens into the operator stack
*/	

void evaluate1 (char *expression){
	
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number4 token
	token = getToken(tokenizer);
	addToOutput(token);
	//Get plus token
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number5 token
	token = getToken(tokenizer);
	addToOutput(token);
	//Get multiply token
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number6 token
	token = getToken(tokenizer);
	addToOutput(token);
	
}

/*
	This function is to evaluate expression "3|7+8/9"
	
	input  : expression contains "3|7+8/9"
	output : none
	return : token 
	Mocking function : 1)initTokenizer(); initialize expression into tokenizer
					   2)getToken();	  get tokens from the tokenizer
					   3)addToOutput();    push only number tokens into the number stack
					   4)operatorPush();  push only operator tokens into the operator stack
*/	

void evaluate2 (char *expression){
	Tokenizer *tokenizer;
	Token *token;
	//Initialize tokenizer
	tokenizer = initTokenizer(expression);
	//Get number3 token
	token = getToken(tokenizer);
	addToOutput(token);
	//Get plus token
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number7 token
	token = getToken(tokenizer);
	addToOutput(token);
	//Get plus token
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number8 token
	token = getToken(tokenizer);
	addToOutput(token);
	//Get divide token
	token = getToken(tokenizer);
	operatorPush(token);
	//Get number9 token
	token = getToken(tokenizer);
	addToOutput(token);
}