#pragma once

#include "Machine.hpp"

namespace MachineSpace
{

    class MachineManager
    {
    public:
        MachineManager(int _id);
        int id;

        void addMachine(int id);
        void removeMachine(int id);

    private:
        std::vector<Machine> machines;
    };

}
