#ifndef TESTS_H
#define TESTS_H
#include "test_runner.h"
#include "my_deque.h"

void Test1() {
  Deque<int> deq;
  ASSERT_EQUAL(deq.Size(), 0);
  ASSERT_EQUAL(deq.Empty(), true);
  deq.PushBack(12);
  ASSERT_EQUAL(deq.Size(), 1);
  ASSERT_EQUAL(deq.Empty(), false);
}
void Test2() {
  Deque<int> deq;
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
  Deque<int> deq;
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
  Deque<int> deq;
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
//  const Deque<int> const_deq(100, 200);
//  ASSERT_EQUAL(const_deq[0], 100);
//  ASSERT_EQUAL(const_deq[1], 200);
//  ASSERT_EQUAL(const_deq.At(0), 100);
//  ASSERT_EQUAL(const_deq.At(1), 200);
//  ASSERT_EQUAL(const_deq.Front(), 100);
//  ASSERT_EQUAL(const_deq.Back(), 200);

  Deque<int> deq;
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

//  const Deque<int> const_deq2(deq);
//  ASSERT_EQUAL(const_deq2.At(0), 24);
//  ASSERT_EQUAL(const_deq2[1], 37);
//  ASSERT_EQUAL(const_deq2.At(2), 55);
//  ASSERT_EQUAL(const_deq2[4], 1017);
//  ASSERT_EQUAL(const_deq2.Front(), 24);
//  ASSERT_EQUAL(const_deq2.Back(), 1017);
}
void Test6(){
  Deque<string> d;
  d.PushBack("A");
  ASSERT_EQUAL(d.Front(), "A");
  ASSERT_EQUAL(d.Back(), "A");
  d.PushBack("B");
  ASSERT_EQUAL(d.Front(), "A");
  ASSERT_EQUAL(d.Back(), "B");
  d.PushBack("C");
  ASSERT_EQUAL(d.Front(), "A");
  ASSERT_EQUAL(d.Back(), "C");
}

void Test7(){
  Deque<string> d;
  d.PushFront("A");
  ASSERT_EQUAL(d.Front(), "A");
  ASSERT_EQUAL(d.Back(), "A");
  d.PushFront("B");
  ASSERT_EQUAL(d.Front(), "B");
  ASSERT_EQUAL(d.Back(), "A");
  d.PushFront("C");
  ASSERT_EQUAL(d.Front(), "C");
  ASSERT_EQUAL(d.Back(), "A");
}

void TestForum(){
  Deque<int> dq;
    dq.PushBack(1);
    ASSERT_EQUAL(dq.Back(), 1);

    Deque<int> dq2;
    dq2.PushFront(1);
    ASSERT_EQUAL(dq2.Back(), 1);

    Deque<int> dq3;
    dq3.PushFront(1);
    dq3.PushFront(2);
    ASSERT_EQUAL(dq3.Back(), 1);

    Deque<int> dq4;
    dq4.PushBack(1);
    dq4.PushFront(2);
    ASSERT_EQUAL(dq4.Back(), 1);

    Deque<int> dq5;
    dq5.PushBack(1);
    dq5.PushBack(2);
    ASSERT_EQUAL(dq5.Back(), 2);

    Deque<int> dq6;
    dq6.PushFront(2);
    dq6.PushBack(1);
    ASSERT_EQUAL(dq6.Back(), 1);
}

void TestEmpty() {
  Deque<int> dq;
  ASSERT(dq.Empty());
}

void TestPush() {
  Deque<int> dq;
  dq.PushBack(2);
  dq.PushFront(1);
  ASSERT(!dq.Empty());
}

void TestSize() {
  Deque<int> dq;
  dq.PushBack(2);
  dq.PushFront(1);
  ASSERT_EQUAL(dq.Size(), 2u);
}

void TestFront() {
  Deque<int> dq;
  dq.PushFront(1);
  ASSERT_EQUAL(dq.Front(), 1);

  dq.Front() = 0;
  ASSERT_EQUAL(dq.Front(), 0);
}

void TestBack() {
  Deque<int> dq;
  dq.PushBack(1);
  ASSERT_EQUAL(dq.Back(), 1);

  dq.Back() = 0;
  ASSERT_EQUAL(dq.Back(), 0);
}

void TestOperator() {
  // front и back имеют элементы
  Deque<int> dq_of_int;
  dq_of_int.PushFront(1);
  dq_of_int.PushFront(2);
  dq_of_int.PushFront(3);
  dq_of_int.PushBack(4);
  dq_of_int.PushBack(5);
  ASSERT_EQUAL(dq_of_int[0], 3);
  ASSERT_EQUAL(dq_of_int[1], 2);
  ASSERT_EQUAL(dq_of_int[2], 1);
  ASSERT_EQUAL(dq_of_int[3], 4);
  ASSERT_EQUAL(dq_of_int[4], 5);

  // front имеет элементы, back – пуст
  Deque<double> dq_of_db;
  dq_of_db.PushFront(1.5);
  dq_of_db.PushFront(2.5);
  dq_of_db.PushFront(3.5);
  ASSERT_EQUAL(dq_of_db[0], 3.5);
  ASSERT_EQUAL(dq_of_db[1], 2.5);
  ASSERT_EQUAL(dq_of_db[2], 1.5);

  // back имеет элементы, front – пуст
  Deque<char> dq_of_ch;
  dq_of_ch.PushBack('a');
  dq_of_ch.PushBack('b');
  ASSERT_EQUAL(dq_of_ch[0], 'a');
}


