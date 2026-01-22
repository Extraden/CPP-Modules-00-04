#include <iostream>
#include "PhoneBook.hpp"

int execute_command(PhoneBook& phonebook, std::string& input)
{
  if (input == "ADD")
  {
    phonebook.addContact();
    return (0);
  }
  else if (input == "SEARCH")
  {
    phonebook.searchContact();
    return (0);
  }
  else if (input == "EXIT")
    return (1);
  else
    return (0);
}

int	main()
{
  std::string input_command;
  PhoneBook phonebook;

  while (1)
  {
    std::cout << "Type a command: ";
    if (!std::getline(std::cin, input_command))
      return (0);
    std::cout << "\n";
    if (execute_command(phonebook, input_command) == 1)
      break;
  }
	return (0);
}
