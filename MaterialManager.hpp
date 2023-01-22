#pragma once

#include "Machine.hpp"
#include "Component.hpp"

#include <vector>
#include <iostream>

namespace MaterialManagerSpace
{

    class MaterialManager
    {
    public:
        static MaterialManager &getInstance();
        void addComponent(Component component);
        void removeComponent(uint64_t id);

    private:
        MaterialManager() { std::cout << "Construct a MaterialManager singleton." << std::endl; };
        ~MaterialManager(){};
        MaterialManager(const MaterialManager &);
        MaterialManager &operator=(const MaterialManager &);

        std::vector<Component> components;
        std::vector<Machine> machines;
    };

}
