
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Map.hpp"
#include "Location.hpp"
#include "Road.hpp"


Map::Map() : m_start(NULL), m_size(0)
{}

Map::~Map()
{
	delete m_start;

	for(int i = 0; i < m_size; i++){
		delete (m_start + i);
	}

	delete[] m_start;
}

// create the map of SeePlusia
void Map::set_map() {
	ifstream file("seePlusia.txt");
	file >> m_size;

	int id;
	string name;
	file.ignore( 20, ':');
	file >> id;
	file.ignore( 20, ':');
	file >> name;
	Location startLocation = Location(name, "", id);
	Location* ptr_location = &startLocation;
	m_start = ptr_location;

	Location **array_of_locations = new Location*[m_size];

	array_of_locations[0] = m_start;

	for(int i = 1; i < m_size; ++i) {
		int id;
		string name;
		file.ignore( 20, ':');
		file >> id;
		file.ignore( 20, ':');
		file >> name;
		Location location = Location(name, "", id);
		Location* ptr_location = &location;
		array_of_locations[i] = ptr_location;
	}

	while(!file.eof()) {
		int id;
		int north;
		int dayn;
		int south;
		int days;
		int east;
		int daye;
		int west;
		int dayw;
		string special;

		file.ignore( 20, ':');
		file >> id;
		file.ignore( 20, ':');
		file >> north;
		file.ignore( 20, ':');
		file >> dayn;
		file.ignore( 20, ':');
		file >> south;
		file.ignore( 20, ':');
		file >> days;
		file.ignore( 20, ':');
		file >> east;
		file.ignore( 20, ':');
		file >> daye;
		file.ignore( 20, ':');
		file >> west;
		file.ignore( 20, ':');
		file >> dayw;
		file.ignore( 20, ':');
		file >> special;

		array_of_locations[id]->set_north(array_of_locations[north], dayn);
		array_of_locations[id]->set_north(array_of_locations[south], days);
		array_of_locations[id]->set_north(array_of_locations[east], daye);
		array_of_locations[id]->set_north(array_of_locations[west], dayw);

		array_of_locations[id]->set_special(special);
	}
}

// get the starting location on the map
Location* Map::get_start_location() {
	return m_start;
}

// Given a location and a direction, return the corresponding road.
Road* Map::get_road(Location* current, string direction) {
	if(direction == "north") {
		return current->get_north_road();
	}
	else if(direction == "east") {
		return current->get_east_road();
	}
	else if(direction == "west") {
		return current->get_west_road();
	}
	else {
		return current->get_south_road();
	}
}
