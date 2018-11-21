#ifndef DEGUE_H
#define DEGUE_H

#include <vector>
#include <iostream>
#include <stdexcept>

template<class T>
class MyDeque{
  std::vector<T> front_vec;
  std::vector<T> back_vec;
public:
  MyDeque():front_vec(0), back_vec(0){}
  MyDeque(T head_value, T tail_value):front_vec(0), back_vec(0){
    this->PushFront(head_value);
    this->PushBack(tail_value);
  }
  bool Empty(){
    return this->Size() == 0 ? true : false;
  }
  size_t Size() const{
    return front_vec.size() + back_vec.size();
  }
  void Clear(){
    front_vec.resize(0);
    back_vec.resize(0);
  }
  const T& Front() const{
    return front_vec.back();
  }
  T& Front(){
    return front_vec.back();
  }
  const T& Back() const{
    return back_vec.back();
  }
  T& Back(){
    return back_vec.back();
  }

  void PushFront(T item){
    front_vec.push_back(item);
  }
  void PushBack(T item){
    back_vec.push_back(item);
  }

  T& At(size_t index){
    return const_cast<T&>(static_cast<const MyDeque&>(*this).At(index));
  }

  const T& At(size_t index) const{
    try {
     if(index >= Size())
       throw std::out_of_range{"index out of range"};
     else{
       return this->operator[](index);
     }
    } catch (std::out_of_range& i) {
       std::cerr<< i.what() << std::endl;
    }
  }

  T& operator[](size_t index) {
    return const_cast<T&>(static_cast<const MyDeque&>(*this)[index]);
  }

  const T& operator[](size_t index) const {
    if(front_vec.size() != 0 && index <= front_vec.size() - 1){
      return front_vec[front_vec.size() - 1 - index];
    } else {
      size_t index_for_back_vec = front_vec.size() != 0 ? index %
                                                          front_vec.size() : index;
      return back_vec[index_for_back_vec];
    }
  }
};

#endif // DEGUE_H
