#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify player value is as expected X"){
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	REQUIRE(game->get_player()=="X");
}
TEST_CASE("Verify player value is as expected O")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("O");
	REQUIRE(game->get_player()=="O");
}
TEST_CASE("Verify game_over and validate winner in a tie")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	game->game_over();
	REQUIRE(game->get_winner()=="C");
}
TEST_CASE("Verifying win by column")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by second column")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by third column")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by first row")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by second row")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by third row")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by diagonal from top left")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by diagonal win from bottom left")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	
	REQUIRE(game->game_over()==true);
}

/*TEST_CASE("Verify if program correctly detects if a player is choosing to play a position already played"){
	Tic_Tac_Toe game;
	game->start_game("X");
	REQUIRE(game->check_invalid_mark(1)== false);
	game->mark_board(1);
	REQUIRE(game->check_invalid_mark(1)== true);
	REQUIRE(game->check_invalid_mark(2)== false);
	game->mark_board(2);
	REQUIRE(game->check_invalid_mark(2)== true);
}*/

TEST_CASE("HOMEWORK 8 ~ Verify winner, get_winner_total tally correctly"){
	unique_ptr<Tic_Tac_Toe_MGR> manager= make_unique<Tic_Tac_Toe_MGR>();
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
	manager->save_game(game);
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
	manager->save_game(game);
	game = make_unique<Tic_Tac_Toe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
	manager->save_game(game);
	
	int o;
	int x;
	int t;
	manager->get_winner_total(o,x,t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}






//
//
//
//
//
//THIS IS START OF TIC TAC TOE 4x4 BOARD VALIDATION 
//
//HOMEWORK 9
//
//11/19/2022
//
//
//
//
//
TEST_CASE("Verify game_over and validate winner in a tie -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	

	game->game_over();
	REQUIRE(game->get_winner()=="C");
}
TEST_CASE("Verifying win by column -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by second column -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by third column -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Veryfing win by fourth coloumn -4X4"){
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by first row -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by second row -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by third row -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);


	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by fourth row -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);


	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by diagonal win from bottom left -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verifying win by diagonal win from bottom right -4X4")
{
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(16);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	
	REQUIRE(game->game_over()==true);
}

/*TEST_CASE("Verify if program correctly detects if a player is choosing to play a position already played"){
	Tic_Tac_Toe game;
	game->start_game("X");
	REQUIRE(game->check_invalid_mark(1)== false);
	game->mark_board(1);
	REQUIRE(game->check_invalid_mark(1)== true);
	REQUIRE(game->check_invalid_mark(2)== false);
	game->mark_board(2);
	REQUIRE(game->check_invalid_mark(2)== true);
}*/

TEST_CASE("HOMEWORK 9 ~ Verify winner, get_winner_total tally correctly -4X4"){
	unique_ptr<Tic_Tac_Toe_MGR> manager= make_unique<Tic_Tac_Toe_MGR>();
	unique_ptr<Tic_Tac_Toe> game;
	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
	manager->save_game(game);



	game = make_unique<Tic_Tac_Toe4>();
	game->start_game("O");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
	manager->save_game(game);
	
	
	game = make_unique<Tic_Tac_Toe4>();
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
	manager->save_game(game);
	
	int o;
	int x;
	int t;
	manager->get_winner_total(o,x,t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}