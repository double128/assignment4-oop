#pragma once

#include "Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage
	(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,		// sender
		const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,		// recipient
		double, double, double);

	void setOvernightFee(double);		// overnight fee is charged per kilogram sent
	double getOvernightFee() const;

	virtual double calculateCost() const;	// must be virtual so derived class functionality can be used correctly
	
private:
	double overnightFee;
};