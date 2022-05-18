#pragma once

class Credit
{
	protected:
		
		char cardNo[20];
		char cardType[10];
		int expireDate[10];
		
	public:
		
		Credit(const char pcardNo[], const char pcardTyp[]);
		void authorized(const char pcardNo[], const char pcardTyp[]);
		
};
