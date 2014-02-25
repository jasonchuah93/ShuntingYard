/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_Addition.h"

typedef struct _CMOCK_addition_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;
  int Expected_value1;
  int Expected_value2;

} CMOCK_addition_CALL_INSTANCE;

static struct mock_AdditionInstance
{
  int addition_IgnoreBool;
  int addition_FinalReturn;
  CMOCK_addition_CALLBACK addition_CallbackFunctionPointer;
  int addition_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE addition_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_Addition_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.addition_IgnoreBool)
    Mock.addition_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.addition_CallInstance, cmock_line, "Function 'addition' called less times than expected.");
  if (Mock.addition_CallbackFunctionPointer != NULL)
    Mock.addition_CallInstance = CMOCK_GUTS_NONE;
}

void mock_Addition_Init(void)
{
  mock_Addition_Destroy();
}

void mock_Addition_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.addition_CallbackFunctionPointer = NULL;
  Mock.addition_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int addition(int value1, int value2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_addition_CALL_INSTANCE* cmock_call_instance = (CMOCK_addition_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.addition_CallInstance);
  Mock.addition_CallInstance = CMock_Guts_MemNext(Mock.addition_CallInstance);
  if (Mock.addition_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.addition_FinalReturn;
    Mock.addition_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.addition_CallbackFunctionPointer != NULL)
  {
    return Mock.addition_CallbackFunctionPointer(value1, value2, Mock.addition_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'addition' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'addition' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'addition' called later than expected.");
  UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_value1, value1, cmock_line, "Function 'addition' called with unexpected value for argument 'value1'.");
  UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_value2, value2, cmock_line, "Function 'addition' called with unexpected value for argument 'value2'.");
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_addition(CMOCK_addition_CALL_INSTANCE* cmock_call_instance, int value1, int value2)
{
  cmock_call_instance->Expected_value1 = value1;
  cmock_call_instance->Expected_value2 = value2;
}

void addition_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_addition_CALL_INSTANCE));
  CMOCK_addition_CALL_INSTANCE* cmock_call_instance = (CMOCK_addition_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.addition_CallInstance = CMock_Guts_MemChain(Mock.addition_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.addition_IgnoreBool = (int)1;
}

void addition_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int value1, int value2, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_addition_CALL_INSTANCE));
  CMOCK_addition_CALL_INSTANCE* cmock_call_instance = (CMOCK_addition_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.addition_CallInstance = CMock_Guts_MemChain(Mock.addition_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_addition(cmock_call_instance, value1, value2);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void addition_StubWithCallback(CMOCK_addition_CALLBACK Callback)
{
  Mock.addition_CallbackFunctionPointer = Callback;
}

