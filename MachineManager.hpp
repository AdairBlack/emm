#pragma once

#include "Machine.hpp"

namespace MachineSpace
{

class MachineManager
{
    public:
        MachineManager(int _id);
        int id;
    
    private:
        std::vector<Machine> machines;
};

}

