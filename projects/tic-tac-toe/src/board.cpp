
#include <tic-tac-toe/board.hpp>
#include <iostream>

namespace tic_tac_toe {


bool Board::place_piece(const int x, const int y, const Player &player) {
	if (valid_placement(x, y)) {
        m_table[x][y] = player.get_player_piece();
        return true;
    }

	return false;
}
bool Board::valid_placement(const int x, const int y) {
    // check if x and y are within the bounds of the board
	if (x >= 0 && x < 3 && y >= 0 && y < 3)
	    if (m_table[x][y] == CellState::eNone)
            return true;
    return false;
}

bool Board::check_for_winner() { return false; }



} // namespace tic_tac_toe
