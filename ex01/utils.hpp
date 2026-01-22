#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

bool    isNumeric(const std::string& input);
std::string fmt10(const std::string& input);
bool  isEffectivelyEmpty(const std::string& s);
bool  readNonEmpty(const char *prompt, std::string& out);

#endif
