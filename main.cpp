#include "my_deque.h"
#include "tests.h"

int main()
{
  TestRunner tr;
  RUN_TEST(tr, TestPushFront);
  RUN_TEST(tr, Test1);
  RUN_TEST(tr, Test2);
  RUN_TEST(tr, Test3);
  RUN_TEST(tr, Test4);
  RUN_TEST(tr, Test5);
  RUN_TEST(tr, Test6);
  RUN_TEST(tr, Test7);
  RUN_TEST(tr, Test8);

  RUN_TEST(tr, TestForum);
  RUN_TEST(tr, TestEmpty);
  RUN_TEST(tr, TestPush);
  RUN_TEST(tr, TestSize);
  RUN_TEST(tr, TestFront);
  RUN_TEST(tr, TestBack);
  RUN_TEST(tr, TestOperator);
  RUN_TEST(tr, TestAt);
  RUN_TEST(tr, TestFrontBack);
  RUN_TEST(tr, TestFrontStandard);
  RUN_TEST(tr, EmptyPushBack);
  return 0;
}
