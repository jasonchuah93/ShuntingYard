/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_OPERATORPUSH_H
#define _MOCK_OPERATORPUSH_H

#include "operatorPush.h"

void mock_operatorPush_Init(void);
void mock_operatorPush_Destroy(void);
void mock_operatorPush_Verify(void);




#define operatorPush_Ignore() operatorPush_CMockIgnore()
void operatorPush_CMockIgnore(void);
#define operatorPush_Expect(token) operatorPush_CMockExpect(__LINE__, token)
void operatorPush_CMockExpect(UNITY_LINE_TYPE cmock_line, Token* token);
typedef void (* CMOCK_operatorPush_CALLBACK)(Token* token, int cmock_num_calls);
void operatorPush_StubWithCallback(CMOCK_operatorPush_CALLBACK Callback);

#endif
