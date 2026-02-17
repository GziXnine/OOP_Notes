#ifndef LIST_H
#define LIST_H

#include <iostream>

class List
{
public:
  int *arr;
  int size, currentIndex;

  // Special member functions
  // Can Overload the constructor
  List(int size) // Constructor
  {
    if (size > 0)
    {
      this->size = size;
      arr = new int[size];
      currentIndex = -1;
    }
  }

  // Can Overload the copy constructor
  // Make a Shallow Copy of the object, which will cause a problem when we try to access the arr pointer in the original myList after the display function ends.
  List(const List &oldList) // Copy Constructor
  {
    // Shallow Copy
    *this = oldList; // Copy Assignment Operator
    arr = new int[size];

    for (int i = 0; i <= oldList.currentIndex; i++) // Deep Copy of the object
      this->arr[i] = oldList.arr[i];

    // this->size = oldList.size;
    // this->currentIndex = oldList.currentIndex;
  }

  // Special member functions
  // Can't Overload the destructor
  ~List() // Destructor
  {
    delete[] arr;
  }

  void add(int num)
  {
    currentIndex++;
    if (currentIndex == size)
      Extend();

    arr[currentIndex] = num;
  }

  int getDataByIndex(int index) const
  {
    if (index >= 0 && index <= currentIndex)
      return arr[index];
    return -1;
  }

private:
  void Extend()
  {
    int *newItems = new int[size * 2];

    for (int i = 0; i < size; i++)
      newItems[i] = arr[i];

    this->size *= 2;
    delete[] arr;
    arr = newItems;
  }
};

#endif // LIST_H