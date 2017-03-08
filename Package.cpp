#include "Package.h"

Package::Package
(const std::string& _sName, const std::string& _sAddress, const std::string& _sCity, const std::string& _sProvince, const std::string& _sPostalCode,		// sender
	const std::string& _rName, const std::string& _rAddress, const std::string& _rCity, const std::string& _rProvince, const std::string& _rPostalCode,		// recipient
	double _weight, double _costPerKilo)
	:
	sName(_sName), sAddress(_sAddress), sCity(_sCity), sProvince(_sProvince), sPostalCode(_sPostalCode),
	rName(_rName), rAddress(_rAddress), rCity(_rCity), rProvince(_rProvince), rPostalCode(_rPostalCode)
{
	setWeight(_weight);
	setCostPerKilo(_costPerKilo);
}

// sender setter and getter definitions
void Package::setSenderName(const std::string& n)
{
	sName = n;
}
std::string Package::getSenderName() const
{
	return sName;
}

void Package::setSenderAddress(const std::string& a)
{
	sAddress = a;
}
std::string Package::getSenderAddress() const
{
	return sAddress;
}

void Package::setSenderCity(const std::string& c)
{
	sCity = c;
}
std::string Package::getSenderCity() const
{
	return sCity;
}

void Package::setSenderProvince(const std::string& p)
{
	sProvince = p;
}
std::string Package::getSenderProvince() const
{
	return sProvince;
}

void Package::setSenderPostalCode(const std::string& pc)
{
	sPostalCode = pc;
}
std::string Package::getSenderPostalCode() const
{
	return sPostalCode;
}


// recipient setter and getter definitions
void Package::setRecipientName(const std::string& n)
{
	rName = n;
}
std::string Package::getRecipientName() const
{
	return rName;
}

void Package::setRecipientAddress(const std::string& a)
{
	rAddress = a;
}
std::string Package::getRecipientAddress() const
{
	return rAddress;
}

void Package::setRecipientCity(const std::string& c)
{
	rCity = c;
}
std::string Package::getRecipientCity() const
{
	return rCity;
}

void Package::setRecipientProvince(const std::string& p)
{
	rProvince = p;
}
std::string Package::getRecipientProvince() const
{
	return rProvince;
}

void Package::setRecipientPostalCode(const std::string& pc)
{
	rPostalCode = pc;
}
std::string Package::getRecipientPostalCode() const
{
	return rPostalCode;
}

// member function defintions
void Package::setWeight(double w)
{
	if (w < 0.0) { std::cout << "Invalid weight entry." << std::endl; weight = 0.0; }
	else weight = w;
}
double Package::getWeight() const
{
	return weight;
}

void Package::setCostPerKilo(double c)
{
	if (c < 0.0) { std::cout << "Invalid cost entry." << std::endl; costPerKilo = 0.0; }
	else costPerKilo = c;
}
double Package::getCostPerKilo() const
{
	return costPerKilo;
}

double Package::calculateCost() const
{
	return getWeight() * getCostPerKilo();
}
