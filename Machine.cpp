#include "Machine.hpp"

#include <algorithm>
#include <iostream>

namespace MachineSpace
{

    Machine::Machine(int _id, std::string _description) : id(_id), description(_description)
    {
        std::cout << "construct a Machine, id: " << id << ",description: " << description << std::endl;
        return;
    }

    void Machine::addComponent(std::string &componentName)
    {
        components.push_back(std::move(componentName));

        return;
    }

    void Machine::removeComponent(std::string &componentName)
    {
        components.erase(std::find(components.begin(), components.end(), componentName));
        return;
    }

}
