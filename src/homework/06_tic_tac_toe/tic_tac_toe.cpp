#include "tic_tac_toe.h"
#include <map>

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
void Tic_Tac_Toe::clear_marks()
{
    marked_past.clear();
}


void Tic_Tac_Toe::start_game(string first_player)
{
    player = first_player;
    clear_board();
    clear_marks();
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

bool Tic_Tac_Toe::check_coloumn_win()
{
    if((string_pegs[0] == "X"&& string_pegs[3] == "X"&& string_pegs[6] == "X") || (string_pegs[0] == "O"&& string_pegs[3] == "O"&& string_pegs[6] == "O"))
    {
        return true;
    }
    else if((string_pegs[1] == "X"&& string_pegs[4] == "X"&& string_pegs[7] == "X") || (string_pegs[1] == "O"&& string_pegs[4] == "O"&& string_pegs[7] == "O"))
    {
        return true;
    }
    else if((string_pegs[2] == "X"&& string_pegs[5] == "X"&& string_pegs[8] == "X") || (string_pegs[2] == "O"&& string_pegs[5] == "O"&& string_pegs[8] == "O"))
    {
        return true;
    }
    return false;
}
bool Tic_Tac_Toe::check_row_win()
{
    if((string_pegs[0] == "X"&& string_pegs[1] == "X"&& string_pegs[2] == "X") || (string_pegs[0] == "O"&& string_pegs[1] == "O"&& string_pegs[2] == "O"))
    {
        return true;
    }
    else if((string_pegs[3] == "X"&& string_pegs[4] == "X"&& string_pegs[5] == "X") || (string_pegs[3] == "O"&& string_pegs[4] == "O"&& string_pegs[5] == "O"))
    {
        return true;
    }
    else if((string_pegs[6] == "X"&& string_pegs[7] == "X"&& string_pegs[8] == "X")|| (string_pegs[6] == "O"&& string_pegs[7] == "O"&& string_pegs[8] == "O"))
    {
        return true;
    }
    return false;
}
bool Tic_Tac_Toe::check_diagonal_win()
{
    if((string_pegs[0] == "X"&& string_pegs[4] == "X"&& string_pegs[8] == "X")|| (string_pegs[0] == "O"&& string_pegs[4] == "O"&& string_pegs[8] == "O"))
    {
        return true;
    }
    else if((string_pegs[6] == "X"&& string_pegs[4] == "X"&& string_pegs[2] == "X")|| (string_pegs[6] == "O"&& string_pegs[4] == "O"&& string_pegs[2] == "O"))
    {
        return true;
    }
    return false;
}
void Tic_Tac_Toe::set_winner()
{
    if(player == "X"){
        winner = "O";
    }
    else if(player == "O"){
        winner = "X";
    }
}
bool Tic_Tac_Toe::game_over()
{
    if(check_row_win() == true||check_coloumn_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else{
        return false;
    }
    
}
bool Tic_Tac_Toe::check_invalid_mark(int position){
    for(int i = 0; i < marked_past.size(); i++){
        if(position == marked_past[i])
        {
            return true;
        }
    }
    marked_past.push_back(position);
    return false;

}