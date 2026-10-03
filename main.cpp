#include <iostream>
#include <string>

struct Expense {
  int amount;
  std::string description;
  std::string category;
};



int main() {
  Expense expense;
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
      
    
      std::cout << "Enter amount: ";
      std::cin >> expense.amount;

      std::cout << "Enter description: ";
      std::cin.ignore(); // Clear the newline character from the input buffer
      std::getline(std::cin, expense.description);

      std::cout << "Enter category: \n";
      std::cin >> expense.category;
     
    } else if (choice == 2) {
      std::cout << "Showing expenses...\n";
      std::cout << "Amount: " << expense.amount << "\n";
      std::cout << "Description: " << expense.description << "\n";
      std::cout << "Category: " << expense.category << "\n";
    } else if (choice == 3) {
      std::cout << "Goodbye\n";
    } else {
      std::cout << "Please choose 1, 2, 3.\n";
    }

  }
  return 0;
}