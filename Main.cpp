#include "../App2_university/AirTicketManager.h"
#include <iostream>
using namespace std;

int main()
{
	try
	{
		AirTicketManager<int>  manager;

		manager.addRequest(AirTicketRequest("Chicago", 101, "Mazur D.M.", "2024-02-05"));
		manager.addRequest(AirTicketRequest("New York", 102, "Kostiuk S.S.", "2024-03-05"));
		manager.addRequest(AirTicketRequest("Los Angeles", 104, "Kovalchuk A.O.", "2024-04-05"));
		cout << endl;

		manager.printAllRequests(); 
		manager.printRequestsByFlightAndDate(101, "2024-02-05");

		manager.removeRequest(1);

	}
	catch (const invalid_argument& e)
	{
		cout << e.what() << endl;
	}
	

	return 0;
}
