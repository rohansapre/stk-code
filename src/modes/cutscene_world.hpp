//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2004 SuperTuxKart-Team
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

#ifndef CUTSCENE_WORLD_HPP
#define CUTSCENE_WORLD_HPP

#include "modes/world_with_rank.hpp"
#include "states_screens/race_gui_base.hpp"

#include <IMesh.h>

#include <string>


/**
 * \brief An implementation of World, to provide animated 3D cutscenes
 * \ingroup modes
 */
class CutsceneWorld : public World
{

public:
    
    CutsceneWorld();
    virtual ~CutsceneWorld();
    
    virtual void init() OVERRIDE;
    
    // clock events
    virtual bool isRaceOver() OVERRIDE;
    virtual void terminateRace() OVERRIDE;
    
    // overriding World methods
    virtual void restartRace() OVERRIDE;

    virtual RaceGUIBase::KartIconDisplayInfo* getKartsDisplayInfo() OVERRIDE;
    virtual bool raceHasLaps() OVERRIDE { return false; }
    virtual void moveKartAfterRescue(AbstractKart* kart) OVERRIDE;
    
    virtual const std::string& getIdent() const OVERRIDE;
    
    virtual void kartHit(const int kart_id) OVERRIDE;
    virtual void update(float dt) OVERRIDE;

    virtual void createRaceGUI() OVERRIDE
    {
        m_race_gui = NULL;
    }

};   // CutsceneWorld


#endif