#pragma once

#include "Component.hpp"

#include <string>
#include <vector>

namespace MachineSpace
{

    Component::Component(std::string &_pn, std::string &_qn, std::string &_desc) : pn(std::move(_pn)), qn(std::move(_qn)), desc(std::move(_desc))
    {

        return;
    }

    int Component::saveToNVStorate()
    {
        if
    }

}
