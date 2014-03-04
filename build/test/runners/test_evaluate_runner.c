/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      CMock_Init(); \
      setUp(); \
      TestFunc(); \
      CMock_Verify(); \
  } \
  CMock_Destroy(); \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mock_getToken.h"
#include "mock_initializeToken.h"
#include "mock_numberPush.h"
#include "mock_operatorPush.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_evaluate_2_PLUS_3(void);
extern void test_evaluate_4_PLUS_5_MULTIPLY_6(void);
extern void test_evaluate_3_bitwiseOR_7_PLUS_8_DIVIDE_9(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_getToken_Init();
  mock_initializeToken_Init();
  mock_numberPush_Init();
  mock_operatorPush_Init();
}
static void CMock_Verify(void)
{
  mock_getToken_Verify();
  mock_initializeToken_Verify();
  mock_numberPush_Verify();
  mock_operatorPush_Verify();
}
static void CMock_Destroy(void)
{
  mock_getToken_Destroy();
  mock_initializeToken_Destroy();
  mock_numberPush_Destroy();
  mock_operatorPush_Destroy();
}

//=======Test Reset Option=====
void resetTest()
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_evaluate.c";
  UnityBegin();
  RUN_TEST(test_evaluate_2_PLUS_3, 14);
  RUN_TEST(test_evaluate_4_PLUS_5_MULTIPLY_6, 52);
  RUN_TEST(test_evaluate_3_bitwiseOR_7_PLUS_8_DIVIDE_9, 106);

  return (UnityEnd());
}
