
#include <iostream>
using namespace std;

#include "Game.hpp"


// initialize attributes, place player on the start of the map.
Game::Game() : m_map(Map()), m_player(Player()), m_days(0), m_game_over(false) {
	m_player.set_location(m_map.get_start_location());
}


// the game loop
void Game::run() {

	cout << "Hello!" << endl;

	// game introduction
	this->execute_special("start");
	m_player.get_location()->remove_special("start");

    int choice;
    cin >> choice;

    // quit game
    if(choice == 2){
        return;
    }

	// game loop
	while (m_game_over == false || this->m_days < 31) {
		this->show_state();

		int direction;
		cin >> direction;

		switch (direction) {
			// north
			case 1:
				// if we can travel this road
				if (m_player.get_location()->get_north_road() != NULL) {
					this->execute_special(m_player.get_location()->
						get_north_location()->get_special());

					// if the direction we're heading is not towards the prince
					// update with road days and change location
					if (m_player.get_location()->get_north_location()->
							get_special() != "prince") {
						m_days = m_days +
							m_player.get_location()->get_north_road()->
							get_days();
						m_player.set_location(
							m_player.get_location()->get_north_location());
					}
					else {
						m_days = m_days + 1;
					}
				}
				// if there's nothing in this direction
				else {
					cout << "There's nothing here. You've lost a day " <<
						 "exploring aimlessly!" << endl;
					m_days = m_days + 1;
				}
				break;
			// west
			case 2:
				if (m_player.get_location()->get_west_road() != NULL) {
					this->execute_special(m_player.get_location()->
						get_west_location()->get_special());

					// if the direction we're heading is not towards the prince
					// update with road days and change location
					if (m_player.get_location()->get_west_location()->
							get_special() != "prince") {
						m_days = m_days +
							m_player.get_location()->get_west_road()->
							get_days();
						m_player.set_location(
							m_player.get_location()->get_west_location());
					}
					else {
						m_days = m_days + 1;
					}
				}
				// if there's nothing in this direction
				else {
					cout << "There's nothing here. You've lost a day " <<
						" exploring aimlessly!" << endl;
					m_days = m_days + 1;
				}
				break;
			// south
			case 3:
				if (m_player.get_location()->get_south_road() != NULL) {
					this->execute_special(m_player.get_location()->
						get_south_location()->get_special());

					// if the direction we're heading is not towards the prince
					// update with road days and change location
					if (m_player.get_location()->get_south_location()->
							get_special() != "prince") {
						m_days = m_days +
							m_player.get_location()->get_south_road()->
							get_days();
						m_player.set_location(
							m_player.get_location()->get_south_location());
					}
					else {
						m_days = m_days + 1;
					}
				}
				// if there's nothing in this direction
				else {
					cout << "There's nothing here. You've lost a day " <<
						 "exploring aimlessly!" << endl;
					m_days = m_days + 1;
				}
				break;
			// east
			case 4:
				if (m_player.get_location()->get_east_road() != NULL) {
					this->execute_special(m_player.get_location()->
						get_east_location()->get_special());

					// if the direction we're heading is not towards the prince
					// update with road days and change location
					if (m_player.get_location()->get_east_location()->
							get_special() != "prince") {
						m_days = m_days +
							m_player.get_location()->get_east_road()->
							get_days();
						m_player.set_location(
							m_player.get_location()->get_east_location());
					}
					else {
						m_days = m_days + 1;
					}
				}
				// if there's nothing in this direction
				else {
					cout << "There's nothing here. You've lost a day " <<
						 "exploring aimlessly!" << endl;
					m_days = m_days + 1;
				}
				break;
			// invalid input
			default:
				cout << "You've entered an invalid number.\n" <<
					 "1: North\n2: West\n3: South\n 4: East" << endl;
		}
	}

	// if player dies of starvation
	if (m_game_over == true) {
		cout << "You've died of hunger." << endl;
	}
	
}

// execute the given special
void Game::execute_special(string special){
	// start
	if (special == "start") {
		cout << "Welcome to the Land of SeePlusia! Prince Lazy has been \n" <<
        	 "captured by an evil wizard. You are Zeldana, a female \n" <<
        	 "warrior, and you must rescue the prince and return him to \n" <<
        	 "his family. You go off on a quest through the dangerous \n" <<
        	 "world of Seeplusia to search for the three mythical \n" <<
       	     "crystals of Objectos. Together the crystals will give \n" <<
        	 "you the power to defeat the wizard and rescue Prince Lazy.\n"
        	 << endl;

	    cout << "Begin game?\n" << endl;
	    cout << "Press any number followed by 'Enter' to play"
	         << "\nPress '2' followed by 'Enter' to quit" << endl;
	}

	// add crystal and remove special
	else if (special == "crystal") {
		cout << "You've found a crystal!" << endl;

		m_player.add_crystal();
		m_player.get_location()->remove_special("crystal");
	}

	// death
	else if (special == "death") {
		cout << "You've died from a zombie ambush at "
		<< m_player.get_location();

		m_game_over = true;
	}

	// prince scenarios
	else if (special == "prince") {
		if (m_player.get_crystals() == 3) {
			cout << "You've rescued Prince Lazy!" << endl;

			m_game_over = true;
		}
		else {
			cout << "You do not have enough crystals to rescue the prince!"
				 << endl;

			m_days = m_days + 1;
		}
	}
}

// show current game state
void Game::show_state(){
	cout << "You are now at " << m_player.get_location()->get_name()
		 << " with " << m_player.get_crystals() << " crystals." << endl;

    cout << "It is now day " << m_days <<
            ".\nWhat direction would you like to go?" << endl;

    cout << "1: North\n2: West\n3: South\n 4: East" << endl;
}
