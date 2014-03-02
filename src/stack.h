#ifndef __STACK_H__
#define __STACK_H__

typedef char stackToken; //This type is the tokens enter into the stack

//This struct store the token into the stack
typedef struct {
  char *data;
  int maxSize;
  int top;
} stackT;

 stackT *initStack(char *expression, int value);
#endif //__STACK_H__