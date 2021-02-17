#include <iostream>

using namespace std;
int main() {
        std::string manual;
        std::string userName;
        std::string intro;
        int userClass;
        cout << "Welcome to Mako, a short text based adventure game written in all C++. There isnt a manual yet or there might never be one. This game is pretty simple. All you need to know is how (Y/N) questions work. Speaking of... " << endl;
        cout << "When a Yes or No question is asked (Y/N) please answer with a Y/N. Do you understand? (Y/N)" << endl;
        cin >> intro;
        if (intro == "Y") {
        cout << "Great! You understand!" << endl;
        } else if (intro == "y") {
	cout << "Great! You understand! To be safe it is advised you make things exactly how they were displayed. ";       
	} else {
        cout << "Please read it again and then continue" << endl;
        }
        cout << "What is your name? " << endl;
        cin >> userName;
        cout << "Hello there " << userName << endl;
        cout << "Please select a class and enter the number next to it" << endl;
        cout << "1 - Merchant" << endl;
        cout << "2 - Swordsman" << endl;
        cout << "3 - Rock" << endl;
        cin >> userClass;
        switch (userClass)
        {
                case 1:
                        cout << "You are now a Merchant. " << userName << " the Merchant. Sounds pretty good." << endl;
                        break;
                case 2:
                        cout << "You are now a Swordsman. " << userName << " the Swordsman. Sounds menacing." << endl;
                        break;
                case 3:
                        cout << "You are now a rock. Your journey ends here" << endl;
                        break;
                default:
                        cout << "There has been an error. Please restart the game" << endl;
}
}
