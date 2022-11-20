#include <iostream>
#include <tic-tac-toe/board.hpp>
#include <tic-tac-toe/cell_state.hpp>


namespace tic_tac_toe {

Board::Table Board::get_board() const { return m_table; }


void Board::d_print_board() {

	d_print_current_state();
    //std::cout << cell_state_str_v[m_table[0][0]] << cell_state_str_v[m_table[1][0]] << cell_state_str_v[m_table[2][0]] << std::endl;
}

void Board::d_print_current_state() {
	for (auto& row : m_table) {
		for (auto& cell : row) {
			//std::cout << cell_state_str_v[cell];
		}
		std::cout << std::endl;
	}
}

void Board::d_generate_board() {
	for (auto& row : m_table) {
		for (auto& cell :row) {
			cell = CellState::eX;
		}
	}
}


} // namespace tic_tac_toe
