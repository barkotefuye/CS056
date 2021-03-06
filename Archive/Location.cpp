#include <iostream>

#include <string>
using namespace std;

#include "Location.hpp"

// constructor
Location::Location(string name, string special, int id) : m_name(name),
m_north(NULL), m_south(NULL), m_east(NULL), m_west(NULL), m_special(special)
{}


// returns this location's name characteristic.
string Location::get_name() {
	return m_name;
}

// returns this location's special characteristic.
string Location::get_special() {
	return m_special;
}

// sets special for location
void Location::set_special(string special) {
	m_special = special;
}

// removes the given special characteristic.
void Location::remove_special(string special) {
	if (this->get_special() == special) {
		m_special = "";
	}
}

// Set a neighbor by setting the corresponding road appropriately.
void Location::set_north(Location* northLocation, int numberOfDays) {
	Road newRoad = Road(this, northLocation, numberOfDays);
	Road* ptr_Road = &newRoad;
	m_north = ptr_Road;
}

void Location::set_south(Location* southLocation, int numberOfDays) {
	Road newRoad = Road(this, southLocation, numberOfDays);
	Road* ptr_Road = &newRoad;
	m_north = ptr_Road;
}

void Location::set_east(Location* eastLocation, int numberOfDays) {
	Road newRoad = Road(this, eastLocation, numberOfDays);
	Road* ptr_Road = &newRoad;
	m_north = ptr_Road;
}

void Location::set_west(Location* westLocation, int numberOfDays) {
	Road newRoad = Road(this, westLocation, numberOfDays);
	Road* ptr_Road = &newRoad;
	m_north = ptr_Road;
}

// Get a neighbor - NULL if travel is not possible in that direction.
Location* Location::get_north_location() {
	return this->m_north->get_end(this);
}

Location* Location::get_south_location() {
	return this->m_south->get_end(this);
}

Location* Location::get_east_location() {
	return this->m_east->get_end(this);
}

Location* Location::get_west_location() {
	return this->m_west->get_end(this);
}

// Get road - return NULL if travel is not possible in that direction.
Road* Location::get_north_road() {
	return m_north;
}

Road* Location::get_south_road() {
	return m_south;
}

Road* Location::get_east_road() {
	return m_east;
}

Road* Location::get_west_road() {
	return m_west;
}
