#pragma once

#include <array>
#include <tic-tac-toe/cell_state.hpp>
#include <cg/util/enum_array.hpp>

namespace tic_tac_toe {
class Board {
  public:
	using Row = std::array<CellState, 3>;
	using Table = std::array<Row, 3>;

	[[nodiscard]] Table get_board() const;

// Debugging methods - delete later
	void d_print_board();
	void d_print_current_state();
	void d_generate_board();
	void d_set_board(const Table bd) { m_table = bd; }

  private:
	Table m_table{};

};
} // namespace tic_tac_toe
