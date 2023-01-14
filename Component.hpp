#pragma once

#include <string>
#include <vector>

namespace MachineSpace
{

    class Component
    {
    public:
        Component(std::string &_pn, std::string &_qn, std::string &_desc);
        std::string pn;
        std::string qn;
        std::string desc;

    private:
        int saveToNVStorate();
    };

}
