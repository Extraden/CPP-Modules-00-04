#include <iostream>
#include "PhoneBook.hpp"

enum command_type {
ADD,
SEARCH,
EXIT,
IGNORE
};

int execute_command(PhoneBook& phonebook, std::string& input)
{
  if (input == "ADD")
    return (phonebook.addContact());
  else if (input == "SEARCH")
    return (phonebook.searchContact());
  else if (input == "EXIT")
    return (1);
  else
    return (IGNORE);
}

int	main(void)
{
  std::string input_command;
  PhoneBook phonebook;

  while (1)
  {
    std::cout << "Type a command:\n";
    std::cin >> input_command;
    if (execute_command(phonebook, input_command) == 1)
      break;
  }
	return (0);
}
