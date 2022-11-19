#include <iostream>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

#ifndef TicTT3
#define TicTT3


class Tic_Tac_Toe3: public Tic_Tac_Toe{
    public:
    Tic_Tac_Toe3() : Tic_Tac_Toe(3){};

    private:

    bool check_coloumn_win();
    bool check_row_win();
    bool check_diagonal_win();

};


#endif