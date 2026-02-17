#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
  int hour;
  int minute;
  int second;

public:
  Time(int hour, int minute, int second)
  {
    setTime(hour, minute, second);
  }

  int getHour()
  {
    return hour;
  }

  int getMinute()
  {
    return minute;
  }

  int getSecond()
  {
    return second;
  }

  void setHour(int hour)
  {
    if (hour >= 0 && hour < 24)
      this->hour = hour;
  }

  void setMinute(int minute)
  {
    if (minute >= 0 && minute < 60)
      this->minute = minute;
  }

  void setSecond(int second)
  {
    if (second >= 0 && second < 60)
      this->second = second;
  }

  void setTime(int hour, int minute, int second)
  {
    setHour(hour);
    setMinute(minute);
    setSecond(second);
  }

  Time nextSecond()
  {
    second++;
    if (second == 60)
    {
      second = 0;
      minute++;
      if (minute == 60)
      {
        minute = 0;
        hour++;
        if (hour == 24)
          hour = 0;
      }
    }

    return *this; // Return The Current Object.
  }

  Time previousSecond()
  {
    second--;
    if (second == -1)
    {
      second = 59;
      minute--;
      if (minute == -1)
      {
        minute = 59;
        hour--;
        if (hour == -1)
          hour = 23;
      }
    }

    return *this; // Return The Current Object.
  }

  string showTime()
  {
    string time = (hour < 10 ? "0" : "") + to_string(hour) + ":" +
                  (minute < 10 ? "0" : "") + to_string(minute) + ":" +
                  (second < 10 ? "0" : "") + to_string(second);
    return time;
  }
};

int main()
{
  Time t(23, 59, 59);
  cout << t.showTime() << endl;
  t.nextSecond();
  cout << t.showTime() << endl;
  t.previousSecond();
  cout << t.showTime() << endl;

  return 0;
}