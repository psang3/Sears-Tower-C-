//Project is to build Sears Tower in C++
//Author: Pathik Sangani
// Date: Sep 9, 2024

//My Art
//     ____
//    /    \\ 
//   |  0 0 |
//   |   ^  |
//   \\____/
//     (__)  
//      ||   


#include <iostream>
#include <iomanip>

using namespace std;

//Function to display original art
void Art(){
    cout << "Your original art:" << endl;
    cout << "  ____  " << endl;
    cout << " /    \\ " << endl;
    cout << "|  0 0 |" << endl;
    cout << "|   ^  |" << endl;
    cout << " \\____/" << endl;
    cout << "  (__)  " << endl;
    cout << "   ||  " << endl;
}

//Function to display Sears Tower
void displaySearsTower(int size){
    string top(size, '_');
    string symbol(size, '#');
    string space(size, ' ');

    //Top Layer of Tower
    cout << string(size + 2,' ') << top << endl;
    cout << setw(size + 2) << "|" << symbol << "|" << endl;
    for (int i = 2; i < size; i++){
        cout << " " << space << "|" << space << "|" << endl;
    }

    //Middle Layer of Tower
    cout << " " << top << "|" << space << "|" << endl;
    cout << "|" << symbol << "|" << symbol << "|" << endl;
    for (int i = 2; i < size; i++){
        cout << "|" << space << "|" << space << "|" << endl;
    }

    //Bottom Layer of Tower
    cout << "|" << space << "|" << space << "|" << top << endl;
    cout << "|" << symbol << "|" << symbol << "|" << symbol << "|" << endl;
    for (int i = 0; i<(size * 2)-1; i++){
        cout << "|" << space << "|" << space << "|" << space << "|" << endl;
    }

    //Base Layer of Tower
    int baseLength = 3 * size + 4;
    cout << string(baseLength, '=') << endl;
}

int main() {
    int choice;
    // The menu output. Don't modify this, so that it outputs exactly as expected
    cout << "Program 1: Sears Tower" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Sears Tower" << endl;
    cin >> choice;
    cout << "Your choice: ";
    
    //Art
    if (choice == 1){
        Art();
    }

    //Sears Tower
    else if(choice == 2){
        int size;
        cout << "What is the size of the Sears Tower? ";
        cin >> size;

        if(choice < 2){
            cout << "Size must be greater than 2" << endl;
        } else {
            displaySearsTower(size);
        }
    } else {
        cout << "Invalid Choice." << endl;
    }
    return 0;
    
}