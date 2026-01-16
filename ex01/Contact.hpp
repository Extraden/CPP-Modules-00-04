#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact
{
	public:
		Contact(void);
		Contact(const Contact& other);
		Contact operator=(const Contact& other);
		~Contact();
	private:
};

#endif
