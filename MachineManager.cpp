#include "MachineManager.hpp"

#include <iostream>

namespace MachineSpace
{

    MachineManager::MachineManager(int _id) : id(_id)
    {
        std::cout << "Construct a machine manager. ID:" << id << "." << std::endl;
    };

}