#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage
(const std::string& _sName, const std::string& _sAddress, const std::string& _sCity, const std::string& _sProvince, const std::string& _sPostalCode,		// sender
	const std::string& _rName, const std::string& _rAddress, const std::string& _rCity, const std::string& _rProvince, const std::string& _rPostalCode,		// recipient
	double _weight, double _costPerKilo, double _flatFee)
	: Package(_sName, _sAddress, _sCity, _sProvince, _sPostalCode,
		   	  _rName, _rAddress, _rCity, _rProvince, _rPostalCode,
			  _weight, _costPerKilo)
{
	setFlatFee(_flatFee);
}

void TwoDayPackage::setFlatFee(double f)
{
	if (f < 0.0) { flatFee = 0.0; }
	flatFee = f;
}
double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}

double TwoDayPackage::calculateCost() const
{
	return Package::calculateCost() + getFlatFee();
}