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
	
	// Display function
	void display() ;

	// Operateur De Calcule with "="
	Time operator+=(Time const& x);
	 /* Time operator-=(Time const& x);
	  * Time operator*=(Time const& x);
	  * Time operator/=(Time const& x); */




private:
	int m_hours;
	int m_min;
	int m_sec;
};
// Operateur De Comparaison
bool operator==(Time const& x, Time const& y);
bool operator< (Time const& x, Time const& y);
bool operator<=(Time const& x, Time const& y);
bool operator> (Time const& x, Time const& y);
bool operator>=(Time const& x, Time const& y);

// Operateur De Calcule without "="
Time operator+(Time const& x, Time const& y);


/* Time operator-(Time const& x);
 * Time operator*(Time const& x);
 * Time operator/(Time const& x); */ 
