# C++ Expense Tracker

A simple command-line expense tracker built while learning C++. Add expenses, review them, and see their total.

## Features

- Add an expense with a description and amount.
- View all expenses entered during the current run.
- See the total of those expenses.
- Uses only the C++ standard library; no external dependencies.

> Expenses are currently kept in memory, so they are cleared when the program exits. Saving them between runs is planned as a future feature.

## Requirements

- A C++17-compatible compiler, such as `g++`.
- A terminal.

## Build and run

Clone the repository and enter its directory:

```bash
git clone https://github.com/OpenAst/cpp-expense-tracker.git
cd cpp-expense-tracker
```

Compile the program:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o expense-tracker
```

Run it:

```bash
./expense-tracker
```

## How to use

Choose an option from the menu:

1. Add an expense by entering a description and amount.
2. View the expenses entered so far and their total.
3. Exit the program.

## What I’m learning

This project is a hands-on way to practice C++ structs, vectors, loops, conditionals, and console input and output.
