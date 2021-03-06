/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SHUNTINGYARD_H
#define _MOCK_SHUNTINGYARD_H

#include "ShuntingYard.h"

void mock_ShuntingYard_Init(void);
void mock_ShuntingYard_Destroy(void);
void mock_ShuntingYard_Verify(void);




#define evaluate_Ignore() evaluate_CMockIgnore()
void evaluate_CMockIgnore(void);
#define evaluate_Expect(expression) evaluate_CMockExpect(__LINE__, expression)
void evaluate_CMockExpect(UNITY_LINE_TYPE cmock_line, char* expression);
typedef void (* CMOCK_evaluate_CALLBACK)(char* expression, int cmock_num_calls);
void evaluate_StubWithCallback(CMOCK_evaluate_CALLBACK Callback);
#define evaluate1_Ignore() evaluate1_CMockIgnore()
void evaluate1_CMockIgnore(void);
#define evaluate1_Expect(expression) evaluate1_CMockExpect(__LINE__, expression)
void evaluate1_CMockExpect(UNITY_LINE_TYPE cmock_line, char* expression);
typedef void (* CMOCK_evaluate1_CALLBACK)(char* expression, int cmock_num_calls);
void evaluate1_StubWithCallback(CMOCK_evaluate1_CALLBACK Callback);
#define evaluate2_Ignore() evaluate2_CMockIgnore()
void evaluate2_CMockIgnore(void);
#define evaluate2_Expect(expression) evaluate2_CMockExpect(__LINE__, expression)
void evaluate2_CMockExpect(UNITY_LINE_TYPE cmock_line, char* expression);
typedef void (* CMOCK_evaluate2_CALLBACK)(char* expression, int cmock_num_calls);
void evaluate2_StubWithCallback(CMOCK_evaluate2_CALLBACK Callback);
#define evaluate3_Ignore() evaluate3_CMockIgnore()
void evaluate3_CMockIgnore(void);
#define evaluate3_Expect(expression) evaluate3_CMockExpect(__LINE__, expression)
void evaluate3_CMockExpect(UNITY_LINE_TYPE cmock_line, char* expression);
typedef void (* CMOCK_evaluate3_CALLBACK)(char* expression, int cmock_num_calls);
void evaluate3_StubWithCallback(CMOCK_evaluate3_CALLBACK Callback);

#endif
