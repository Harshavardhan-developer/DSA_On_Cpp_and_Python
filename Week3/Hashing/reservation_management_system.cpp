#include <bits/stdc++.h>
using namespace std;

class ReservationManagementSystem {
private:
    unordered_map<int, pair<string, int>> reservations;

public:
    ReservationManagementSystem() {
    }

    void addReservation(int reservationId, string reservationType, int cost) {
        reservations[reservationId] = {reservationType, cost};
    }

    void updateReservation(int reservationId, int newCost) {
        reservations[reservationId].second = newCost;
    }

    void removeReservation(int reservationId) {
        reservations.erase(reservationId);
    }

    vector<int> queryReservations(string reservationType, int cost) {
        vector<int> result;

        for (auto& reservation : reservations) {
            int reservationId = reservation.first;
            string type = reservation.second.first;
            int reservationCost = reservation.second.second;

            if (type == reservationType && reservationCost == cost) {
                result.push_back(reservationId);
            }
        }

        return result;
    }
};

/*
Example Usage:

ReservationManagementSystem rms;

rms.addReservation(101, "Hotel", 2000);
rms.addReservation(102, "Flight", 5000);
rms.addReservation(103, "Hotel", 2000);

rms.updateReservation(101, 3000);

rms.queryReservations("Hotel", 2000);
// Output: [103]

rms.removeReservation(103);

rms.queryReservations("Hotel", 2000);
// Output: []

*/