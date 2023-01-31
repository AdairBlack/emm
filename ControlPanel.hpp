#pragma once

#include <iostream>

namespace ControlPanelSpace
{
    class ControlPanel
    {
    public:
        static ControlPanel &getInstance();

        void showMainMenu();
        void showAllTheComponents();

    private:
        ControlPanel() { std::cout << "Construct a ControlPanel singleton." << std::endl; };
        ~ControlPanel(){};
        ControlPanel(const ControlPanel &);
        ControlPanel &operator=(const ControlPanel &);
    };
}