#pragma once
class Time
{
public:
	Time(int hours = 0, int min = 0, int sec = 0);
	bool equals			(Time const& x) const;
	bool minus			(Time const& x) const;
	bool minEquals		(Time const& x) const;
	bool greater		(Time const& x) const;
	bool greatEquals	(Time const& x) const;


private:
	int m_hours;
	int m_min;
	int m_sec;
};
bool operator==(Time const& x, Time const& y);
bool operator< (Time const& x, Time const& y);
bool operator<=(Time const& x, Time const& y);
bool operator> (Time const& x, Time const& y);
bool operator>=(Time const& x, Time const& y);
