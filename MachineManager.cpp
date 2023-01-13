#include "MachineManager.hpp"

#include <iostream>

namespace MachineSpace
{
    
MachineManager::MachineManager(int _id): id(_id)
{
    std::cout << "Construct a machine. ID:" << id << "." << std::endl;
};

}