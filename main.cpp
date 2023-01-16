#include "MachineManager.hpp"
#include "Component.hpp"

#include <iostream>
#include <vector>

#define PROJECT_NAME "emm"

int main(int argc, char **argv)
{
    printf("This is project %s.\n", PROJECT_NAME);
    if (0)
    {
        argc = argc;
        argv = argv;
    }

    std::vector<MachineSpace::Component> components;

    for (int i = 0; i < 10; i++)
    {
        components.push_back(MachineSpace::Component(std::string("Comp_0123"), std::to_string(i), std::string("A simple component.")));
    }

    return 0;
}
