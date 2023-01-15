#pragma once

#include <string>

namespace MachineSpace
{

    class Component
    {
    public:
        Component(std::string &_pn, std::string &_qn, std::string &_desc);
        std::string pn;
        std::string qn;
        std::string desc;
        std::string getStorageString();

    private:
        int saveToNVStorate();
    };

}
