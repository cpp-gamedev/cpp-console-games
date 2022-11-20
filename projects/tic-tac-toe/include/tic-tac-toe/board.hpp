#pragma once

#include <array>
#include <cg/util/enum_array.hpp>
#include <tic-tac-toe/cell_state.hpp>
#include <tic-tac-toe/player.hpp>

namespace tic_tac_toe {
class Board {
  public:
	using Row = std::array<CellState, 3>;
	using Table = std::array<Row, 3>;

	[[nodiscard]] Table get_board() const { return m_table; }

	bool place_piece(int x, int y, const Player &player);
	bool check_for_winner();

// Debugging methods - delete later
	void d_set_board(const Table bd) { m_table = bd; }

  private:
	Table m_table{};
	bool valid_placement(int x, int y);

};
} // namespace tic_tac_toe
