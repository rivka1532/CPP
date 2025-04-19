#pragma once
class MyDate
{
	private:
		int day;
		int month;
		int year;

	public:
		int getDay();
		int getMonth();
		int getYear();
		MyDate(int _day = 1, int _month = 1, int _year = 1920);
		void setDate(int _day, int _month, int _year);
		void addDay(int mum);
		MyDate& operator++();
		MyDate operator++(int stam);
		MyDate& operator+=(int num);
		bool operator>(const MyDate& date) const;
		bool operator<(const MyDate& date) const;
		bool operator==(const MyDate& date) const;
		void printDate() const;
};

