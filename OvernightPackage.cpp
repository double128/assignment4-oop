#include "OvernightPackage.h"

OvernightPackage::OvernightPackage
(const std::string& _sName, const std::string& _sAddress, const std::string& _sCity, const std::string& _sProvince, const std::string& _sPostalCode,		// sender
	const std::string& _rName, const std::string& _rAddress, const std::string& _rCity, const std::string& _rProvince, const std::string& _rPostalCode,		// recipient
	double _weight, double _costPerKilo, double _flatFee)
	: Package(_sName, _sAddress, _sCity, _sProvince, _sPostalCode,
			 _rName, _rAddress, _rCity, _rProvince, _rPostalCode,
			 _weight, _costPerKilo)
{
	setOvernightFee(overnightFee);
}

void OvernightPackage::setOvernightFee(double f)
{
	if (f < 0.0) { overnightFee = 0.0; }
	else overnightFee = f;
}
double OvernightPackage::getOvernightFee() const
{
	return overnightFee;
}

double OvernightPackage::calculateCost() const
{
	return getWeight() * (Package::getCostPerKilo() + getOvernightFee());
	// a bit confusing, but we're returning the cost per kilogram with the overnight fee (since the overnight fee is charged per kilogram)
	// then we multiply that value by the overall weight
}
