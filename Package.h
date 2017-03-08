#pragma once

#include <string>
#include <iostream>


class Package
{
public:
	Package
	(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,		// sender
		const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,		// recipient
		double, double);	// weight and cost		

	// sender setter and getter prototypes
	void setSenderName(const std::string&);
	std::string getSenderName() const;

	void setSenderAddress(const std::string&);
	std::string getSenderAddress() const;

	void setSenderCity(const std::string&);
	std::string getSenderCity() const;

	void setSenderProvince(const std::string&);
	std::string getSenderProvince() const;

	void setSenderPostalCode(const std::string&);
	std::string getSenderPostalCode() const;


	// recipient setter and getter prototypes
	void setRecipientName(const std::string&);
	std::string getRecipientName() const;

	void setRecipientAddress(const std::string&);
	std::string getRecipientAddress() const;

	void setRecipientCity(const std::string&);
	std::string getRecipientCity() const;

	void setRecipientProvince(const std::string&);
	std::string getRecipientProvince() const;

	void setRecipientPostalCode(const std::string&);
	std::string getRecipientPostalCode() const;


	// member function prototypes
	void setWeight(double);
	double getWeight() const;

	void setCostPerKilo(double);
	double getCostPerKilo() const;

	virtual double calculateCost() const;

private:
	std::string sName, sAddress, sCity, sProvince, sPostalCode;
	std::string rName, rAddress, rCity, rProvince, rPostalCode;

	double weight, costPerKilo;
};