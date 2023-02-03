#pragma once

#include <string>
#include <vector>

namespace MaterialManagerSpace
{

    class Machine
    {
    public:
        Machine(int _id, std::string _description);
        int id;
        std::string description;
        std::vector<std::string> components;

        void addComponent(uint64_t id);
        void removeComponent(uint64_t id);
    };

}
