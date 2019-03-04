
class Location {
private:
  std::string m_name;  // the name of this location.
  Road *m_north, *m_south, *m_east, *m_west; // outgoing roads, NULL if no road.

  /* The special characteristic of this location, one of
     - start: this is the start location,s
     - crystal: a crystal is present here, 
     - death: getting here results in the player's death
     - prince: the prince is imprisoned here.
     The string is empty if this location has no special charactersitic.
  */
  std::string m_special;  

public:
  // get and set for string
  Location(std::string, std::string); // initialize name and special.
  std::string set_name();
  std::string get_name();  // returns this location's special characteristic.
  std::string get_special();  // returns this location's special characteristic.
  void remove_special(std::string);  // removes the given special characteristic.

  // Set a neighbor by setting the corresponding road appropriately.
  void set_north(Location*);
  void set_south(Location*);
  void set_east(Location*);
  void set_west(Location*);

  // Get a neighbor - NULL if travel is not possible in that direction.
  Location* get_north();
  Location* get_south();
  Location* get_east();
  Location* get_west();
};