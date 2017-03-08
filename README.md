# DOCUMENTATION

"Package-delivery services, such as FedEx®, DHL®, and UPS®, offer a number of different shipping options, each with specific costs associated. Create an inheritance hierarchy to represent various types of packages. 

Use Package as the base class of the hierarchy, then include classes TwoDayPackage and OvernightPackage that derives from Package. Base class Package should include data members representing the name, address, city, province, and postal code for both the sender and recipient of the package, in addition to data members that stores the weight in kilogram and cost per kilogram to ship the package. Package’s constructor should initialize these data members. Ensure that the weight and cost in kilogram contain positive values. Package should provide a public member function calculateCost that returns a double indicating the cost associated with shipping the package. Package’s calculateCost should determine the cost by multiplying the weight by the cost per kilogram. 

Derived class TwoDayPackage should inherit the functionality of base class Package, but also include a data member that represents a flat fee that the shipping company charges for two-days delivery service. TwoDayPackage’s constructor should receive a value to initialize this data member. TwoDayPackage should redefine member function calculateCost so that it computes the shipping cost by adding the flat fee to the weight-based cost calculated by base class Package’s calculateCost function. 

Class OvernightPackage should inherit directly from class Package and contain an additional data member representing an additional fee per kilogram charged for overnight-delivery service. OvernightPackage should redefine member function calculateCost so that it adds the additional fee per kilogram to the standard cost per kilogram before calculating the shipping cost. 

Write a test program that creates objects of each type of package and test member function calculateCost, but you don’t have to submit this program.

Use the Package inheritance to create a program that displays the address information and calculate the shipping cost for several Packages. The program should contain a vector of Package pointers to objects of classes twoDayPackage and OvernightPackage. Loop through the vector to process the Packages polymorphically. For each Package, invoke get functions to obtain the address information of the sender and the recipient. Then print the two addresses as they could appear on mailing labels. Also, call each Package’s calculateCost member function and print the result. Keep track of the total shipping cost for all Packages in the vector and display this total when the loop terminates."