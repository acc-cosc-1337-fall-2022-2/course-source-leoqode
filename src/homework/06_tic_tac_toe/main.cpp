#include "tic_tac_toe.h"



int main() 
{
	char user_continue;

	int pos_mark;
	string f_player;
	int i = 0;
	do
	{
	cout<<"HELLO WELCOME TO TIC TAC TOE!\n"<<endl;
	Tic_Tac_Toe game;
	cout<<"FIRST PLAYER SELECT\nX OR O"<<endl;
	cout<<"User selection: ";
	cin>>f_player;
	cout<<endl;
	game.start_game(f_player);
	cout<<"PLAYER 1 PLEASE SELECT YOUR POSITION 1 - 9"<<endl;
	cout<<"|1||2||3|\n--|---|--\n|4||5||6|\n--|---|--\n|7||8||9|\n--|---|--"<<endl;
	cout<<"Position selection: ";
	cin>>pos_mark;
	game.mark_board(pos_mark);
	i += 2;
	game.display_board();

		while(game.game_over() != true)
		{

			if(i % 2 == 0)
			{
			cout<<"PLAYER 2 PLEASE SELECT YOUR POSITION 1 - 9"<<endl;
			cout<<"Position selection: ";
			cin>>pos_mark;
			game.mark_board(pos_mark);
			game.display_board();
			}
			else
			{
			cout<<"PLAYER 1 PLEASE SELECT YOUR POSITION 1 - 9"<<endl;
			cout<<"Position selection: ";
			cin>>pos_mark;
			game.mark_board(pos_mark);
			game.display_board();
			
			}
			i +=1;


		}
		cout<<"GAME OVER!"<<endl;
		cout<<"Would you like to play again?"<<endl<<"Y - Yes\nN - No\n\nContinue? : ";

		cin>>user_continue;
	}while(toupper(user_continue) != 'N');
	
	

	
}