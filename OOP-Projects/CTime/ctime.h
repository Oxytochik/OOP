#pragma once

#include <string>

enum Status{SUCCESS, ERROR, WARNING};

class CTime {
	int _hours;
	int _minutes;
	int _seconds;
public:
	CTime();
	CTime(int hours, int minutes, int seconds);
	CTime(const CTime& time);
	CTime(std::string time);

	Status check();
	Status convert();

	Status add_hours(int hours);
	Status add_minutes(int minutes);
	Status add_seconds(int seconds);
	CTime& add(const CTime& time);

	Status assign(const CTime& time);
	int compare(const CTime& time);

	Status input();
	Status output();
};