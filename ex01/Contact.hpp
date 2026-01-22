#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact
{
	public:
		Contact();
		~Contact();

		bool	setFirstName();
		bool	setLastName();
		bool	setNickname();
		bool	setPhoneNumber();
		bool	setDarkestSecret();
		void	printBriefContactInfo() const;
		void	printFullContactInfo() const;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};


#endif
