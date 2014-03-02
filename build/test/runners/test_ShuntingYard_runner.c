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

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_should_verify_first_token_type_from_unknown_token(void);
extern void test_should_verify_second_token_type_fron_unknown_token(void);
extern void test_should_verify_third_token_type_fron_unknown_token(void);
extern void test_initStack_should_initiate_and_return_a_stack_properly(void);
extern void test_destroyStack_should_destroy_and_return_empty_stack(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_getToken_Init();
}
static void CMock_Verify(void)
{
  mock_getToken_Verify();
}
static void CMock_Destroy(void)
{
  mock_getToken_Destroy();
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
  Unity.TestFile = "test_ShuntingYard.c";
  UnityBegin();
  RUN_TEST(test_should_verify_first_token_type_from_unknown_token, 13);
  RUN_TEST(test_should_verify_second_token_type_fron_unknown_token, 26);
  RUN_TEST(test_should_verify_third_token_type_fron_unknown_token, 40);
  RUN_TEST(test_initStack_should_initiate_and_return_a_stack_properly, 54);
  RUN_TEST(test_destroyStack_should_destroy_and_return_empty_stack, 62);

  return (UnityEnd());
}
