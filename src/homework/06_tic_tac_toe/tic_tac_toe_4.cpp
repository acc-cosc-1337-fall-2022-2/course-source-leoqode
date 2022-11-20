#include "tic_tac_toe_4.h"

bool Tic_Tac_Toe4::check_coloumn_win()
{
    if((string_pegs[0] == "X"&& string_pegs[4] == "X"&& string_pegs[8] == "X"&& string_pegs[12] == "X") || (string_pegs[0] == "O"&& string_pegs[4] == "O"&& string_pegs[8] == "O"&& string_pegs[12] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[3] == "X"&& string_pegs[7] == "X"&& string_pegs[11] == "X"&& string_pegs[15] == "X") || (string_pegs[3] == "O"&& string_pegs[7] == "O"&& string_pegs[11] == "O"&& string_pegs[15] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[1] == "X"&& string_pegs[5] == "X"&& string_pegs[9] == "X"&& string_pegs[13] == "X") || (string_pegs[1] == "O"&& string_pegs[5] == "O"&& string_pegs[9] == "O"&& string_pegs[13] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[2] == "X"&& string_pegs[6] == "X"&& string_pegs[10] == "X"&& string_pegs[14] == "X") || (string_pegs[2] == "O"&& string_pegs[6] == "O"&& string_pegs[10] == "O"&& string_pegs[14] == "O"))
    {
        return true;
        game_over();
    }
    else{
        return false;
    }
}

bool Tic_Tac_Toe4::check_row_win()
{
    if((string_pegs[0] == "X"&& string_pegs[1] == "X"&& string_pegs[2] == "X"&& string_pegs[3] == "X") || (string_pegs[0] == "O"&& string_pegs[1] == "O"&& string_pegs[2] == "O"&& string_pegs[3] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[4] == "X"&& string_pegs[5] == "X"&& string_pegs[6] == "X"&& string_pegs[7] == "X") || (string_pegs[4] == "O"&& string_pegs[5] == "O"&& string_pegs[6] == "O"&& string_pegs[7] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[8] == "X"&& string_pegs[9] == "X"&& string_pegs[10] == "X"&& string_pegs[11] == "X") || (string_pegs[8] == "O"&& string_pegs[9] == "O"&& string_pegs[10] == "O"&& string_pegs[11] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[12] == "X"&& string_pegs[13] == "X"&& string_pegs[14] == "X"&& string_pegs[15] == "X") || (string_pegs[12] == "O"&& string_pegs[13] == "O"&& string_pegs[14] == "O"&& string_pegs[15] == "O"))
    {
        return true;
        game_over();
    }
    return false;
}

bool Tic_Tac_Toe4::check_diagonal_win()
{
    if((string_pegs[0] == "X"&& string_pegs[5] == "X"&& string_pegs[10] == "X"&& string_pegs[15] == "X") || (string_pegs[0] == "O"&& string_pegs[5] == "O"&& string_pegs[10] == "O"&& string_pegs[15] == "O"))
    {
        return true;
        game_over();
    }
    else if((string_pegs[3] == "X"&& string_pegs[6] == "X"&& string_pegs[9] == "X"&& string_pegs[12] == "X") || (string_pegs[3] == "O"&& string_pegs[6] == "O"&& string_pegs[9] == "O"&& string_pegs[12] == "O"))
    {
        return true;
        game_over();
    }
    return false;
}
