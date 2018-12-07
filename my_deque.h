#ifndef DEGUE_H
#define DEGUE_H

#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;

template<class T>
class Deque{
  vector<T> front_vec;
  vector<T> back_vec;
public:
  Deque() = default;

  bool Empty() const{
    return front_vec.empty() && back_vec.empty();
  }
  size_t Size() const{
    return front_vec.size() + back_vec.size();
  }
  void Clear(){
    front_vec.resize(0);
    back_vec.resize(0);
  }
  const T& Front() const{
    if(!front_vec.empty())
      return front_vec.back();
    if(!back_vec.empty())
      return back_vec.front();
  }
  T& Front(){
    return const_cast<T&>(static_cast<const Deque&>(*this).Front());
  }
  const T& Back() const{
    if(!back_vec.empty())
      return back_vec.back();
    if(!front_vec.empty())
      return front_vec.front();
  }
  T& Back(){
    return const_cast<T&>(static_cast<const Deque&>(*this).Back());
  }

  void PushFront(const T& item){
    front_vec.push_back(item);
  }
  void PushBack(const T& item){
    back_vec.push_back(item);
  }

  T& At(size_t index){
    return const_cast<T&>(static_cast<const Deque&>(*this).At(index));
  }

  const T& At(const size_t index) const{
    if(index + 1 > Size())
      throw std::out_of_range("index out of range");
    return this->operator[](index);
  }

  T& operator[](const size_t index) {
    return const_cast<T&>(static_cast<const Deque&>(*this)[index]);
  }

  const T& operator[](size_t index) const {
    if(index < front_vec.size()){
      return front_vec[front_vec.size() - index - 1];
    }
    if (index - front_vec.size() < back_vec.size()){
      return back_vec[index - front_vec.size()];
    }
  }
};

#endif // DEGUE_H
