#include <cctype>
#include <iostream>
#include "utils.hpp"

std::string fmt10(const std::string& input)
{
  if (input.size() > 10)
    return (input.substr(0, 9) + '.');
  return (input);
}

bool  isEffectivelyEmpty(const std::string& s)
{
  if (s.empty())
    return (true);

  for (size_t i = 0; i < s.size(); i++)
  {
    if (!std::isspace(static_cast<unsigned char>(s[i])))
      return (false);
  }
  return (true);
}

bool  readNonEmpty(const char *prompt, std::string& out)
{
  while (true)
  {
    std::cout << prompt;
    if (!std::getline(std::cin, out))
      return (false);
    if (!isEffectivelyEmpty(out))
      return (true);
  }
}
