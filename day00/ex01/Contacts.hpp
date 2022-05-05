#ifndef CONTACTS_H
# define CONTACTS_H

class Contact{
	public:

		Contact(void);
		~Contact(void);

		void display_contact(int zindex)const;
		void display_this(int zindex)const;
		void add_tab(std::string name, std::string lname, std::string nname, int phone, std::string secret, int zindex);
	
	private:
		std::string _fname[7];
		std::string _lname[7];
		std::string _nname[7];
		int _phone[7];
		std::string _dsecret[7];
};

#endif //CONTACTS_H//