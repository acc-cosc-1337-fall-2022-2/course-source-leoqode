#include "tic_tac_toe.h"
#include <iostream>

std::istream& operator>>(std::istream& in, Tic_Tac_Toe& game){
    Position_Loop:int pos_mark;
    
    std::cin>>pos_mark;

    if (pos_mark!=1 && pos_mark!=2 && pos_mark!=3 && pos_mark!=4 && pos_mark!=5 && pos_mark!=6 && pos_mark!=7 && pos_mark!=8 && pos_mark!=9)
        {
            std::cout<<"\nPlease enter a single digit number between 1 & 9 to play\n";
            goto Position_Loop;
        }
    if ((game.string_pegs[(pos_mark-1)])=="X"||(game.string_pegs[(pos_mark-1)]=="O"))
        {
            std::cout<<"You can't play that position -- someone already did.";
            goto Position_Loop;
        }
    game.mark_board(pos_mark);
    return in;
}


std::ostream& operator<<(ostream& out, const Tic_Tac_Toe& game)
{
    for(int i = 0; i < 3; i++)
    {
    out<<"|"<<game.string_pegs[i]<<"|";
    }
    out<<endl;
    out<<"--|---|--";
    out<<endl;

    for(int i = 3; i < 6; i++)
    {
    out<<"|"<<game.string_pegs[i]<<"|";
    }
    out<<endl;
    out<<"--|---|--";
    out<<endl;


    for(int i = 6; i < 9; i++)
    {
    out<<"|"<<game.string_pegs[i]<<"|";
    }
    out<<endl;
    out<<"--|---|--";
    out<<endl;
    return out;
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
//void Tic_Tac_Toe::clear_marks()
//{
//    marked_past.clear();
//}


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
void Tic_Tac_Toe::mark_board(int pos_mark)
{
    string_pegs[pos_mark-1] = player;
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
//bool Tic_Tac_Toe::check_invalid_mark(int pos_mark){
//    for(int i = 0; i < marked_past.size(); i++){
//        if(pos_mark == marked_past[i])
//        {
//            return true;
//       }
//    }
//    marked_past.push_back(pos_mark);
//    return false;
//
//}