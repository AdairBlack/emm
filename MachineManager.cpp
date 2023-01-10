#include "MachineManager.hpp"

#include <iostream>

namespace Machine
{
MachineManager::MachineManager(int _id): id(_id)
{
    std::cout << "Construct a machine. ID:" << id << "." << std::endl;
};

}