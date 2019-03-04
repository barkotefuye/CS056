#pragma once

#ifndef ROAD_HPP_
#define ROAD_HPP_

class Location;


class Road {
private:
  Location *m_a, *m_b;  // end points of this road.
  int m_days;  // the number of days to travel this road.

public:
  Road(Location*, Location*, int);  // initialize attributes.

  Location* get_end(Location*);  // get the other end of this road.
  int get_days();  // get the number of days to travel this road.
};

#endif
