class Road {
private:
  Location *m_a, *m_b;  // endpoints of this road.
  int m_days;  // the number of days to travel this road.

public:
  Road(Location*, Location*);  // initialize attributes.

  Location* get_end(Location*);  // get the other end of this road.
  int get_days();  // get the number of days to travel this road.
};