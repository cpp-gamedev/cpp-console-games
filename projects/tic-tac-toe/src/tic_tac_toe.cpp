#include <iostream>
#include <tic-tac-toe/board.hpp>
#include <tic-tac-toe/console_output_display.hpp>
#include <tic-tac-toe/cell_state.hpp>

int main() {
	// Main currently is being used for testing purposes
	// Once base logic is complete, main will be used to run the game
	constexpr auto cell_state_str_v = cg::EnumArray<tic_tac_toe::CellState, std::string_view>{"   ", " X ", " O "};

	//using Row = std::array<tic_tac_toe::CellState, 3>;
	//using Table = std::array<Row, 3>;
	//Table game_board{Row{tic_tac_toe::CellState::eX, tic_tac_toe::CellState::eO, tic_tac_toe::CellState::eX},
                     //Row{tic_tac_toe::CellState::eO, tic_tac_toe::CellState::eNone, tic_tac_toe::CellState::eO},
                     //Row{tic_tac_toe::CellState::eX, tic_tac_toe::CellState::eO, tic_tac_toe::CellState::eX}};

	tic_tac_toe::Board bd{};
	tic_tac_toe::consoleOutputDisplay disp{};
	tic_tac_toe::Player p1{tic_tac_toe::PlayerNumber::ePlayer1, tic_tac_toe::CellState::eX};
	tic_tac_toe::Player p2{tic_tac_toe::PlayerNumber::ePlayer2, tic_tac_toe::CellState::eO};

	//b.d_set_board(game_board);

	//b.d_generate_board();
	//b.print_board();

	disp.display_game_board(bd.get_board(), cell_state_str_v);

	bd.place_piece(0, 0, p1);
	bd.place_piece(1, 1, p2);

	disp.display_game_board(bd.get_board(), cell_state_str_v);



	//std::cout << "tic";

	return 0;
};
