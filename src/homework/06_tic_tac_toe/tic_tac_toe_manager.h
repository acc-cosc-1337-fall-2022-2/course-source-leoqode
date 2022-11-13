
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::cout;
using std::cin;
using std::string;

#ifndef Manager
#define Manager


class Tic_Tac_Toe_MGR{

    
    public:

        void save_game(Tic_Tac_Toe);

        void get_winner_total(int& o, int& x,int& t);
        
        friend ostream& operator<<(ostream& out, const Tic_Tac_Toe_MGR& manager);
        
        

    private:

        vector<Tic_Tac_Toe> games; 

        void update_winner_count(string winner);

        int x_win = 0;
        int o_win = 0;
        int ties_win = 0;

};

#endif