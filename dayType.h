#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>
 
class dayType {
public:
    dayType(); // default constructor
    dayType(const std::string& day); // parameterized constructor
    void setDay(const std::string& day); // set the day
    std::string printDay() const; // print the day
    std::string getDay() const; // return the day
    std::string getNextDay() const; // return the next day
    std::string getPreviousDay() const; // return the previous day
    void addDays(int numDays); // add a certain number of days to the current day
private:
    std::string daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int currentDayIndex; // index of current day in daysOfWeek array
};

#endif
