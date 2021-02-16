#include <iostream>
#include <conio.h>
#include <string>
#include<stdlib.h>
using namespace std;

class pre_card
{
public:
    char my_name[60];
    char father_n[60];
    char mother_n[60];
    long mob_no;
    long id_no;
    int pin_no;
    void intro();
    void get_det();
    void change_det();
    void deposit();
    void credit(int m);
    void show_bal();
};
void pre_card::intro()
{   int choice;
    do{
          std::cout<<""<<endl;
        std::cout<<"01.APPLY FOR NEW CARD"<<endl;
        std::cout<<"02.CHANGE DETAILS"<<endl;
        std::cout<<"03.DEPOSIT MONEY"<<endl;
        std::cout<<"04.CHECK BALANCE"<<endl;
        std::cout<<"05.RETURN TO PREVIOUS MENU"<<endl;
        std::cout<<"ENTER YOUR CHOICE(1-6):-"<<endl;
        std::cin>>choice;

        switch(choice){
            case 1:
                    get_det();
                break;
            case 2:
                    change_det();
                break;
            case 3:
                    deposit();
                break;
             case 4:
                    show_bal();
                break;
            case 5:
                break;
            
            default:
                std::cout<<"WRONG CHOICE"<<endl;
                getch();
        }

    }while(choice>5);
}
void pre_card::get_det()
{
    std::cout << "ENTER YOUR NAME:-" << endl;
    gets(my_name);
    std::cout << "ENTER YOUR FATHER'S NAME:-" << endl;
    gets(father_n);
    std::cout << "ENTER YOUR MOTHER'S NAME:-" << endl;
    gets(mother_n);
    std::cout << "ENTER YOUR MOBILE NUMBER:-" << endl;
    std::cin >> mob_no;
    std::cout << "ENTER YOUR ID NUMBER:-" << endl;
    std::cin >> id_no;
    std::cout << "SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-" << endl;
    std::cin >> pin_no;
};

void pre_card::change_det()
{
    int choice;
    do
    {
        std::cout<<"WHAT YOU WANT TO CHANGE:-"<<endl;
        std::cout<<"01.NAME"<<endl;
        std::cout<<"02.FATHER'S NAME"<<endl;
        std::cout<<"03.MATHER'S NAME"<<endl;
        std::cout<<"04.MOBILE NO."<<endl;
        std::cout<<"05.ID NUMBER"<<endl;
        std::cout<<"06.PIN NO"<<endl;
        std::cout<<"ENTER YOUR CHOICE(1-6):-"<<endl;
        std::cin>>choice;

        switch(choice){
            case 1:
                std::cout<<"ENTER NAME:-"<<endl;
                gets(my_name);
                break;
            case 2:
                std::cout<<"ENTER FATHER'S NAME:-"<<endl;
                gets(father_n);
                break;
            case 3:
                std::cout<<"ENTER MOTHER'S NAME:-"<<endl;
                gets(mother_n);
                break;
            case 4:
                std::cout<<"ENTER MOBILE NUMBER:-"<<endl;
                std::cin>>mob_no;
                break;
            case 5:
                std::cout<<"ENTER ID NO.:-"<<endl;
                std::cin>>id_no;
                break;
            case 6:
                std::cout<<"ENTER PIN NO:-"<<endl;
                std::cin>>pin_no;
                break;
            default:
                std::cout<<"WRONG CHOICE"<<endl;
                getch();
        }
    } while (choice>6);
};

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