#include "../App2_university/AirTicketRequest.h"

template <typename T>
class AirTicketManager
{
private:
    list<AirTicketRequest> requests;

public:
    void addRequest(const AirTicketRequest& request) {
        requests.push_back(request);
    }

    void removeRequest(int index) {
        if (index >= 0 && index < requests.size()) {
            auto it = requests.begin();
            advance(it, index);
            requests.erase(it);
            cout << "Request removed." << endl;
        }
        else {
            throw invalid_argument ("Invalid index.");
        }
    }

    void printRequestsByFlightAndDate(int flightNumber, const string& departureDate) const {
        cout << "Requests for Flight " << flightNumber << " on " << departureDate << ":" << endl;
        for (const auto& request : requests) {
            if (request.getFlightNumber() == flightNumber && request.getDepartureDate() == departureDate) {
                request.printRequest();
                break;
            }
            else {
                throw invalid_argument ("No requests found.");
            }
        }
        cout << endl;
    }

    void printAllRequests() const {
        cout << "All Requests:" << endl;
        for(const auto & request : requests) {
            request.printRequest();
        }
        cout << endl;
    }
};