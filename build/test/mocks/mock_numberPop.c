/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_numberPop.h"

typedef struct _CMOCK_numberPop_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Token* Expected_token;

} CMOCK_numberPop_CALL_INSTANCE;

static struct mock_numberPopInstance
{
  int numberPop_IgnoreBool;
  CMOCK_numberPop_CALLBACK numberPop_CallbackFunctionPointer;
  int numberPop_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE numberPop_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_numberPop_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.numberPop_IgnoreBool)
    Mock.numberPop_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.numberPop_CallInstance, cmock_line, "Function 'numberPop' called less times than expected.");
  if (Mock.numberPop_CallbackFunctionPointer != NULL)
    Mock.numberPop_CallInstance = CMOCK_GUTS_NONE;
}

void mock_numberPop_Init(void)
{
  mock_numberPop_Destroy();
}

void mock_numberPop_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.numberPop_CallbackFunctionPointer = NULL;
  Mock.numberPop_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void numberPop(Token* token)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_numberPop_CALL_INSTANCE* cmock_call_instance = (CMOCK_numberPop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.numberPop_CallInstance);
  Mock.numberPop_CallInstance = CMock_Guts_MemNext(Mock.numberPop_CallInstance);
  if (Mock.numberPop_IgnoreBool)
  {
    return;
  }
  if (Mock.numberPop_CallbackFunctionPointer != NULL)
  {
    Mock.numberPop_CallbackFunctionPointer(token, Mock.numberPop_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'numberPop' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'numberPop' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'numberPop' called later than expected.");
  UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_token), (void*)(token), sizeof(Token), cmock_line, "Function 'numberPop' called with unexpected value for argument 'token'.");
}

void CMockExpectParameters_numberPop(CMOCK_numberPop_CALL_INSTANCE* cmock_call_instance, Token* token)
{
  cmock_call_instance->Expected_token = token;
}

void numberPop_CMockIgnore(void)
{
  Mock.numberPop_IgnoreBool = (int)1;
}

void numberPop_CMockExpect(UNITY_LINE_TYPE cmock_line, Token* token)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_numberPop_CALL_INSTANCE));
  CMOCK_numberPop_CALL_INSTANCE* cmock_call_instance = (CMOCK_numberPop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.numberPop_CallInstance = CMock_Guts_MemChain(Mock.numberPop_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_numberPop(cmock_call_instance, token);
}

void numberPop_StubWithCallback(CMOCK_numberPop_CALLBACK Callback)
{
  Mock.numberPop_CallbackFunctionPointer = Callback;
}
