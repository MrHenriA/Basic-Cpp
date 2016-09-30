/*An ATM allows a customer to withdraw a maximum of $500 per day. If a
customer withdraws more than $300, the service charge is 4% of the amount
over $300. If the customer does not have sufficient money in the account, the
ATM informs the customer about the insufficient funds and gives the customer
the option to withdraw the money for a service charge of $25.00. If there is no
money in the account or if the account balance is negative, the ATM does not
allow the customer to withdraw any money. If the amount to be withdrawn is
greater than $500, the ATM informs the customer about the maximum amount
that can be withdrawn. Write an algorithm that allows the customer to enter
the amount to be withdrawn. The algorithm then checks the total amount
in the account, dispenses the money to the customer, and debits the
account by the amount withdrawn and the service charges, if any.*/

#include <iostream>
int main()

{

	long double total = 500;
	long double withdrawl = 0;
	
		while (total > 0) {
		std::cout << "Please enter an amount to withdraw from your balance of  : $" << total << std::endl;
		std::cin >> withdrawl;

		if (withdrawl > total)
		{
		std::cout << "not enough money you only have :$" << total << std::endl;
		}
		
		
		else 
		{
			std::cout << "You withdrew:  " << withdrawl << std::endl;
			total -= withdrawl;
			std::cout << "and you have : $" << total << "  left. \n";
		}
	}


	return 0;
}





