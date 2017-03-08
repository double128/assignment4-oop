#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

#include <vector>

int main()
{
	std::vector<Package*>package; // create vector of type Package*
	
	// push objects of type Package, OvernightPackage, and TwoDayPackage into vector package
	package.push_back(new Package("Christina Nieto", "4329 Main Street", "Spy Hill", "SK", "S0A 3W0", "Jean Tester", "73 De la Providence Avenue", "Hull", "QC", "J8Y 4B1", 10, 5));
	package.push_back(new OvernightPackage("Max Sumner", "2947 Bridgeport Road", "Collingwood", "ON", "L9Y 1X1", "Elenor Green", "1106 Bayfield Street", "Barrie", "ON", "L4M 4S7", 10, 5, 8));
	package.push_back(new TwoDayPackage("Joseph Lewis", "4504 Isabella Street", "Pembroke", "ON", "K8A 5S5", "Dwayne Sanchez", "1285 Central Parkway", "Mississauga", "ON", "L5C 3T6", 10, 5, 15));

	double total(0.0); // initialize a total that will return the total value of all package costs

	for (size_t n = 0; n < package.size(); ++n)
	// when the size of the vector is equal to zero and is less than the overall size of each object (ergo, 3)
	{
		std::cout << "\nINFORMATION FOR PACKAGE #" << n + 1 << std::endl;
		std::cout << "\n******** SENDER: ************" << std::endl;
		std::cout << package[n]->getSenderName() << std::endl;
		std::cout << package[n]->getSenderAddress() << std::endl;
		std::cout << package[n]->getSenderCity() << ", " << package[n]->getSenderProvince() << std::endl;
		std::cout << package[n]->getSenderPostalCode() << std::endl;

		std::cout << "\n******** RECIPIENT: ********" << std::endl;
		std::cout << package[n]->getRecipientName() << std::endl;
		std::cout << package[n]->getRecipientAddress() << std::endl;
		std::cout << package[n]->getRecipientCity() << ", " << package[n]->getRecipientProvince() << std::endl;
		std::cout << package[n]->getRecipientPostalCode() << std::endl;
		
		double cost = package[n]->calculateCost();
		// we HAVE to declare a variable to store this calculated cost to add it to the overall total
	
		std::cout << "\nCost to ship: $" << cost << std::endl;
		total += cost; 
		// total is equal to the total + additional costs accumulated over the for loop
	}

	std::cout << "\n******** TOTAL: ********" << std::endl;
	std::cout << "For " << package.size() << " packages, the total cost is: $" << total << "\n" << std::endl;

	package.clear(); // clear information in the package vector	
	system("PAUSE");
}