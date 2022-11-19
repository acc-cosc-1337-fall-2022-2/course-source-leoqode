
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef TIC_TAC_TOE_h
#define TIC_TAC_TOE_h


class Tic_Tac_Toe{

    public:
        Tic_Tac_Toe() = default;
        Tic_Tac_Toe(int grid) : string_pegs(grid * grid, " "){};

        bool game_over();


        void start_game(string first_player);

        void mark_board(int position);

        string get_player() const {return player;}


        string get_winner() {return winner;};

        
        friend std::ostream& operator<<(ostream& out, const Tic_Tac_Toe *game);
        
        friend std::istream& operator>>(istream& in, Tic_Tac_Toe *game);

        

    private:
    
        bool check_board_full();


        void set_next_player();

        void clear_board();

        //void clear_marks();
        
        string player;

        void set_winner();

        string winner;



    protected:

        vector<string> string_pegs;

        virtual bool check_coloumn_win() = 0;

        virtual bool check_row_win() = 0;

        virtual bool check_diagonal_win()= 0;        




};
#endif // ending the definition of tic tac toe