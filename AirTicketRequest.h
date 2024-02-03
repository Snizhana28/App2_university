#include <iostream>
#include <string>
#include <list>
using namespace std;

class AirTicketRequest {
private:
    string destination;
    int flightNumber;
    string passengerName;
    string departureDate;
    bool isValidName(const string& name) const {
        size_t spaceIndex = name.find(' ');

        if (spaceIndex != string::npos && spaceIndex + 2 < name.length()) {
            string surname = name.substr(0, spaceIndex); 
            string initials = name.substr(spaceIndex + 1); 
            if (isupper(surname[0])) {
				if (isupper(initials[0]) && isupper(initials[2])) {
                    if (initials[1] == '.') {
                        if (isalpha(initials[2])) {
                            if (initials[3] == '.') {
                                return true;
                            }
                        }
					}
				}
			}

        }
        return false; 
    }

    bool isValidDate(const string& date) const {
		if (date.length() != 10) return false;
		if (date[4] != '-' || date[7] != '-') return false;
		for (int i = 0; i < 10; i++) {
			if (i == 4 || i == 7) continue;
			if (date[i] < '0' || date[i] > '9') return false;
		}
		return true;
	}

public:
    AirTicketRequest(const string& dest, int flightNum, const string& passName, const string& depDate)
        : destination(dest), flightNumber(flightNum), passengerName(passName), departureDate(depDate) 
    {
		if (!isValidName(passName)) {
			throw invalid_argument("Invalid passenger name");
		}
		if (!isValidDate(depDate)) {
			throw invalid_argument("Invalid departure date");
		}
    
    }

    void printRequest() const {
        cout << "Destination: " << destination << ", Flight: " << flightNumber
            << ", Passenger: " << passengerName << ", Departure Date: " << departureDate << endl;
    }

    int getFlightNumber() const {
        return flightNumber;
    }

    string getDepartureDate() const {
        return departureDate;
    }
};