#include <iostream>

int main() {
  int choice = 0;

  while (choice != 3) {
    std::cout << "\n== Expense Tracker === \n";
    std::cout << "1. Add expense\n";
    std::cout << "2. View expenses\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose an option: ";

    std::cin >> choice;

    if (choice == 1) {
      std::cout << "Adding an expense...\n";
    } else if (choice == 2) {
      std::cout << "Showing expenses...\n";
    } else if (choice == 3) {
      std::cout << "Goodbye\n";
    } else {
      std::cout << "Please choose 1, 2, 3.\n";
    }

  }
  return 0;
}