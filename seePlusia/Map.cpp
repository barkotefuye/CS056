#include <iostream>
#include <fstream>

#include "Map.hpp"
#include "Location.hpp"
#include "Road.hpp"


Map::Map()
{}

Map::~Map()
{}

void Map::set_map(){


}  // create the map of SeePlusia.

  Location* Map::get_start_location(){
  		return m_start;

  } // get the starting location on the map.

  // Given a location and a direction, return the corresponding road.
  Road* Map::get_road(Location* current, std::string direction){
  	if(direction == "north"){
  		return current->get_north_road();

  	}
  	else if(direction == "east"){

  		return current->get_east_road();
  	}
  	else if(direction == "west"){

  		return current->get_west_road();
  	}
  	else{

  		return current->get_south_road();
   }


  }

  void Map::read_map(){
  	ifstream file("seePlusia.txt");
  	int size;
  	file >> size;
  	Location* listOfPlaces = new Location[size];

  	char n;

  	for(int i = 0; i < size; ++i){
  		int id;
  		std::string name;
  		file.ignore( 20, ':');
  		file >> id;
  		file.ignore( 10, ':');
  		file >> name;
  		*(listOfPlaces + i) = new Location(name, id, NULL);


  	} // Maybe works

  	int counter = 0;
 	while(file.get(n)){
 		int north;
 		int dayn;
  		int east;
  		int daye;
  		int west;
  		int dayw;
  		int south;
  		int days;
  		std::string special;

  		file.ignore( 20, ':');
 		file >> north;
 		file.ignore( 20, ':');
 		file >> dayn;
 		file.ignore( 20, ':');
 		file >> east;
 		file.ignore( 20, ':');
 		file >> daye;
 		file.ignore( 20, ':');
 		file >> west;
 		file.ignore( 20, ':');
 		file >> dayw;
 		file.ignore( 20, ':');
 		file >> south;
 		file.ignore( 20, ':');
 		file >> days;
 		file.ignore( 20, ':');
 		file >> special;


 		listOfPlaces[counter]->set_north(listOfPlaces[north], dayn);
 		*(listOfPlaces + counter)->set_east((listOfPlaces + east),daye );
 		*(listOfPlaces + counter)->set_west((listOfPlaces + west), dayw);
 		*(listOfPlaces + counter)->set_south((listOfPlaces + south), days);
 		*(listOfPlaces + counter)->set_special(special);


 		m_start = *(listOfPlaces);

 		++counter;

 	}

  }


  }