#pragma once
#ifndef WEEK_H
#define WEEK_H

#include "Day.h"

class Week {
private:
	string date;
	vector<Day> week; //array of days,  should probable change to an array

public:
	string getDate() { return date; }
	void setDate(string date) { this->date = date; }
	Day getDay(string day);
	string toString();

	Week(string date);
	~Week();
};
#endif