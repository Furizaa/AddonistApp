//
// Created by Andreas Hoffmann on 12/10/2014.
// Copyright (c) 2014 Álan Crístoffer. All rights reserved.
//

#include "WowGame.h"

WowGame::WowGame()
{

}


Game* WowGame::find() {
#ifdef __APPLE__
    std::string search[] = {
        "/Volumes"
    };
#endif
#ifdef __MINGW__
    std::string search[] = {
        "C:\"
    };
#endif

    return new Game("World of Warcraft", "5.4.0");
}
