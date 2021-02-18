#priyanshu
#include <iostream>
#include <conio.h>
#include <string>
#include<stdlib.h>
using namespace std;
class account
{
public:
    char my_name[60];
    char father_n[60];
    char mother_n[60];
    char address[120];
    char  nominee[60];
    long mob_no;
    long addhar_no;
    char login_user[10];
    long long login_pass;
    int pin_no;
    long long acc_bal;

    void get_det();
    void change_det();
    void deposit();
    void credit();
    void show_bal();
    void pay(int);
    void electricity_pay();
    void water_pay();
};

void account::get_det()
{
    cout << "ENTER YOUR NAME:-" <<endl;
    gets(my_name);
    cout << "ENTER YOUR FATHER'S NAME:-" << endl;
    gets(father_n);
    cout << "ENTER YOUR MOTHER'S NAME:-" << endl;
    gets(mother_n);
    cout << "ENTER YOUR MOBILE NUMBER:-" << endl;
    cin >> mob_no;
    cout << "ENTER YOUR ID NUMBER:-" << endl;
    cin >> addhar_no;
    cout << "SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-" << endl;
    cin >> pin_no;
};

void account::change_det()
{
    int choice;
    do
    {
        cout<<"WHAT YOU WANT TO CHANGE:-"<<endl;
        cout<<"01.NAME"<<endl;
        cout<<"02.FATHER'S NAME"<<endl;
        cout<<"03.MATHER'S NAME"<<endl;
        cout<<"04.MOBILE NO."<<endl;
        cout<<"05.ID NUMBER"<<endl;
        cout<<"06.PIN NO"<<endl;
        cout<<"ENTER YOUR CHOICE(1-6):-"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"ENTER NAME:-"<<endl;
                gets(my_name);
                break;
            case 2:
                cout<<"ENTER FATHER'S NAME:-"<<endl;
                gets(father_n);
                break;
            case 3:
                cout<<"ENTER MOTHER'S NAME:-"<<endl;
                gets(mother_n);
                break;
            case 4:
                cout<<"ENTER MOBILE NUMBER:-"<<endl;
                cin>>mob_no;
                break;
            case 5:
                cout<<"ENTER ADDHAR NO.:-"<<endl;
                cin>>addhar_no;
                break;
            case 6:
                cout<<"ENTER PIN NO:-"<<endl;
                cin>>pin_no;
                break;
            default:
                cout<<"WRONG CHOICE"<<endl;
                getch();
        }
    } while (choice>6);
};
void account::pay(int i)
{   int choice;
    do{
        cout<<"WHICH BILL YOU WANT TO PAY:-"<<endl;
        cout<<"01.ELECTRICITY"<<endl;
        cout<<"02.WATER"<<endl;
        cout<<"03.DTH"<<endl;
        cout<<"04.PREPAID MOBILLE"<<endl;
        cout<<"05.FASTAG"<<endl;
        cout<<"06.MEACHANT PAYMENT"<<endl;
        cout<<"07.BOOK TRAIN"<<endl;
        cout<<"08.BOOK BUS"<<endl;

        switch(choice)
        { 
            case 1:
                customer[i].electricity_pay();
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
                 
        }

    }while(choice>9);
};

int main()
{   
    account customer[100];
    int opening_no=0;
    int current_no;
    int choice;
    do
    {
        cout << "\t\t\t\t\t\t\t\t\t\tWELCOME TO SLAPPS BANK" << endl;
        cout << "MAIN MENU:-" << endl;
        cout << "01.NEW COUSTOMER" << endl;
        cout << "02.LOGIN" << endl;
        cout << "03.EXIT" << endl;
       

        cout << "ENTER YOUR CHOICE(1-3):-" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            customer[opening_no++].get_det();
            break;

        case 2:
          
            break;
        
        case 3: 
            exit(0);


        default:
            cout << "WRONG CHOICE" << endl;
            getch();
        }
    } while (choice >2);

    return 0;
}