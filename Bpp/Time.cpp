#include "Time.h"
// CLASS
Time::Time(int heures, int minutes, int secondes) : m_hours(heures), m_min(minutes), m_sec(secondes) {}

// Operator ==
bool operator==(Time const& x, Time const& y) {
	return x.equals(y);
}
bool Time::equals(Time const& x) const {
	return (m_hours == x.m_hours && m_min == x.m_min && m_sec == x.m_sec);
}

// Operator <
bool operator<(Time const& x, Time const& y) {
	return x.minus(y);
}
bool Time::minus(Time const& x) const {
	if (m_hours < x.m_hours) {
		return true;
	}
	else if(m_hours == x.m_hours && m_min < x.m_min) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min == x.m_min && m_sec < x.m_min) {
		return true;
	} 
	else {
		return false;
	}
}

// Operator <=
bool operator<=(Time const& x, Time const& y) {
	return x.minEquals(y);
}
bool Time::minEquals(Time const& x) const {
	if (m_hours <= x.m_hours) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min <= x.m_min) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min == x.m_min && m_sec <= x.m_min) {
		return true;
	}
	else {
		return true;
	}
}

// Operator >
bool operator>(Time const& x, Time const& y) {
	return x.greater(y);
}
bool Time::greater(Time const& x) const{
	if (m_hours > x.m_hours) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min > x.m_min) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min == x.m_min && m_sec > x.m_min) {
		return true;
	}
	else {
		return false;
	}
}
// Operator >=
bool operator>=(Time const& x, Time const& y) {
	return x.greatEquals(y);
}
bool Time::greatEquals(Time const& x) const {
	if (m_hours >= x.m_hours) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min >= x.m_min) {
		return true;
	}
	else if (m_hours == x.m_hours && m_min == x.m_min && m_sec >= x.m_min) {
		return true;
	}
	else {
		return true;
	}
}


