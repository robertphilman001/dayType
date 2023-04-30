#include "dayType.h"

using namespace std;

dayType::dayType() {
    currentDayIndex = 0; // default to Sunday
}

dayType::dayType(const std::string& day) {
    // initialize currentDayIndex based on input day
    for (int i = 0; i < 7; i++) {
        if (day == daysOfWeek[i]) {
            currentDayIndex = i;
            return;
        }
    }
    // if input day is not valid, default to Sunday
    currentDayIndex = 0;
}

void dayType::setDay(const std::string& day) {
    // update currentDayIndex based on input day
    for (int i = 0; i < 7; i++) {
        if (day == daysOfWeek[i]) {
            currentDayIndex = i;
            return;
        }
    }
    // if input day is not valid, do not update currentDayIndex
}

std::string dayType::printDay() const {
     return daysOfWeek[currentDayIndex];
}

std::string dayType::getDay() const {
    return daysOfWeek[currentDayIndex];
}

std::string dayType::getNextDay() const {
    int nextDayIndex = (currentDayIndex + 1) % 7;
    return daysOfWeek[nextDayIndex];
}

std::string dayType::getPreviousDay() const {
    int prevDayIndex = (currentDayIndex + 6) % 7;
    return daysOfWeek[prevDayIndex];
}

void dayType::addDays(int numDays) {
    currentDayIndex = (currentDayIndex + numDays) % 7;
}
