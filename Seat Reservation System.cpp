#include <iostream>

using namespace std;

// Functions  as provided in the assignment
bool bookFirstClass(int Seats[][7], int rows, int cols, int noOfSeats){
	int available = 0;
    // First, let's count if we actually have enough empty seats in First Class
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0){
                available++;
            }
        }
    }
    // If request is greater than what's available, reject it immediately
    if(noOfSeats>available){
        return false;
    }
    // If we have enough seats, start booking them
    int bookedSoFar=0;
    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<cols ; j++) {
            if(Seats[i][j] == 0 && bookedSoFar<noOfSeats) {
                Seats[i][j] = 1; // Mark as reserved
                bookedSoFar++;
            }
        }
    }
    return true;
	return true;
}
bool bookBusinessClass(int Seats[][7], int rows, int cols, int noOfSeats){
	int available = 0;
    // Count empty seats in rows 2 and 3
    for(int i = 2; i < 4; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0){
                available++;
            }
        }
    }
    if(noOfSeats > available){
        return false;
    }
    // Book the seats
    int bookedSoFar = 0;
    for(int i=2 ; i<4 ; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0 && bookedSoFar < noOfSeats){
                Seats[i][j]=1;
                bookedSoFar++;
            }
        }
    }
	return true;
}
bool bookEconomyClass(int Seats[][7], int rows, int cols, int noOfSeats){
	int available = 0;
    
    // Count empty seats from row 4 up to row 11
    for (int i = 4; i < 12; i++) {
        for (int j = 0; j < cols; j++) {
            if (Seats[i][j] == 0) {
                available++;
            }
        }
    }

    if (noOfSeats > available) {
        return false;
    }

    // Book the seats
    int bookedSoFar = 0;
    for (int i = 4; i < 12; i++) {
        for (int j = 0; j < cols; j++) {
            if (Seats[i][j] == 0 && bookedSoFar < noOfSeats) {
                Seats[i][j] = 1;
                bookedSoFar++;
            }
        }
    }
	return true;
}
int checkAvailableSeats(int Seats[][7], int rows, int cols){
	int count = 0;
    // Nested loops to check every single element in the 2D array
    for(int i = 0; i < rows; i++){
        for(int j=0 ; j<cols ; j++){
            if(Seats[i][j] == 0){
                count++; // Increment if seat is 0 (available)
            }
        }
    }
    return count;
	return true;
}
void getFare();
void viewSeatingPlan(int Seats[][7], int rows, int cols);
bool systemReset(int Seats[][7], int rows, int cols){
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Seats[i][j] = 0; // Clear out the reservation
        }
    }
	return true;
}
// Function to print the fare for each class
void getFare(){
    cout<<"\n--- FARE INFORMATION ---"<<endl;
    cout<<"First Class Ticket:  Rs. 18,000" <<endl;
    cout<<"Business Class Ticket: Rs. 14,000"<<endl;
    cout<<"Economy Class Ticket:  Rs. 10,000"<<endl;
}
// Function to display the 12x7 seating grid
void viewSeatingPlan(int Seats[][7], int rows, int cols) {
    cout << "\n--- SEATING PLAN (0: Available, 1: Booked) ---" << endl;
    cout << "        S1 S2 S3 S4 S5 S6 S7" << endl;
    for(int i=0 ; i<rows; i++){
        //Labeling classes visually for clarity
        if(i==0){
		cout<<"[First]  ";
		}
        else if(i==2){
		cout<<"[Business]";
		}
        else if(i==4){
		cout<<"[Economy]";
        }
		else{
		 cout<<"         ";}
        cout<<"Row "<<i+1<<": ";
        for(int j=0 ; j<cols;j++){
            cout<<Seats[i][j]<<"  ";
        }
        cout<<endl;
    }
}
// Helper logic/function idea integrated directly to count specific class seats
// First Class is Row 0 to Row 1 (2 rows)
bool bookFirstClass(int seats[][7], int rows, int cols, int noOfSeats){
    int available = 0;
    // First, let's count if we actually have enough empty seats in First Class
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < cols; j++){
            if(seats[i][j] == 0){
                available++;
            }
        }
    }
    // If request is greater than what's available, reject it immediately
    if(noOfSeats>available){
        return false;
    }
    // If we have enough seats, start booking them
    int bookedSoFar=0;
    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<cols ; j++) {
            if(seats[i][j] == 0 && bookedSoFar<noOfSeats) {
                Seats[i][j] = 1; // Mark as reserved
                bookedSoFar++;
            }
        }
    }
    return true;
}*/
// Business Class is Row 2 to Row 3 (2 rows)
/*bool bookBusinessClass(int Seats[][7], int rows, int cols, int noOfSeats){
    int available = 0;
    // Count empty seats in rows 2 and 3
    for(int i = 2; i < 4; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0){
                available++;
            }
        }
    }
    if(noOfSeats > available){
        return false;
    }
    // Book the seats
    int bookedSoFar = 0;
    for(int i=2 ; i<4 ; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0 && bookedSoFar < noOfSeats){
                Seats[i][j]=1;
                bookedSoFar++;
            }
        }
    }
    return true;
}*/
// Economy Class is Row 4 to Row 11 (8 rows)

