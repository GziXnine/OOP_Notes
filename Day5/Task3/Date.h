#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date
{
private:
  int day;
  int month;
  int year;

public:
  Date() {};
  Date(int day, int month, int year)
  {
    setDate(day, month, year);
  }

  void setDate(int day, int month, int year)
  {
    setDay(day);
    setMonth(month);
    setYear(year);
  }

  void setDay(int day)
  {
    if (day >= 1 && day <= 31)
      this->day = day;
  }

  void setMonth(int month)
  {
    if (month >= 1 && month <= 12)
      this->month = month;
  }

  void setYear(int year)
  {
    if (year >= 1900 && year <= 2100)
      this->year = year;
  }

  int getDay() const
  {
    return day;
  }

  int getMonth() const
  {
    return month;
  }

  int getYear() const
  {
    return year;
  }

  string getDate() const
  {
    return (getDay() > 9 ? "" : "0") + to_string(getDay()) + "/" + (getMonth() > 9 ? "" : "0") + to_string(getMonth()) + "/" + to_string(getYear());
  }
};

#endif // DATE_H