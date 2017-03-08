#pragma once

#include "Package.h"

class TwoDayPackage : public Package
{
public:
	TwoDayPackage
	(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,		// sender
		const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,		// recipient
		double, double, double);

	void setFlatFee(double);
	double getFlatFee() const;

	virtual double calculateCost() const;

private:
	double flatFee;
};