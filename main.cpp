#include "MaterialManager.hpp"
#include "Component.hpp"
#include "ControlPanel.hpp"

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

    std::vector<MaterialManagerSpace::Component> components;

    for (int i = 0; i < 10; i++)
    {
        components.push_back(MaterialManagerSpace::Component(std::string("Comp_0123"), std::to_string(i), std::string("A simple component.")));
    }

    auto &materialManager = MaterialManagerSpace::MaterialManager::getInstance();

    materialManager.addComponent(components[0]);

    auto &controlPanel = ControlPanelSpace::ControlPanel::getInstance();

    std::cout << "Thanks for using." << std::endl;

    return 0;
}
