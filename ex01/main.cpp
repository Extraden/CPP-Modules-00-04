#include <iostream>
#include "PhoneBook.hpp"

int execute_command(PhoneBook& phonebook, std::string& input)
{
  if (input == "ADD")
    return (phonebook.addContact());
  else if (input == "SEARCH")
    return (phonebook.searchContact());
  else if (input == "EXIT")
    return (1);
  else
    return (0);
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
