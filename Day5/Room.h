#ifndef ROOM_H
#define ROOM_H

#include "Instructor.h"
#include "Student.h"
#include "Wall.h"

class Room
{
private:
  Instructor *ins;       // Aggregation: Room has an Instructor, but the Instructor can exist independently of the Room.
  Student *students[10]; // Aggregation: Room has Students, but the Students can exist independently of the Room.
  // علاقة لفترة زمنية طويلة واحد فيهم معتمد على التانى بس مش لازم يكونوا معتمدين على بعض دايما
  // Wall walls[4]; // Composition: Room has Walls, and the lifetime of the Walls is tied to the lifetime of the Room.
  // لو الكيريشن حصل جوا الكلاس هنا يبقى علاقة كومبيزت لو الكيريشن حصل برا هيبقى علاقة اجريجيشن.
  // * -> علاقة اجريجيشن
  Wall *walls[4]; // Aggregation.

public:
  Room()
  {
    ins = nullptr;
    for (int i = 0; i < 10; i++)
      students[i] = nullptr;

    for (int i = 0; i < 4; i++)
      walls[i] = new Wall();
  };

  void instructorEnters(Instructor *instructor)
  {
    ins = instructor; // Aggregation: Room has an Instructor, but the Instructor can exist independently of the Room.
  }

  void instructorLeaves()
  {
    ins = nullptr;
  }
};

#endif // ROOM_H