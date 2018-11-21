#include "my_deque.h"
#include "tests.h"

int main()
{
  TestRunner tr;
  RUN_TEST(tr, Test1);
  RUN_TEST(tr, Test2);
  RUN_TEST(tr, Test3);
  RUN_TEST(tr, Test4);
  RUN_TEST(tr, Test5);
  return 0;
}
