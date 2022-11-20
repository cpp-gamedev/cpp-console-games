#pragma once

namespace tic_tac_toe {
enum class CellState {
	eNone,
	eX,
	eO,
	eCOUNT_
};

//constexpr auto cell_state_str_v = EnumArray<CellState, std::string_view>{"   ", " X ", " O "};
} // namespace tic_tac_toe

