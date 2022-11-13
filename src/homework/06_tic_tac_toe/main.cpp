#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <map>
using namespace std;


int main() 
{

	
	string user_play_choice;

	

	string first_player;
	

	Tic_Tac_Toe game;
	Tic_Tac_Toe_MGR game_MGR;

	
	int x;
	int o;
	int t;
	int player_loop_count = 2;

	cout<<"Welcome to tic tac toe!\n\nWould you like to play?\nY - Yes\nN - No"<<endl;
	

	cout<<"Selection: ";
	cin>>user_play_choice;
	

	//Validating user input
	while(user_play_choice != "Y" && user_play_choice != "N"){				//Using string value type so multiple chars ex.(dawd) doesn't output the string 4 times
		cout<<"Invalid Input Please Try Again!"<<endl;						
		cout<<"Selection: ";
		cin>>user_play_choice;

	}

	while(user_play_choice == "Y"){
		cout<<"First player choose X or O"<<endl;
		cout<<"Selection: ";
		cin>>first_player;


		while(first_player != "X" && first_player != "O"){				//Using string value type so multiple chars ex.(dawd) doesn't output the string 4 times
		cout<<"Invalid Input Please Try Again!"<<endl;						
		cout<<"Selection: ";
		cin>>first_player;
		}

		game.start_game(first_player);
		cout<<"Player One Please Choose a Spot"<<endl;
		cout<<game;
		cout<<"Spot: ";
		cin>>game;
		cout<<game;

		while(game.game_over() == false)
		{
			if(player_loop_count % 2 == 0)
			{
				cout<<"Player Two Please Choose a Spot"<<endl;
				cout<<"Spot:";
				cin>>game;

				cout<<game;
			}
			else
			{
				cout<<"Player One Please Choose a Spot"<<endl;
				cout<<"Spot:";
				cin>>game;
				cout<<game;
			}
			player_loop_count += 1; 			//iterates each loop so the correct cout will corespond to the correct player
		}
		game_MGR.save_game(game);
		cout<<endl<<"GAME OVER!\nWinner: "<<game.get_winner()<<endl;
		game_MGR.get_winner_total(o,x,t);
		cout<<"\nGAME STATS:"<<endl;
		cout<<"X wins: "<<x<<endl;
		cout<<"O wins: "<<o<<endl;
		cout<<"Ties: \n"<<t<<endl;
		cout<<"Would you like to play?\nY - Yes\nN - No"<<endl;

		cout<<"Selection: ";
		cin>>user_play_choice;

	}	

	
}