#include <stdio.h>
#include <string.h>

#define MAX_BUSES 10
#define MAX_SEATS 50
#define MAX_NAME_LENGTH 50

struct Passenger {
    char name[MAX_NAME_LENGTH];
    int age;
    char contact[MAX_NAME_LENGTH];
};

struct Booking {
    int busIndex;
    int seatIndex;
    struct Passenger passenger;
};

struct Bus {
    char source[MAX_NAME_LENGTH];
    char destination[MAX_NAME_LENGTH];
    int availableSeats;
    int seats[MAX_SEATS];
    struct Booking bookings[MAX_SEATS];
};

struct Bus buses[MAX_BUSES];
int numBuses = 0;

// Function prototypes
void initializeBuses();
void displayMenu();
void displayAvailableBuses();
void makeReservation();
void viewBookings();
// Add more function prototypes for each feature

int main() {
    initializeBuses();

    while (1) {
        displayMenu();
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAvailableBuses();
                break;
            case 2:
                makeReservation();
                break;
            case 3:
                viewBookings();
                break;
            // Add more cases for other menu options
            case 0:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please select again.\n");
        }
    }

    return 0;
}

void initializeBuses() {
    // Initialize bus data here
}

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Display available buses\n");
    printf("2. Make a reservation\n");
    printf("3. View bookings\n");
    // Add more menu options
    printf("0. Exit\n");
    printf("Select an option: ");
}

void displayAvailableBuses() {
    // Display available buses
}

void makeReservation() {
    // Implement reservation logic
}

void viewBookings() {
    // Display bookings
}
// Implement more functions for each feature

