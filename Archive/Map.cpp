
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Map.hpp"
#include "Location.hpp"
#include "Road.hpp"


Map::Map() : m_start(NULL), m_size(0), array_of_locations()
{}

Map::~Map()
{
	for(int i = 0; i < m_size; i++){
		delete m_start[i];
	}
	delete[] m_start;
}

// create the map of SeePlusia
void Map::set_map() {
	ifstream file;
	file.open ("seePlusia.txt");

	file >> m_size;
	char c;
	int id;
	string name;
	file.ignore( 20, ':');
	file >> id;
	file.ignore( 20, ':');
	file.get(c);
	getline(file, name);
	m_start = new Location*[m_size];
	*(m_start) =  new Location(name, "", id);

	//Location startLocation = Location(name, "", id);
	//Location* ptr_location = &startLocation;
	//m_start = ptr_location;

	//array_of_locations = new Location*[m_size];

	//array_of_locations[0] = m_start;

	for(int i = 1; i < m_size; ++i) {
		int id;
		//string name;
		file.ignore( 20, ':');
		file >> id;
		file.ignore( 20, ':');
		file.get(c);
		getline(file, name);
		*(m_start + i) = new Location(name, "", id);
		//Location* ptr_location = new Location(name, "", id);
		//array_of_locations[i] = ptr_location;
	}
	while(!file.eof()) {
		int id;
		char north;
		char dayn;
		char south;
		char days;
		char east;
		char daye;
		char west;
		char dayw;
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

		if (isdigit(north)) {
			//array_of_locations[id]->set_north(array_of_locations[(int)north], (int)dayn);
			Location* temp = *(m_start+id);
			temp->set_north(*(m_start+north), (int)dayn);
		}

		if (isdigit(south)) {
			//array_of_locations[id]->set_south(array_of_locations[(int)south], (int)days);
			Location* temp = *(m_start+id);
			temp->set_south(*(m_start+south), (int)days);
		}

		if (isdigit(east)) {
			//array_of_locations[id]->set_east(array_of_locations[(int)east], (int)daye);
			Location* temp = *(m_start+id);
			temp->set_east(*(m_start+east), (int)daye);
		}

		if (isdigit(west)) {
			//array_of_locations[id]->set_west(array_of_locations[(int)west], (int)dayw);
			Location* temp = *(m_start+id);
			temp->set_west(*(m_start+west), (int)dayw);
		}

		if (special != "id") {
			//array_of_locations[id]->set_special(special);
			Location* temp = *(m_start+id);
			temp->set_special(special);
		}
	}
	file.close();
}

// get the starting location on the map
Location* Map::get_start_location() {
	return *m_start;
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
