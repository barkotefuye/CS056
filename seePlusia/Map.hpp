class Map {
private:
  Location *m_start;  // the starting location of the map.


public:
  Map();  // initialize attributes appropriately.
  ~Map();  // deallocate memory for all roads and locations.
  
  void set_map();  // create the map of SeePlusia.

  Location* get_start_location();  // get the starting location on the map.

  // Given a location and a direction, return the corresponding road.
  Road* get_road(Location*, std::string);
  void read_map();
  int places;
  Road* map;
};


