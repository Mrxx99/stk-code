//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2018 SuperTuxKart-Team
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_NETWORK_AI_CONTROLLER_HPP
#define HEADER_NETWORK_AI_CONTROLLER_HPP

#include "karts/controller/player_controller.hpp"

class AbstractKart;
class AIBaseController;

class NetworkAIController : public PlayerController
{
private:
    int m_prev_update_ticks;
    AIBaseController* m_ai_controller;
    KartControl* m_ai_controls;
    void convertAIToPlayerActions();
public:
                 NetworkAIController(AbstractKart *kart, int local_player_id,
                                     AIBaseController* ai);
    virtual     ~NetworkAIController();
    virtual void update(int ticks) OVERRIDE;
    virtual void reset() OVERRIDE;
};   // class NetworkAIController

#endif // HEADER_PLAYER_CONTROLLER_HPP
