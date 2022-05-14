//Inheritance with Credit and Paypal classes

//Payment class is the parent class and Credit and Paypal classes are child classes 

#include <iostream>
#include <cstring>

class Payment {
	
	private :
		char paymentID[5];
		double totalAmount;
		double refundAmount;
		
	public :
		void setpaymentID();
		void calculateTotalAmount();
		void calculateRefundAmount();
		void payRefundAmount();
		void getPaymentDetails();
};



class Credit : public Payment
{
	protected:
		
		char cardNo[20];
		char cardType[10];
		int expireDate[10];
		
	public:
		
		Credit(const char pcardNo[], const char pcardType[], const int pexpireDate[]);
		void authorized();
		
};



class PayPal : public Payment
{
	protected:
		
		char username[10];
		char email[30];
		
	
	public:
		
		PayPal(const char pusername[], const char pemail[]);
		void authorized();
		
};


int main()
{

}

Payment::Payment(){
	
	paymentID = 0;
}

Payment::Payment(std ::char PaymentID, double TotalAmount, std ::double RefundAmount)
{
	paymentID = PaymentID;
	totalAmount = TotalAmount;
	refundAmount = RefundAmount;

}

void Payment::setpaymentID()

{
}

void Payment::calculateTotalAmount()

{
}

void Payment::calculateRefundAmount()

{
}

void Payment::payRefundAmount()

{	
}

void Payment::getPaymentDetails()

{
}

Payment::~Payment(){	
}



Credit::Credit(const char pCnumber[], const char ptype[])
{
	strcpy(Cnumber, pCnumber);
	strcpy(type, ptype);
}

void Credit::authorized()
{	
}

Credit::~Credit(){
}



PayPal::PayPal(const char pusername[], const char pemail[])
{
	strcpy(username, pusername);
	strcpy(email, pemail);
}

void PayPal::authorized()
{	
}

Paypal::~Paypal(){
}