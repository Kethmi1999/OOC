#include <iostream>
#include <cstring>

#include "Admin.h"
#include "User.h"
#include "Payment.h"
#include "Credit.h"
#include "PayPal.h"

using namespace std;

int main()
{
  //create objects
  Admin *ad = new Admin ("ad159" , "0774308504" , "janith2@gmail.com");
  User *ur = new User ("8520123" , "Keth@12345");
  Payment *py = new Payment ("15978", "Rs.2500.00" , "Rs.1000.00");
  Credit *ct = new Credit ("1596324782" , "Visa" , "20/05/2023");
  PayPal *pp = new Paypal ("Aruna Jinadasa" , "aruna66@gmail.com");

  delete ad , ur , py , ct, pp;

  return 0;
}
