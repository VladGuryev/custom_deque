#ifndef TESTS_H
#define TESTS_H
#include "test_runner.h"
#include "my_deque.h"

void Test1() {
  MyDeque<int> deq;
  ASSERT_EQUAL(deq.Size(), 0);
  ASSERT_EQUAL(deq.Empty(), true);
  deq.PushBack(12);
  ASSERT_EQUAL(deq.Size(), 1);
  ASSERT_EQUAL(deq.Empty(), false);
}
void Test2() {
  MyDeque<int> deq;
  for(int i = 0; i < 5; i++){
    deq.PushBack(7);
    deq.PushFront(7);
  }
  ASSERT_EQUAL(deq.Size(), 10);
  deq.PushFront(9);
  ASSERT_EQUAL(deq.Front(), 9);
  deq.PushBack(13);
  ASSERT_EQUAL(deq.Back(), 13);
  deq.PushFront(24);
  ASSERT_EQUAL(deq.Front(), 24);
  ASSERT_EQUAL(deq.Size(), 13);
}
void Test3() {
  MyDeque<int> deq;
  deq.PushFront(55);
  ASSERT_EQUAL(deq[0], 55);
  deq.PushFront(37);
  ASSERT_EQUAL(deq[0], 37);
  deq.PushFront(24);
  ASSERT_EQUAL(deq[0], 24);
  ASSERT_EQUAL(deq[1], 37);
  ASSERT_EQUAL(deq[2], 55);
  deq.PushBack(99);
  ASSERT_EQUAL(deq[3], 99);
  deq.PushBack(1017);
  ASSERT_EQUAL(deq[4], 1017);
  deq.Clear();
  ASSERT_EQUAL(deq.Size(), 0);
  ASSERT_EQUAL(deq.Empty(), true);
  deq.PushBack(18);
  ASSERT_EQUAL(deq[0], 18);
  deq.PushBack(21);
  ASSERT_EQUAL(deq[1], 21);
  deq.Clear();
}

void Test4() {
  MyDeque<int> deq;
  deq.PushFront(55);
  ASSERT_EQUAL(deq.At(0), 55);
  deq.PushFront(37);
  ASSERT_EQUAL(deq.At(0), 37);
  deq.PushFront(24);
  ASSERT_EQUAL(deq.At(0), 24);
  ASSERT_EQUAL(deq.At(1), 37);
  ASSERT_EQUAL(deq.At(2), 55);
  deq.PushBack(99);
  ASSERT_EQUAL(deq.At(3), 99);
  deq.PushBack(1017);
  ASSERT_EQUAL(deq.At(4), 1017);
  deq.Clear();
  ASSERT_EQUAL(deq.Size(), 0);
  ASSERT_EQUAL(deq.Empty(), true);
  deq.PushBack(18);
  ASSERT_EQUAL(deq.At(0), 18);
  deq.PushBack(21);
  ASSERT_EQUAL(deq.At(1), 21);
  deq.Clear();
  //ASSERT_EQUAL(deq.At(1000), 21); out_of_range
}

void Test5(){
  const MyDeque<int> const_deq(100, 200);
  ASSERT_EQUAL(const_deq[0], 100);
  ASSERT_EQUAL(const_deq[1], 200);
  ASSERT_EQUAL(const_deq.At(0), 100);
  ASSERT_EQUAL(const_deq.At(1), 200);
  ASSERT_EQUAL(const_deq.Front(), 100);
  ASSERT_EQUAL(const_deq.Back(), 200);

  MyDeque<int> deq;
  deq.PushFront(55);
  ASSERT_EQUAL(deq.At(0), 55);
  deq.PushFront(37);
  ASSERT_EQUAL(deq.At(0), 37);
  deq.PushFront(24);
  ASSERT_EQUAL(deq.At(0), 24);
  ASSERT_EQUAL(deq.At(1), 37);
  ASSERT_EQUAL(deq.At(2), 55);
  deq.PushBack(99);
  ASSERT_EQUAL(deq.At(3), 99);
  deq.PushBack(1017);
  ASSERT_EQUAL(deq.At(4), 1017);

  const MyDeque<int> const_deq2(deq);
  ASSERT_EQUAL(const_deq2.At(0), 24);
  ASSERT_EQUAL(const_deq2[1], 37);
  ASSERT_EQUAL(const_deq2.At(2), 55);
  ASSERT_EQUAL(const_deq2[4], 1017);
  ASSERT_EQUAL(const_deq2.Front(), 24);
  ASSERT_EQUAL(const_deq2.Back(), 1017);
}

#endif // TESTS_H