/*bool bookEconomyClass(int Seats[][7], int rows, int cols, int noOfSeats) {
    int available = 0;
    
    // Count empty seats from row 4 up to row 11
    for (int i = 4; i < 12; i++) {
        for (int j = 0; j < cols; j++) {
            if (Seats[i][j] == 0) {
                available++;
            }
        }
    }

    if (noOfSeats > available) {
        return false;
    }

    // Book the seats
    int bookedSoFar = 0;
    for (int i = 4; i < 12; i++) {
        for (int j = 0; j < cols; j++) {
            if (Seats[i][j] == 0 && bookedSoFar < noOfSeats) {
                Seats[i][j] = 1;
                bookedSoFar++;
            }
        }
    }
    return true;
}*/
// Function to reset all seats back to 0

/*bool systemReset(int Seats[][7], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Seats[i][j] = 0; // Clear out the reservation
        }
    }
    return true;
}*/

int main(){
    // 12 rows and 7 columns matrix initialized to 0 (all available)
    int seats[12][7] = {0}; 
    int choice = 0;

    // Loop runs infinitely until user explicitly chooses option 7 to exit
    while (true) {
        // Displaying the main menu
        cout << "\n----------------------------------------------" << endl;
        cout << "\n--- Welcome to Airplane Reservation System ---" << endl;
        cout << "\n----------------------------------------------" << endl;
        cout << "1. Book First Class Seats" << endl;
        cout << "2. Book Business Class Seats" << endl;
        cout << "3. Book Economy Class Seats" << endl;
        cout << "4. View Airplane Seating Plan" << endl;
        cout << "5. View Fare(s)" << endl;
        //cout << "6. Get Fare Information" << endl;
        cout << "6. System Reset" << endl;
        cout << "7. Exit from The Booking System" << endl; // Adjusted to option 8 so 7 can be used for Reset, or you can adjust based on Fig 1
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        // If user wants to exit
        if(choice == 7){
            cout<<"Exiting the system. Thank you!"<<endl;
            break; 
        }
        int seatsToBook = 0;
        // Switch case to handle user choices
        switch(choice){
            case 1:
                cout<<"Enter number of seats to book in First Class: ";
                cin>>seatsToBook;
                if(bookFirstClass(seats, 12, 7, seatsToBook)){
                    cout<<"Booking successful!"<<endl;
                    cout<<"Total Bill: Rs. "<< seatsToBook*18000<<endl;
                }else{
                    cout<<"Booking failed! Not enough seats available in First Class."<<endl;
                }
                break;
            case 2:
                cout<<"Enter number of seats to book in Business Class: ";
                cin>>seatsToBook;
                if(bookBusinessClass(seats, 12, 7, seatsToBook)){
                    cout<<"Booking successful!"<<endl;
                    cout<<"Total Bill: Rs. " <<seatsToBook*14000<<endl;
                }else{
                    cout<<"Booking failed! Not enough seats available in Business Class."<<endl;
                }
                break;
            case 3:
                cout<<"Enter number of seats to book in Economy Class: ";
                cin>>seatsToBook;
                if(bookEconomyClass(seats, 12, 7, seatsToBook)){
                    cout<<"Booking successful!"<<endl;
                    cout<<"Total Bill: Rs. "<<seatsToBook*10000<<endl;
                }else{
                    cout<<"Booking failed! Not enough seats available in Economy Class."<<endl;
                }
                break;
            case 4:
                viewSeatingPlan(seats, 12, 7);
                break;
            /*case 5:
                cout<<"Total available seats in the plane: "<<checkAvailableSeats(seats, 12, 7)<<endl;
                break;*/
            case 5:
                getFare();
                break;
            case 6:
                if(systemReset(seats, 12, 7)){
                    cout<<"System reset successful. All seats are now available."<<endl;
                }else{
                    cout<<"System reset failed."<<endl;
                }
                break;
            default:
                cout<<"Invalid choice! Please select a valid option."<<endl;
        }
    }
    return 0;
}
// Function to check overall available seats in the entire plane
/*int checkAvailableSeats(int Seats[][7], int rows, int cols){
    int count = 0;
    // Nested loops to check every single element in the 2D array
    for(int i = 0; i < rows; i++){
        for(int j=0 ; j<cols ; j++){
            if(Seats[i][j] == 0){
                count++; // Increment if seat is 0 (available)
            }
        }
    }
    return count;
}*/
// Helper logic/function idea integrated directly to count specific class seats
// First Class is Row 0 to Row 1 (2 rows)
/*bool bookFirstClass(int seats[][7], int rows, int cols, int noOfSeats){
    int available = 0;
    // First, let's count if we actually have enough empty seats in First Class
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < cols; j++){
            if(seats[i][j] == 0){
                available++;
            }
        }
    }
    // If request is greater than what's available, reject it immediately
    if(noOfSeats>available){
        return false;
    }
    // If we have enough seats, start booking them
    int bookedSoFar=0;
    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<cols ; j++) {
            if(seats[i][j] == 0 && bookedSoFar<noOfSeats) {
                Seats[i][j] = 1; // Mark as reserved
                bookedSoFar++;
            }
        }
    }
    return true;
}*/
// Business Class is Row 2 to Row 3 (2 rows)
/*bool bookBusinessClass(int Seats[][7], int rows, int cols, int noOfSeats){
    int available = 0;
    // Count empty seats in rows 2 and 3
    for(int i = 2; i < 4; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0){
                available++;
            }
        }
    }
    if(noOfSeats > available){
        return false;
    }
    // Book the seats
    int bookedSoFar = 0;
    for(int i=2 ; i<4 ; i++){
        for(int j = 0; j < cols; j++){
            if(Seats[i][j] == 0 && bookedSoFar < noOfSeats){
                Seats[i][j]=1;
                bookedSoFar++;
            }
        }
    }
    return true;
}*/
// Economy Class is Row 4 to Row 11 (8 rows)

/*bool bookEconomyClass(int Seats[][7], int rows, int cols, int noOfSeats) {
    int available = 0;
    
    // Count empty seats from row 4 up to row 11
    for (int i = 4; i < 12; i++) {
        for (int j = 0; j < cols; j++) {
            if (Seats[i][j] == 0) {
                available++;
            }
        }
    }

    if (noOfSeats > available) {
        return false;
    }

    // Book the seats
    int bookedSoFar = 0;
    for (int i = 4; i < 12; i++) {
        for (int j = 0; j < cols; j++) {
            if (Seats[i][j] == 0 && bookedSoFar < noOfSeats) {
                Seats[i][j] = 1;
                bookedSoFar++;
            }
        }
    }
    return true;
}*/
// Function to reset all seats back to 0

/*bool systemReset(int Seats[][7], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Seats[i][j] = 0; // Clear out the reservation
        }
    }
    return true;
}*/
