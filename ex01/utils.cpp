#include <cctype>
#include <string>

bool    isNumeric(const std::string& input)
{
    if (input.empty())
      return (false);
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(input[i])))
            return (false);
    }
    return (true);
}

std::string fmt10(const std::string& input)
{
  if (input.size() > 10)
    return (input.substr(0, 9) += '.');
  return (input);
}

bool  isEffectivelyEmpty(const std::string& s)
{
  if (s.empty())
    return (true);

  for (size_t i = 0; i < s.size(); i++)
  {
    if (!std::isspace(s[i]))
      return (false);
  }
  return (true);
}
