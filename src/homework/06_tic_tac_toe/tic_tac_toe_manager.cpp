#include "tic_tac_toe_manager.h"


void Tic_Tac_Toe_MGR::update_winner_count(string winner){
    if(winner == "C"){
        ties_win += 1;
    }
    else if(winner == "O"){
        o_win += 1;
    }
    else{
        x_win += 1;
    }
}


void Tic_Tac_Toe_MGR::save_game(Tic_Tac_Toe b){
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void Tic_Tac_Toe_MGR::get_winner_total(int& o, int& x,int& t){
    o = o_win;
    x = x_win;
    t = ties_win;
}

std::ostream& operator<<(std::ostream& out, const Tic_Tac_Toe_MGR& manager)
{   
    for(int i = 0; i<9; i++){
        out<<"\n"<<manager.games[i]<<endl;
    }
    return out;
}