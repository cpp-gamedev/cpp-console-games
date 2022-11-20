//
// Created by Ian on 11/19/2022.
//

#pragma once
#include <memory>
#include <string>
#include <vector>
#include "cell_state.hpp"
#include <cg/util/enum_array.hpp>

namespace tic_tac_toe {
class consoleOutputDisplay {
  public:
	using Row = std::array<CellState, 3>;
	using Table = std::array<Row, 3>;

	void display_game_board(const Table & game_board, const cg::EnumArray<CellState, std::string_view> & c_state_str_v) ;


};
}
