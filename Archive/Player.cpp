#include <iostream>
using namespace std;

#include <stddef.h>
#include "Player.hpp"
#include "Location.hpp"


// constructor
Player::Player() : m_crystals(0), m_location(NULL)
{}


// move player to the given location.
void Player::set_location(Location* location) {
	cout << location->get_name() << endl;
	m_location = location;
	cout << m_location->get_name() << endl;
	cout << "set location is done" << endl;
}

// get a pointer to the current location.
Location* Player::get_location() {
	return m_location;
}

// increment the number of crystals.
void Player::add_crystal() {
	m_crystals = m_crystals + 1;
}

// get number of crystals collected so far.
int Player::get_crystals() {
	return m_crystals;
}
