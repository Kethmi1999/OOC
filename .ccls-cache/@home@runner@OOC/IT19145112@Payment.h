#pragma once

class Payment {
	
	private :
		int paymentID;
		double totalAmount;
		double refundAmount;
		
	public :
		void setpaymentID(int PaymentID, double TotalAmount, double RefundAmount);
		void calculateTotalAmount(double TotalAmount, double RefundAmount);
		void calculateRefundAmount(double TotalAmount, double RefundAmount);
		void payRefundAmount(double TotalAmount, double RefundAmount);
		void getPaymentDetails(int PaymentID, double TotalAmount, double RefundAmount);
};
