//
// Created by Ian on 11/19/2022.
//

#include <tic-tac-toe/console_output_display.hpp>
#include <iostream>
#include <array>

namespace tic_tac_toe {
void consoleOutputDisplay::display_game_board(const Table & game_board, const cg::EnumArray<CellState, std::string_view> & c_state_str_v) {
	for (auto& row : game_board) {
        for (auto& cell : row) {
            if (&cell != &row.back()) std::cout << c_state_str_v[cell] << "|";
            else
                std::cout << c_state_str_v[cell] << std::endl;
        }
		(&row != &game_board.back() ? std::cout << "-----------" : std::cout) << std::endl;
	}
}
} // namespace tic_tac_toe
