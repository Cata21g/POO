#include "pch.h"
#include "LoyaltyScheme.h"
#pragma once
//#include <string>

using namespace std;
using namespace System;

ref class CreditCardAccount
{
public:
	literal String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	void RedeemLoyaltyPoints();
	
private:
	LoyaltyScheme^ scheme;    // Handle to a LoyaltyScheme object
	static double interestRate;
	static int numberOfAccounts = 0;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
};




