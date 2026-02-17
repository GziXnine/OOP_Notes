#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Marker.h"

class Instructor
{
private:
public:
  Instructor() {};

  void WriteOnBoard(Marker *marker) // Association: Instructor uses a Marker to write on the board, but the Marker can exist independently of the Instructor.
  {
  }
};

#endif // INSTRUCTOR_H