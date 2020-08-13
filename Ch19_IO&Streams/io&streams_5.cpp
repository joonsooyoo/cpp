#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

/*

STREAM MANIPULATOR CHALLENGE: formatting a table

*/

void ruler(){
	std::cout << std::endl;
	std::cout << "0123456789012345678901234567890123456789012345678901234567890123456789" << std::endl;
	std::cout << std::endl;
}

struct City { // general purpose for struct is used to show data structure
	std::string name;
	int population;
	double price;
};

struct Country {
	std::string name;
	std::vector<City> cities;
};

struct Tour {
	std::string title;
	std::vector<Country> countries;
};

int main(){

	Tour tours {

		"Tour Ticket Prices for Miami", {

			{
				"Colombia", {

					{ "Bogota", 8778000, 400.98 },
					{ "Cali", 2401000, 424.12 },
					{ "Medellin", 2464000, 350.98 }

				}
			}, 

			{
				"Brazil", {
					{ "Rio De Janiero", 13500000, 567.45 },
					{ "Sao Paulo", 11310000, 975.45 },
					{ "Salvador", 18234000, 855.99 }
				}
			},

			{
				"Chile", {
					{ "Valdivia", 260000, 569.12 },
					{ "Santiago", 7040000, 520.00 }
				}
			},

			{
				"Argentina", {
					{ "Buenos Aires", 3010000, 737.77 }
				}
			}
		}
	};

	ruler();

	std::cout << std::setw(50) << std::right << tours.title << std::endl << std::endl;
	std::cout << std::setw(20) << std::left << "Country";
	std::cout << std::setw(25) << std::left << "City";
	std::cout << std::setw(10) << std::right << "Population";
	std::cout << std::setw(15) << std::right << "Price" << std::endl;
	for (auto country: tours.countries){
		for (size_t i{0};i<tours.countries.size();++i){
			if (i==0){
				std::cout << std::setw(20) << std::left << country.name;
				std::cout << std::setw(25) << std::left << country.cities.at(i).name;
				std::cout << std::setw(10) << std::right << country.cities.at(i).population;
				std::cout << std::setw(15) << std::right << country.cities.at(i).price << std::endl;
			}
			std::cout << std::setw(45) << std::left << country.cities.at(i).name;
			std::cout << std::setw(10) << std::right << country.cities.at(i).population;
			std::cout << std::setw(15) << std::right << country.cities.at(i).price << std::endl;
		}
	}
	return 0;
}