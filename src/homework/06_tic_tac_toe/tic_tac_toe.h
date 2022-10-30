
#include <iostream>
#include <vector>
using namespace std;

#ifndef TIC_TAC_TOE_h
#define TIC_TAC_TOE_h


class Tic_Tac_Toe{

    public:

        

        
        bool game_over(){return check_board_full();}


        void start_game(string first_player);

        void mark_board(int position);

        string get_player() const ;

        void display_board() const;

        




    private:
        bool check_board_full();


        void set_next_player();

        void clear_board();
        
        string player;

        vector<string> string_pegs = {" "," "," "," "," "," "," "," "," "};

        

};

#endif // ending the definition of tic tac toe 