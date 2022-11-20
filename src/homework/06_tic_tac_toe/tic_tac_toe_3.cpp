#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool Tic_Tac_Toe3::check_coloumn_win()
{
if((string_pegs[0] == "X"&& string_pegs[3] == "X"&& string_pegs[6] == "X") || (string_pegs[0] == "O"&& string_pegs[3] == "O"&& string_pegs[6] == "O"))
{
    return true;
    game_over();
}
else if((string_pegs[1] == "X"&& string_pegs[4] == "X"&& string_pegs[7] == "X") || (string_pegs[1] == "O"&& string_pegs[4] == "O"&& string_pegs[7] == "O"))
{
    return true;
    game_over();
}
else if((string_pegs[2] == "X"&& string_pegs[5] == "X"&& string_pegs[8] == "X") || (string_pegs[2] == "O"&& string_pegs[5] == "O"&& string_pegs[8] == "O"))
{
    return true;
    game_over();
}
return false;
}



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool Tic_Tac_Toe3::check_row_win(){
if((string_pegs[0] == "X"&& string_pegs[1] == "X"&& string_pegs[2] == "X") || (string_pegs[0] == "O"&& string_pegs[1] == "O"&& string_pegs[2] == "O"))
{
    return true;
    game_over();
}
else if((string_pegs[3] == "X"&& string_pegs[4] == "X"&& string_pegs[5] == "X") || (string_pegs[3] == "O"&& string_pegs[4] == "O"&& string_pegs[5] == "O"))
{
    return true;
    game_over();
}
else if((string_pegs[6] == "X"&& string_pegs[7] == "X"&& string_pegs[8] == "X")|| (string_pegs[6] == "O"&& string_pegs[7] == "O"&& string_pegs[8] == "O"))
{
    return true;
    game_over();
}
return false;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool Tic_Tac_Toe3::check_diagonal_win(){
if((string_pegs[0] == "X"&& string_pegs[4] == "X"&& string_pegs[8] == "X")|| (string_pegs[0] == "O"&& string_pegs[4] == "O"&& string_pegs[8] == "O"))
{
    return true;
    game_over();
}
else if((string_pegs[6] == "X"&& string_pegs[4] == "X"&& string_pegs[2] == "X")|| (string_pegs[6] == "O"&& string_pegs[4] == "O"&& string_pegs[2] == "O"))
{
    return true;
    game_over();

}
return false;
}