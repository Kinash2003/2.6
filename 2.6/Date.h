//Date.h
#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;
class Date
{
public:

	class Triad
	{
		double first, second, third;
		static int counter;
	public:
		void SetFirst(double value);
		void SetSecond(double value);
		void SetThird(double value);

		double GetFirst() const;
		double GetSecond() const;
		double GetThird() const;

		Triad();
		Triad(double, double, double);
		Triad(const Triad&);

		Triad& operator = (const Triad&);
		friend ostream& operator << (ostream&, const Triad&);
		friend istream& operator >> (istream&, Triad&);
		operator string() const;

		Triad& operator ++ ();
		Triad& operator -- ();
		Triad operator ++ (int);
		Triad operator -- (int);

		static int getCounter();
	};
	Date(double, double, double);

	void SetP(double first, double second, double third);

	int Ñomparison(const Date::Triad t1, const Date::Triad t2) const;
	void TriadResult(int result);
	void date1(int result);

	friend bool operator > (const Triad t1, const Triad t2);
	friend bool operator < (const Triad t1, const Triad t2);
	friend bool operator == (const Triad t1, const Triad t2);

	static int getCounter();
private:
	Triad t;
	static int counter;
};