#pragma once

class PayPal
{
	protected:
		
		char username[10];
		char email[30];
		
	
	public:
		
		PayPal(const char pusername[], const char pemail[]);
		void authorized(const char pusername[], const char pemail[]);
		
};
