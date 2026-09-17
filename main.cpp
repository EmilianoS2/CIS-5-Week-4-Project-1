#include <iostream>
#include <string>

// Project 1 — Emiliano Sanchez
// CIS 5 Week 04 · Student card

int main()
{
  const int CURRENT_YEAR = 2026;
  std::string name;
  int age;
  double gpa;
  int credits;
  int grad_year = CURRENT_YEAR + 4;

  std::cout << "What is your name? ";
  std::cin >> name;
  std::cout << "How old are you? ";
  std::cin >> age;
  std::cout << "What is your GPA? ";
  std::cin >> gpa;
  std::cout << "How many credits are you taking this term? ";
  std::cin >> credits;
  std::cout << "\n";

  std::cout << "======== Student Card ========\n";
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "GPA: " << gpa << "\n";
  std::cout << "Credits Enrolled: " << credits << "\n";
  std::cout << "Expected Grad Year: " << grad_year;

  // TODO (week 3): declare and initialize the four boxes
  //   first (std::string), age (int), credits (int), gpa (double)

  // TODO (week 2): a cout question, then a cin into the box — four times

  // TODO (week 4): one computed line with an operator
  //   int grad_year = CURRENT_YEAR + 4;

  // TODO (weeks 1-4): print the card from the variable names
  //   header line, one labeled line per variable, then the computed value

  return 0;
}
