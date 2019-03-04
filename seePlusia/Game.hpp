class Game {
private:
  Map m_map;  // the map to be played.
  Player m_player;  // the player.
  int m_days;  // the number of days.
  bool m_game_over;  // is the game over?
  
public:
  Game();  // initialize attributes, place player on the start of the map.

  void run(); // the game loop.

  void execute_special(std::string);  // execute the given special.

  void show_state();  // show current game state.
};