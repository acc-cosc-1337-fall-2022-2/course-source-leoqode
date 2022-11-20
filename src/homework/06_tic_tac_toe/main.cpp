
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


using namespace std;


int main() 
{

	unique_ptr<Tic_Tac_Toe> game;
	unique_ptr<Tic_Tac_Toe_MGR> manager= make_unique<Tic_Tac_Toe_MGR>();


	
	string user_play_choice;

	int user_grid;

	string first_player;
	
	

	

	
	int x;
	int o;
	int t;
	int player_loop_count = 2;

	

	cout<<"\n\nWould you like to play?\nY - Yes\nN - No"<<endl;
	

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
		cout<<"Welcome to To Tic Tac Toes! What grid would you like to play on? 3 - 3x3 || 4- 4x4"<<endl;
		cout<<"Selection: ";
		cin>>user_grid;
		if(user_grid == 3){
			game = make_unique<Tic_Tac_Toe3>();
		}
		else if(user_grid == 4){
			game = make_unique<Tic_Tac_Toe4>();
		}
		game->start_game(first_player);
		cout<<"Player One Please Choose a Spot"<<endl;
		cout<<game.get();
		cout<<"Spot: ";
		cin>>game.get();
		cout<<game.get();

		while(game->game_over() == false)
		{
			if(player_loop_count % 2 == 0)
			{
				cout<<"Player Two Please Choose a Spot"<<endl;
				cout<<"Spot:";
				cin>>game.get();

				cout<<game.get();
			}
			else
			{
				cout<<"Player One Please Choose a Spot"<<endl;
				cout<<"Spot:";
				cin>>game.get();
				cout<<game.get();
			}
			player_loop_count += 1; 			//iterates each loop so the correct cout will corespond to the correct player
		}
		
		manager->save_game(game);
		//cout<<endl<<"GAME OVER!\nWinner: "<<game->get_winner()<<endl;
		//manager->get_winner_total(o,x,t);
		cout<<*manager;
		cout<<"Would you like to play?\nY - Yes\nN - No"<<endl;

		cout<<"Selection: ";
		cin>>user_play_choice;

	}	

	
}