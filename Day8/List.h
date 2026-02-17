#ifndef LIST_H
#define LIST_H

template <class T>
class List
{
  T *items;
  int size, currentIndex;

public:
  List(int size)
  {
    this->size = size;
    items = new T[size];
    currentIndex = -1;
  }

  virtual void Add(T data)
  {
    if (currentIndex == size - 1)
    {
      Extend();
    }

    currentIndex++;
    items[currentIndex] = data;
  }

  ~List()
  {
    delete[] items;
  }

protected:
private:
  void Extend()
  {
    T *newItems = new T[size * 2];

    for (int index = 0; index < size; index++)
    {
      newItems[index] = items[index];
    }

    size *= 2;
    delete[] items;

    items = newItems;
  }
};

#endif // LIST_H