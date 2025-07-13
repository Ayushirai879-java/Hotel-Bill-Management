#include <iostream>
using namespace std;

int main() {
    int choice, itemChoice, quantity;
    float totalBill = 0;
    float payBill=0;
    char continueOrdering;

    do {
        cout << "====== Hotel Menu ======" << endl;
        cout << "1. Vegetarian Menu" << endl;
        cout << "2. Non-Vegetarian Menu" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n-- Vegetarian Menu --" << endl;
                cout<<"1.Veg biryani-100Rs \n2.Veg Pulav-120Rs \n3.Paneer Butter Masala-110Rs \n4.Shahi Paneer-90Rs \n5.Veg thali-159Rs \n6.South Indian Thali-160Rs"<<endl;
                cout << "Select an item: ";
                cin >> itemChoice;
                cout << "Enter quantity: ";
                cin >> quantity;

                switch (itemChoice) {
                    case 1: totalBill += 100 * quantity; break;
                    case 2: totalBill += 120 * quantity; break;
                    case 3: totalBill += 110 * quantity; break;
                    case 4: totalBill += 90 * quantity; break;
                    case 5: totalBill += 159 * quantity; break;
                    case 6: totalBill += 160 * quantity; break;
                    default: cout << "Invalid item choice!" << endl; break;
                }
                break;

            case 2:
                cout << "\n-- Non-Vegetarian Menu --" << endl;
                cout<<"1.Chicken biryani-120Rs \n2.Egg Pulav-100Rs \n3.Butter Chicken-150Rs \n4.Chicken Masala-160Rs \n5.Non-Veg thali-199Rs \n6.Special Mutton Thali-250Rs"<<endl;
                cout << "Select an item: ";
                cin >> itemChoice;
                cout << "Enter quantity: ";
                cin >> quantity;

                switch (itemChoice) {
                    case 1: totalBill += 120 * quantity; break;
                    case 2: totalBill += 100 * quantity; break;
                    case 3: totalBill += 150 * quantity; break;
                    case 4: totalBill += 160 * quantity; break;
                    case 5: totalBill += 199 * quantity; break;
                    case 6: totalBill += 250 * quantity; break;
                    default: cout << "Invalid item choice!" << endl; break;
                }
                break;

            default:
                cout << "Invalid menu choice!" << endl;
        }

        cout << "\nDo you want to order another item? (y/n): ";
        cin >> continueOrdering;

    } while (continueOrdering == 'y' || continueOrdering == 'Y');

    cout << "\n====== Bill Summary ======" << endl;
    cout << "Total Amount: Rs. " << totalBill << endl;
    if(totalBill<=1000){
    	payBill=0.05*totalBill+totalBill;
    }
    else if(totalBill<=3500){
    	payBill=0.1*totalBill+totalBill;
    }
    else{
    	payBill=0.15*totalBill+totalBill;
    }
    cout<<"You Payable amount with included GST : Rs."<<payBill<<endl;
    cout << "Thank you for visiting! \nHave a nice day!!" << endl;

    return 0;
}

