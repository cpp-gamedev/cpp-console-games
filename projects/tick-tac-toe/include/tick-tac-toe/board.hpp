#pragma once

#include <array>
#include <tick-tac-toe/cell_state.hpp>
#include <cg/util/enum_array.hpp>

namespace tic_tac_toe {
class Board {
  public:
	using Row = std::array<CellState, 3>;
	using Table = std::array<Row, 3>;

	void print_board();

  private:
	Table m_table{};

};
} // namespace tic_tac_toe
