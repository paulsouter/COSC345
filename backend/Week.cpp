#include "Week.h"
#include <string>

Week::Week(string date) {//might need to check that the substr is correct
	this->date = date;
	int mon = stoi(date.substr(3, 1));
	int daysInMonth = 1;
	if (mon == 04 || mon == 06 || mon == 9 || mon == 11) {
		daysInMonth = 30;
	}
	else if (mon == 02) {
		int year = stoi(date.substr(6, 3));
		if (year % 4 == 0 && year % 100 && year % 400) {
			daysInMonth = 29;
		}
		else {
			daysInMonth = 28;
		}
	}
	else {
		daysInMonth = 31;
	}
	for (int i = 0; i < 7; i++) {
		int dateOfWeek = (stoi(date.substr(0, 1)) + i); 
		if (dateOfWeek == daysInMonth) {
			dateOfWeek = 1;
			int month = stoi(date.substr(2, 2));
			int year = stoi(date.substr(5, 4));
			if (mon == 12) {//checking that if it's the end of the year
				year++;
				date = "01/01/" + to_string(year);
			}
			else {//checks if it's the end of the month
				date = "01/" + to_string(month + 1) + to_string(year);
			}
		}
		Day dayx(date);
		week.push_back(dayx);
	}

}
Week::~Week() {}
Day Week::getDay(string day) {
	int startDateOfWeek = stoi(date.substr(0,2));
	int theDay = stoi(day.substr(0.2));
	int dayOfWeek = startDateOfWeek - theDay;
	return week.at(dayOfWeek -1);
}
string Week::toString() {
	string result = "";
	result = date;
	return result;
}
