class Player {
private:
  int m_crystals;  // the number of crystals collected so far.
  Location* m_location;  // current location.

public:
  Player();  // initialize attributes.

  void set_location(Location*); // move player to the given location.
  Location* get_location(); // get a pointer to the current location.

  void add_crystal(); // increment the number of crystals.
  int get_crystals(); // get number of crystals collected so far.
  
};