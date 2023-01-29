#include "ControlPanel.hpp"

namespace ControlPanelSpace
{
    ControlPanel &ControlPanel::getInstance()
    {
        static ControlPanel instance;
        return instance;
    }

    void ControlPanel::showMainMenu()
    {
        std::cout << "*********************************************" << std::endl;
        std::cout << "****      Edgar  Material Management     ****" << std::endl;
        std::cout << "*********************************************" << std::endl;
        std::cout << "****       1. show all the components    ****" << std::endl;
        std::cout << "****       2. add a component            ****" << std::endl;
        std::cout << "****       3. remove a component         ****" << std::endl;
        std::cout << "*********************************************" << std::endl;

        int input = 0;
        std::cin >> input;
        std::cout << "Input(number): " << input << std::endl;
    }
} // namespace ControlPanelSpace