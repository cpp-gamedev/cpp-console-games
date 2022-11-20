#pragma once

namespace tic_tac_toe {
enum class CellState {
	eNone,
	eX,
	eO,
	eCount_
};

constexpr auto cell_state_str = EnumArray<CellState, std::string_view>{"   ", " X ", " O "};
} // namespace tic_tac_toe

