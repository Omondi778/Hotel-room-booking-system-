C++
#include <iostream>
using namespace std;

class RoomBooking
{
    string guestName;
    int roomNumber;
    int daysBooked;

public:

    // Constructor
    RoomBooking(string name, int room, int days)
    {
        guestName = name;
        roomNumber = room;
        daysBooked = days;

        cout << "Room booking confirmed!" << endl;
    }

    // Function to display booking details
    void displayBooking()
    {
        cout << "\n------ HOTEL BOOKING DETAILS ------" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << daysBooked << endl;
    }

    // Destructor
    ~RoomBooking()
    {
        cout << "\nBooking ended, room released." << endl;
    }
};

int main()
{
    string name;
    int room, days;

    cout << "Enter guest name: ";
    cin >> name;

    cout << "Enter room number: ";
    cin >> room;

    cout << "Enter number of days booked: ";
    cin >> days;

    RoomBooking booking(name, room, days);

    booking.displayBooking();

    return 0;
}
