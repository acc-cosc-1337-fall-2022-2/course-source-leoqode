
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef TIC_TAC_TOE_h
#define TIC_TAC_TOE_h


class Tic_Tac_Toe{

    public:

        

        
        bool game_over();


        void start_game(string first_player);

        void mark_board(int position);

        string get_player() const {return player;}

        void display_board() const;

        string get_winner() {return winner;};

        bool check_invalid_mark(int position);


    private:
    
        bool check_board_full();


        void set_next_player();

        void clear_board();

        void clear_marks();
        
        string player;

        vector<string> string_pegs = {" "," "," "," "," "," "," "," "," "};

        vector<int> marked_past = {};

        bool check_coloumn_win();

        bool check_row_win();

        bool check_diagonal_win();

        void set_winner();

        string winner;

        

};

#endif // ending the definition of tic tac toe 