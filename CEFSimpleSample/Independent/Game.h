//
// Created by Andreas Hoffmann on 12/10/2014.
// Copyright (c) 2014 Álan Crístoffer. All rights reserved.
//

#include <string>

#ifndef __Game_H_
#define __Game_H_

class Game {
    std::string m_name, m_version;
public:
    Game(std::string name, std::string version);

    std::string GetVersion() { return m_version; }
    std::string GetName() { return m_name; }
};


#endif //__Game_H_
