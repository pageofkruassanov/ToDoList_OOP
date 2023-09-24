#pragma once
#include "TaskManager.h"
#include <functional>

// started:
class Menu {
private:
    std::vector<std::string> menuItems;
public:
    void addMenuItem(const std::string& name) {
        menuItems.push_back({ name });
    }

    void showMenu() {
        int choice;
        do {
            std::cout << "Menu:\n";
            int index = 0;
            for (const auto& menuItem : menuItems) {
                std::cout << index << ". " << menuItem[index] << '\n';
                ++index;
            }
            std::cout << "Choose an option: ";
            std::cin >> choice;
            system("cls");
        } while (choice != 0);
    }
};

