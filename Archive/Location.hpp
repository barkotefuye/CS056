#pragma once

#ifndef LOCATION_HPP_
#define LOCATION_HPP_

#include <string>
using namespace std;

#include "Road.hpp"

class Location {
private:
  string m_name;  // the name of this location.
  Road *m_north, *m_south, *m_east, *m_west; // outgoing roads, NULL if no road.

  /* The special characteristic of this location, one of
     - start: this is the start location,
     - crystal: a crystal is present here,
     - death: getting here results in the player's death
     - prince: the prince is imprisoned here.
     The string is empty if this location has no special characteristic.
  */
  string m_special;
  int m_id;

public:
  Location();
  Location(string, string, int); // initialize name, special and id.

  string get_name();  // returns this location's name characteristic.
  string get_special();  // returns this location's special characteristic.
  void set_special(string); // sets special for location.
  void remove_special(string);  // removes the given special characteristic.

  // Set a neighbor by setting the corresponding road appropriately.
  void set_north(Location*, int);
  void set_south(Location*, int);
  void set_east(Location*, int);
  void set_west(Location*, int);

  // Get a neighbor - NULL if travel is not possible in that direction.
  Location* get_north_location();
  Location* get_south_location();
  Location* get_east_location();
  Location* get_west_location();

  Road* get_north_road();
  Road* get_south_road();
  Road* get_east_road();
  Road* get_west_road();
};

#endif
