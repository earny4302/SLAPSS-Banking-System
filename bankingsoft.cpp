#include <iostream>
#include <conio.h>
#include<string>
using namespace std;

class pre_card{
    char my_name[60];
    char father_n[60];
    long mob_no;
    long id_no;
    int pin_no;

    public:
        void get_det();
        void change_det();
        void deposit();
        void credit(int m);
        void show_bal();
        
};
void get_det(){
    std::cout<<"ENTER YOUR NAME:-"<<endl;
    getline(my_name);
    std::cout<<"ENTER YOUR FATHER'S NAME:-"<<endl;
    std::cout<<"ENTER YOUR MOBILE NUMBER:-"<<endl;
    std::cout<<"ENTER YOUR ID NUMBER:-"<<endl;
    std::cout<<"SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-"<<endl;
    
}


int main()
{
    int choice;

    do
    {
        std::cout << "\t\t\t\t\t\t\t\t\t\tWELCOME TO SLAPPS BANK" << endl;
        std::cout << "MAIN MENU:-" << endl;
        std::cout << "01.GET PREPAID CARD" << endl;
        std::cout << "02.OPEN ACCOUNT" << endl;
        std::cout << "03.CLOSE ACCOUNT" << endl;
        std::cout << "04.CHANGE DETAILS" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;
        std::cout << "" << endl;

        std::cout << "ENTER YOUR CHOICE(1-9):-" << endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:

            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        case 8:
            break;

        case 9:
            break;

        default:
            std::cout << "WRONG CHOICE" << endl;
            getch();
        }
    } while (choice >= 9);

    return 0;
}