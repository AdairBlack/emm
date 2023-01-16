#pragma once

#include "Machine.hpp"

namespace MachineSpace
{

    class MachineManager
    {
    public:
        static MachineManager &getInstance()
        {
            static MachineManager instance;
            return instance;
        }

    private:
        MachineManager(){};
        ~MachineManager(){};
        MachineManager(const MachineManager &);
        MachineManager &operator=(const MachineManager &);
    };

}
