#include <iostream>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

#ifndef TicTT4
#define TicTT4

class Tic_Tac_Toe4: public Tic_Tac_Toe{
    public:
        Tic_Tac_Toe4() : Tic_Tac_Toe(4){};


    private:
        

        bool check_coloumn_win();

        bool check_row_win();

        bool check_diagonal_win();

};

#endif