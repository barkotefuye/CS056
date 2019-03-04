#pragma once

#ifndef MAP_HPP_
#define MAP_HPP_

#include "Location.hpp"
#include "Road.hpp"

class Map {
private:
  Location** m_start;  // the starting location of the map.
  int m_size;

public:
  Map();  // initialize attributes appropriately.
  ~Map();  // deallocate memory for all roads and locations.

  Location **array_of_locations; // array of locations

  void set_map();  // create the map of SeePlusia.

  Location* get_start_location();  // get the starting location on the map.

  // Given a location and a direction, return the corresponding road.
  Road* get_road(Location*, std::string);
};

#endif
