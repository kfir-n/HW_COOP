
#include <iostream>
#include <vector>
#include "Trip.h"
#include "Trip.cpp"


using namespace std;

int main() {
    using namespace std;

    bool isEmpty(const vector<Trip>& arr);

    void Print(const vector<Trip>& arr);

    void EditTrip(vector<Trip>& arr);

    void AddTrip(vector<Trip>& arr);

    int main() {
        int option;
        vector<Trip> arr;
        do {
            cout << "\nPlease Select an Option:\n1.Print Trips\n2.Edit Trips\n3.Add Trip\n4.Exit" << endl;
            cin >> option;
            switch (option) {
                case 1:
                    Print(arr);
                    break;
                case 2:
                    EditTrip(arr);
                    break;
                case 3:
                    AddTrip(arr);
                    break;
                case 4:
                    cout << "bye bye! " << endl;
                    break;
                default:
                    cout << "invalid option" << endl;
                    break;
            }
        } while (option != 4);
        return 0;
    }

    bool isEmpty(const vector<Trip>& arr) {
        return arr.empty();
    }

    void Print(const vector<Trip>& arr) {
        if (isEmpty(arr)) {
            cout << "There are no trips." << endl;
        } else {
            for (const auto& trip : arr) {
                trip.print();
            }
        }
    }

    void EditTrip(vector<Trip>& arr) {
        if (isEmpty(arr)) {
            return;
        }

        int num;
        cout << "Enter trip number to edit: ";
        cin >> num;

        for (auto& trip : arr) {
            if (trip.getTripNum() == num) {
                int newNum;
                char newDesk[100];
                int day, month, year;

                cout << "Enter new trip number: ";
                cin >> newNum;
                cout << "Enter new trip description: ";
                cin.ignore();  // Consume the newline character left in the buffer
                cin.getline(newDesk, 100);
                cout << "Enter new date (day month year): ";
                cin >> day >> month >> year;

                trip.setTripNum(newNum);
                trip.setTripDesk(newDesk);
                trip.setDate(day, month, year);

                cout << "Trip edited successfully." << endl;
                return;
            }
        }

        cout << "Trip not found." << endl;
    }

    void AddTrip(vector<Trip>& arr) {
        cout << "Adding a new trip: Enter details" << endl;
        int number;
        char desk[100];
        int day, month, year;

        cout << "Enter trip number: ";
        cin >> number;
        cout << "Enter trip description: ";
        cin.ignore();  // Consume the newline character left in the buffer
        cin.getline(desk, 100);
        cout << "Enter trip date (day month year): ";
        cin >> day >> month >> year;

        arr.emplace_back(number, desk, day, month, year);

        cout << "New trip added successfully." << endl;
    }


}




