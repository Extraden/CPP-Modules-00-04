#include <cctype>
#include <string>

bool    isNumeric(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input.empty() || !isdigit(static_cast<unsigned char>(input[i])))
            return (0);
    }
    return (1);
}