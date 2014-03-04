/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_INITIALIZETOKEN_H
#define _MOCK_INITIALIZETOKEN_H

#include "initializeToken.h"

void mock_initializeToken_Init(void);
void mock_initializeToken_Destroy(void);
void mock_initializeToken_Verify(void);




#define initTokenizer_IgnoreAndReturn(cmock_retval) initTokenizer_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void initTokenizer_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Tokenizer* cmock_to_return);
#define initTokenizer_ExpectAndReturn(name, cmock_retval) initTokenizer_CMockExpectAndReturn(__LINE__, name, cmock_retval)
void initTokenizer_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* name, Tokenizer* cmock_to_return);
typedef Tokenizer* (* CMOCK_initTokenizer_CALLBACK)(char* name, int cmock_num_calls);
void initTokenizer_StubWithCallback(CMOCK_initTokenizer_CALLBACK Callback);

#endif