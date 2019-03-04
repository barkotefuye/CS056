
#include "Road.hpp"
#include "Location.hpp"


// constructor
Road::Road(Location* locationA, Location* locationB, int numberOfDays) : m_a(locationA), m_b(locationB),
m_days(numberOfDays)
{}


// get the other end of this road
Location* Road::get_end(Location* startLocation) {
	if (m_a == startLocation) {
		return m_b;
	}
	else {
		return m_a;
	}
}

// get the number of days to travel this road
int Road::get_days() {
	return m_days;
}
