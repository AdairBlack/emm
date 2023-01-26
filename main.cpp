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
        materialManager.addComponent("CompPN" + std::to_string(i), "QNsdfjksf123_" + std::to_string(i), "A simple component number" + std::to_string(i) + ".");
    }

    auto &controlPanel = ControlPanelSpace::ControlPanel::getInstance();
    controlPanel.showMainMenu();

    std::cout << "Thanks for using." << std::endl;

    return 0;
}
