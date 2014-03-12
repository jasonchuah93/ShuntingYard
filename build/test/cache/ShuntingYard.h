





typedef enum {NUMBER,OPERATOR,IDENTIFIER}Token;



typedef enum {ADD,SUBTRACT,DIVIDE,MULTIPLY,POST_INCREMENT,PRE_INCREMENT,POST_DECREMENT,PRE_DECREMENT,BITWISE_OR}Operation;





typedef struct {

 char *rawString;

 int startIndex;

 int length;

}Tokenizer;





typedef struct {

 Token type;

 int value;

}Number;



typedef struct {

 Token type;

 Operation operators;

}Operator;



typedef struct {

 Token type;

 char *name;

}Identifier;







void evaluate (char *expression);

void evaluate1 (char *expression);

void evaluate2 (char *expression);

void evaluate3 (char *expression);
