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

    auto &materialManager = MaterialManagerSpace::MaterialManager::getInstance();

    for (int i = 0; i < 14; i++)
    {
        materialManager.addComponent("CompPN0", "QNsdfjksf123", "A simple component.");
    }

    auto &controlPanel = ControlPanelSpace::ControlPanel::getInstance();

    std::cout << "Thanks for using." << std::endl;

    return 0;
}
