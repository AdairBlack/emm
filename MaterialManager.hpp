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

    private:
        MaterialManager() { std::cout << "Construct a MaterialManager singleton." << std::endl; };
        ~MaterialManager(){};
        MaterialManager(const MaterialManager &);
        MaterialManager &operator=(const MaterialManager &);

        std::vector<Component> components;
        std::vector<Machine> machines;
    };

}
