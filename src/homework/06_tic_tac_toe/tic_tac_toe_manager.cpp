#include "tic_tac_toe_manager.h"
#include <memory>

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


void Tic_Tac_Toe_MGR::save_game(unique_ptr<Tic_Tac_Toe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(move(b));

}
void Tic_Tac_Toe_MGR::get_winner_total(int& o, int& x,int& t){
    o = o_win;
    x = x_win;
    t = ties_win;
}

std::ostream& operator<<(std::ostream& out, const Tic_Tac_Toe_MGR& manager){
for (auto &game : manager.games )//&game?
	{
        out << "\n";
        out << game.get();
        std::string w = game->get_winner();//what is get() why its used?
        out << "\nThe winner is:  " << w << "\n";

    }
    out << "\n";
    out << "X has won   " <<manager.x_win << " times" << "\n";
    out << "O has won   " << manager.o_win << " times" << "\n";
    out << "Ties: " << manager.ties_win << "\n";


	
	return out;
    }