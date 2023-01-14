#pragma once

#include <string>
#include <vector>

namespace MachineSpace
{

    class Machine
    {
    public:
        Machine(int _id, std::string _description);
        int id;
        std::string description;
        std::vector<std::string> components;

        void addComponent(std::string &componentName);
        void removeComponent(std::string &componentName);
    };

}
