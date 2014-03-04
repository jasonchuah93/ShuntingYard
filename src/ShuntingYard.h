#ifndef __SHUNTING_YARD_H__
#define __SHUNTING_YARD_H__

typedef enum {NUMBER,OPERATOR,IDENTIFIER}Token;
//Will be update soon.
typedef enum {ADD,SUBTRACT,DIVIDE,MULTIPLY,POST_INCREMENT,PRE_INCREMENT,POST_DECREMENT,PRE_DECREMENT,BITWISE_OR}Operation;

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
	Operation ope;
}Operator;

typedef struct {
	Token type;
	char *name;
}Identifier;

void evaluate (char *expression);
void evaluate1 (char *expression);
void evaluate2 (char *expression);

#endif //__SHUNTING_YARD_H__


