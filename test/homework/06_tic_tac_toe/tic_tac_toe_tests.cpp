#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Tie Output Is As Expected"){
	Tic_Tac_Toe game;
	game.start_game("X");
	REQUIRE(game.get_player()=="X");
}
TEST_CASE("Verify player value is as expected O")
{
	Tic_Tac_Toe game;
	game.start_game("O");
	REQUIRE(game.get_player()=="O");
}
TEST_CASE("Verify game_over and validate winner in a tie")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(5);
	game.mark_board(8);
	game.mark_board(4);
	game.mark_board(7);
	game.mark_board(9);
	game.game_over();
	REQUIRE(game.get_winner()=="C");
}
TEST_CASE("Verifying win by column")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(3);
	game.mark_board(7);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by second column")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(8);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by third column")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(3);
	game.mark_board(1);
	game.mark_board(6);
	game.mark_board(2);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by first row")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(8);
	game.mark_board(3);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by second row")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(4);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(6);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by third row")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(2);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by diagonal from top left")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(9);
	REQUIRE(game.game_over()==true);
}
TEST_CASE("Verifying win by diagonal win from bottom left")
{
	Tic_Tac_Toe game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(3);
	REQUIRE(game.game_over()==true);
}

TEST_CASE("Verify if program correctly detects if a player is choosing to play a position already played"){
	Tic_Tac_Toe game;
	game.start_game("X");
	REQUIRE(game.check_invalid_mark(1)== false);
	game.mark_board(1);
	REQUIRE(game.check_invalid_mark(1)== true);
	REQUIRE(game.check_invalid_mark(2)== false);
	game.mark_board(2);
	REQUIRE(game.check_invalid_mark(2)== true);
}



