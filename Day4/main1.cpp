#include <iostream>
#include "List.h"

using namespace std;

/*
  List l

  هل حصله كيريت من نفس الانستراكتور ده؟؟ لاء.
  هل حصله كيريت من الاستراكتور ده؟؟ لاء.
  حصله كيريت من انستراكتور تانى.
  Special type of "Constructor" called "Copy Constructor"
*/
void displayList(const List &list) // *list, &list
{
  for (int i = 0; i <= list.currentIndex; i++)
    cout << list.getDataByIndex(i) << " ";
  cout << endl;
}

// هنا لما يخلص هيتمسح النسخة الجديدة وهتتمسح لما الفانكشن يخلص وكمان لو انا عملت ادد كده بعدل على الاراى الجديدة.
void display(List l)
{
  for (int i = 0; i <= l.currentIndex; i++)
    cout << l.getDataByIndex(i) << " ";
  cout << endl;
}

int main()
{
  List myList(5);

  myList.add(3); // 0
  myList.add(2); // 1
  myList.add(5); // 2
  myList.add(4); // 3

  displayList(myList); // &myList, myList

  // This will call the copy constructor to create a copy of myList and pass it to the display function.
  // But Make a Problem because of the destructor, when the display function ends, it will call the destructor of the copy of myList and delete the arr pointer, which will cause a problem when we try to access the arr pointer in the original myList.
  // Make Stack Overflow because of the infinite loop of the copy constructor, when we try to create a copy of myList, it will call the copy constructor again to create a copy of the copy of myList, and so on.
  display(myList); // Copy Constructor
  // But Now I Can Run This Function Because I Make a Deep Copy of the Object in the Copy Constructor, So When the Display Function Ends, It Will Call the Destructor of the Copy of myList and Delete the arr Pointer of the Copy of myList, But The arr Pointer of the Original myList Will Not Be Deleted, So I Can Still Access It.

  int num = myList.getDataByIndex(3); // num = 4
  cout << num << endl;

  return 0;
}