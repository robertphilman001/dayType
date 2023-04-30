#include <iostream>
#include "dayType.h"

int main() {
    std::cout << "Creating day object using default constructor..." << std::endl;
    dayType day1;
    std::cout << "Current day: ";
    day1.printDay();

    std::cout << "Previous day: " << day1.getPreviousDay() << std::endl;

    std::cout << "Next day: " << day1.getNextDay() << std::endl;

    std::cout << "Creating day object using parameterized constructor..." << std::endl;
    dayType day2("Monday");
    std::cout << "Current day: " << day2.getDay() << std::endl;

    day2.addDays(3);
    std::cout << "Adding 3 days: " << day2.getDay() << std::endl;

    day2.addDays(30);
    std::cout << "Adding 3 days: " << day2.getDay() << std::endl;

    day2.addDays(365);
    std::cout << "Adding 3 days: " << day2.getDay() << std::endl;

}
