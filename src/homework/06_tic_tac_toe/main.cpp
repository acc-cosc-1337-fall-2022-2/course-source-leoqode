#include "tic_tac_toe.h"
#include <map>
using namespace std;


int main() 
{

	map<string, string>invalid_moves;
	string user_play_choice;

	

	string first_player;
	

	Tic_Tac_Toe game;

	int pos_mark;

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
		game.display_board();
		cout<<"Spot: ";
		cin>>pos_mark;
		while(game.check_invalid_mark(pos_mark) == true){
			cout<<"Invalid Position! Please try again."<<endl;
			cout<<"\nPlayer Two Please Choose a Spot"<<endl;
			cout<<"Spot:";
			cin>>pos_mark;
		}
		game.mark_board(pos_mark);
		game.display_board();

		while(game.game_over() == false)
		{
			if(player_loop_count % 2 == 0)
			{
				cout<<"Player Two Please Choose a Spot"<<endl;
				cout<<"Spot:";
				cin>>pos_mark;
				while(game.check_invalid_mark(pos_mark) == true){
					cout<<"Invalid Position! Please try again."<<endl;
					cout<<"\nPlayer Two Please Choose a Spot"<<endl;
					cout<<"Spot:";
					cin>>pos_mark;
				}
				game.mark_board(pos_mark);
				game.display_board();
			}
			else
			{
				cout<<"Player One Please Choose a Spot"<<endl;
				cout<<"Spot:";
				cin>>pos_mark;
				while(game.check_invalid_mark(pos_mark) == true){
					cout<<"Invalid Position! Please try again."<<endl;
					cout<<"\nPlayer Two Please Choose a Spot"<<endl;
					cout<<"Spot:";
					cin>>pos_mark;
				}
				game.mark_board(pos_mark);
				game.display_board();
			}
			player_loop_count += 1; 			//iterates each loop so the correct cout will corespond to the correct player
		}
		cout<<endl<<"GAME OVER!\nWinner: "<<game.get_winner()<<endl;
		cout<<"Would you like to play?\nY - Yes\nN - No"<<endl;

		cout<<"Selection: ";
		cin>>user_play_choice;

	}

	
}