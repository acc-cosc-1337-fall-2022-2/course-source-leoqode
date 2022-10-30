#include "tic_tac_toe.h"


void Tic_Tac_Toe::display_board()const
{
    for(int i = 0; i < 3; i++)
    {
    cout<<"|"<<string_pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"--|---|--";
    cout<<endl;

    for(int i = 3; i < 6; i++)
    {
    cout<<"|"<<string_pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"--|---|--";
    cout<<endl;


    for(int i = 6; i < 9; i++)
    {
    cout<<"|"<<string_pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"--|---|--";
    cout<<endl;
}


bool Tic_Tac_Toe::check_board_full()
{
    bool isFull = true;
    for(int i = 0; i < 9; i++)
    {
        if(string_pegs[i] == " ")
        {
            isFull = false;
        }
    }
    return isFull;
}

void Tic_Tac_Toe::clear_board()
{
    for(int i = 0; i < 9; i++)
    {
        string_pegs[i] = " ";
    }
}
void Tic_Tac_Toe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
void Tic_Tac_Toe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else if(player == "O")
    {
        player = "X";
    }
}
void Tic_Tac_Toe::mark_board(int position)
{
    string_pegs[position-1] = player;
    set_next_player();
}
