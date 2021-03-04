#include <fstream>
#include <string>

using namespace std;

float weatherProbability(string city, string weather) {
	string fDate, fCity, fTemp, fWeather;
	int cityCount = 0;
	int weatherCount = 0;

	ifstream infile("weather.txt");

	if (infile.is_open()) {
		while (!infile.eof()) {
			infile >> fDate >> fCity >> fTemp >> fWeather;
			
			if (infile.fail()) {
				break;
			}
			if (fCity.compare(city) == 0) {
				cityCount++;
				if (fWeather.compare(weather) == 0) {
					weatherCount++;
				}
			}
		}
	} 
	else {
		return 0;
	}
	
	if (cityCount == 0) {
		return -1;
	}
	else return (float)(weatherCount) / (float)(cityCount);
}
