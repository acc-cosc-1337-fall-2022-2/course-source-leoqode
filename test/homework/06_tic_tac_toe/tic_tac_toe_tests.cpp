#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Vefify game ends when board is full"){
	Tic_Tac_Toe game1;
	game1.start_game("X");
	game1.mark_board(1);

	REQUIRE(game1.game_over() == false);
	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(3);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(6);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(7);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(8);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(9);
	REQUIRE(game1.game_over() == true);


}