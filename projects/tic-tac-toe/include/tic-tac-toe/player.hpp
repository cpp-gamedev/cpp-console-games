#pragma once
#include <tic-tac-toe/player_number.hpp>
#include <tic-tac-toe/cell_state.hpp>

namespace tic_tac_toe {
 class Player {
   public:
	 Player(tic_tac_toe::PlayerNumber player_number, tic_tac_toe::CellState cell_state)
		 : m_player_number(player_number), m_cell_state(cell_state) {}

	 void set_player_piece(tic_tac_toe::CellState cell_state) { m_cell_state = cell_state; }
	 tic_tac_toe::PlayerNumber get_player_number() const { return m_player_number; }
	 tic_tac_toe::CellState get_player_piece() const { return m_cell_state; }

   private:
	 bool m_piece_set = false;
	 tic_tac_toe::PlayerNumber m_player_number {};
	 tic_tac_toe::CellState m_cell_state {};
 };
 } // namespace tic_tac_toe
