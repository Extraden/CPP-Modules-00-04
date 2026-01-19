#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

enum command_type {
ADD,
SEARCH,
EXIT,
IGNORE
};

int add_contact(PhoneBook phonebook, std::string input)
{
  (void) input;
  (void) phonebook;
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;

  std::cout << "Enter first name:\n";
  std::cin >> first_name;
  std::cout << "Enter last name:\n";
  std::cin >> last_name;
  std::cout << "Enter nickname:\n";
  std::cin >> nickname;
  std::cout << "Enter phone number:\n";
  std::cin >> phone_number;
  std::cout << "Enter darkest secret:\n";
  std::cin >> darkest_secret;
  return (0);
}

int execute_command(std::string input, PhoneBook& phonebook)
{
  if (input == "ADD")
    return (add_contact(phonebook, input));
  else if (input == "SEARCH")
    return (SEARCH);
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
    if (execute_command(input_command, phonebook) == 1)
      break;
  }
	return (0);
}
