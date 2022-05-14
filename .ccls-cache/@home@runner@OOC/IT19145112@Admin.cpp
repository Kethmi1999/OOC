//Admin Class

#include <iostream>

class Admin{
	
	private:
		
		std ::string name;
		int contactNo;
		std ::string email;
		
	public:
		
		void logIn();
		void viewUserAccounts();
		void searchUser();
		void deleteUserAccounts();
		void logOut();
			
};

Admin::Admin(){
}

Admin::Admin(std ::string Name, int ContactNo, std ::string Email)
{
	name = Name;
	contactNo = ContactNo;
	email = Email;

}

void Admin::logIn(){
	
}

void Admin::viewUserAccounts(){
	
}

void Admin::searchUser(){
	
}

void Admin::deleteUserAccounts(){
	
}

void Admin::logOut(){
	
}
Admin::~Admin(){
	
};