void TestAt() {
  // front и back имеют элементы
  Deque<int> dq_of_int;
  dq_of_int.PushFront(1);
  dq_of_int.PushFront(2);
  dq_of_int.PushFront(3);
  dq_of_int.PushBack(4);
  dq_of_int.PushBack(5);
  ASSERT_EQUAL(dq_of_int.At(0), 3);
  ASSERT_EQUAL(dq_of_int.At(1), 2);
  ASSERT_EQUAL(dq_of_int.At(2), 1);
  ASSERT_EQUAL(dq_of_int.At(3), 4);
  ASSERT_EQUAL(dq_of_int.At(4), 5);

  // front имеет элементы, back – пуст
  Deque<double> dq_of_db;
  dq_of_db.PushFront(1.5);
  dq_of_db.PushFront(2.5);
  dq_of_db.PushFront(3.5);
  ASSERT_EQUAL(dq_of_db.At(0), 3.5);
  ASSERT_EQUAL(dq_of_db.At(1), 2.5);
  ASSERT_EQUAL(dq_of_db.At(2), 1.5);

  try {
    dq_of_db.At(3);
  } catch (const out_of_range& ex) {
    ex.what();
    bool exception_caught = true;
    ASSERT(exception_caught);
  }

  // back имеет элементы, front – пуст
  Deque<char> dq_of_ch;
  dq_of_ch.PushBack('a');
  dq_of_ch.PushBack('b');
  ASSERT_EQUAL(dq_of_ch.At(0), 'a');
}

void Test8(){
  Deque<string> d;
  d.PushFront("A");
  ASSERT_EQUAL(d.Front(), "A");
  ASSERT_EQUAL(d.Back(), "A");
  ASSERT_EQUAL(d.At(0), "A");

  d.PushBack("B");
  ASSERT_EQUAL(d.Front(), "A");
  ASSERT_EQUAL(d.Back(), "B");
  ASSERT_EQUAL(d.At(0), "A");
  ASSERT_EQUAL(d.At(1), "B");
  ASSERT_EQUAL(d[0], "A");
  ASSERT_EQUAL(d[1], "B");

  d.PushFront("C");
  ASSERT_EQUAL(d.Front(), "C");
  ASSERT_EQUAL(d.Back(), "B");
  ASSERT_EQUAL(d.At(0), "C");
  ASSERT_EQUAL(d.At(2), "B");
  ASSERT_EQUAL(d[0], "C");
  ASSERT_EQUAL(d[2], "B");

  d.PushFront("D");
  ASSERT_EQUAL(d.Front(), "D");
  ASSERT_EQUAL(d.Back(), "B");
  ASSERT_EQUAL(d.At(0), "D");
  ASSERT_EQUAL(d.At(3), "B");
  ASSERT_EQUAL(d[0], "D");
  ASSERT_EQUAL(d[3], "B");

  d.PushBack("E");
  ASSERT_EQUAL(d.Front(), "D");
  ASSERT_EQUAL(d.Back(), "E");
  ASSERT_EQUAL(d.At(0), "D");
  ASSERT_EQUAL(d.At(4), "E");
  ASSERT_EQUAL(d[0], "D");
  ASSERT_EQUAL(d[4], "E");

  d.Front() = "X";
  ASSERT_EQUAL(d.Front(), "X");
  d.At(0) = "Y";
  ASSERT_EQUAL(d.Front(), "Y");
  d[0] = "Z";
  ASSERT_EQUAL(d.Front(), "Z");
  d.PushBack(d.Front());
  ASSERT_EQUAL(d.Back(), d.Front());
  ASSERT_EQUAL(d.Size(), 6u);
}

void TestPushFront(){
  Deque<string> d;
  d.PushBack("aaa");
  d.PushFront("bbb");
  d.PushFront("ccc");
  d.PushBack("fff");

  vector<string> v;
  v.push_back(d.At(0));
  v.push_back(d.At(1));
  v.push_back(d.At(2));
  v.push_back(d.At(3));

  vector<string> f = {"ccc", "bbb", "aaa", "fff"};
  ASSERT_EQUAL(v,f);
}

void TestFrontBack(){
  Deque<size_t> deq;
  vector<size_t> v;
  for(size_t i = 0; i < 10000; i++){
    deq.PushFront(i);
    v.push_back(i);
  }

  for(size_t i = 9999; i != 0; i--){
    ASSERT_EQUAL(deq.At(9999 - i), i);
  }
}

void TestFrontStandard(){
  Deque<size_t> deq;
  deq.PushBack(12u);
  deq.PushBack(44u);
  deq.PushBack(66u);
  deq.PushBack(88u);
  ASSERT_EQUAL(deq.Front(),12u);
  ASSERT_EQUAL(deq.Back(),88u);

  deq.PushBack(129u);
  deq.PushBack(4412u);
  deq.PushBack(66123u);
  deq.PushBack(8834u);
  ASSERT_EQUAL(deq.Back(),8834u);

  deq.PushFront(90u);
  deq.PushFront(758u);
  deq.PushFront(278u);
  deq.PushFront(780u);
  ASSERT_EQUAL(deq.Back(),8834u);
  ASSERT_EQUAL(deq.Front(),780u);
}

void EmptyPushBack(){
  Deque<string> deq;
  deq.PushBack("");
  ASSERT_EQUAL(deq.Back(),"");
  ASSERT_EQUAL(deq.Front(),"");
  deq.Clear();
  deq.PushFront("");
  ASSERT_EQUAL(deq.Back(),"");
  ASSERT_EQUAL(deq.Front(),"");
  ASSERT_EQUAL(deq.At(0), "");
  ASSERT_EQUAL(deq[0], "");
}

#endif // TESTS_H
