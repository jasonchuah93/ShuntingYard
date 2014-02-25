#ifndef __SHUNTING_YARD_H__
#define __SHUNTING_YARD_H__

typedef enum {NUMBER,OPERATORS,IDENTIFIER}Token;
//Will be added soon.
typedef enum {ADD,SUBTRACT,DIVIDE,MULTIPLY}Operator;


//This structure store the converted version of string
typedef struct {
	char *rawString;
	int  startIndex;
	int length;
}Tokenizer;

//Three type of token needed.
typedef struct {
	Token type;
	int value;
}Number;

typedef struct {
	Token type;
	Operator ope;
}Operand;

typedef struct {
	Token type;
	char *name;
}Identifier;

typedef struct {
	int x;
	int y;
}Expression;

Tokenizer *initTokenizer(char *expression);

Token NumberStack (int input);

Token OperatorStack (char input);

Expression addExpression (int x, int y, int answer);

#endif //__SHUNTING_YARD_H__


