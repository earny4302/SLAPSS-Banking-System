
#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;
class account
{
public:
    char my_name[60];
    char father_n[60];
    char mother_n[60];
    char address[120];
    char nominee[60];
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
    void pay();
    void electricity_pay();
    void water_pay();
    void dth_pay();
    void premobile_pay();
    void fastag_pay();
    void merchant_pay();
    void book_train();
    void book_bus();
};

void account::get_det()
{
    cout << "ENTER YOUR NAME:-" << endl;
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
        cout << "WHAT YOU WANT TO CHANGE:-" << endl;
        cout << "01.NAME" << endl;
        cout << "02.FATHER'S NAME" << endl;
        cout << "03.MATHER'S NAME" << endl;
        cout << "04.MOBILE NO." << endl;
        cout << "05.ID NUMBER" << endl;
        cout << "06.PIN NO" << endl;
        cout << "ENTER YOUR CHOICE(1-6):-" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "ENTER NAME:-" << endl;
            gets(my_name);
            break;
        case 2:
            cout << "ENTER FATHER'S NAME:-" << endl;
            gets(father_n);
            break;
        case 3:
            cout << "ENTER MOTHER'S NAME:-" << endl;
            gets(mother_n);
            break;
        case 4:
            cout << "ENTER MOBILE NUMBER:-" << endl;
            cin >> mob_no;
            break;
        case 5:
            cout << "ENTER ADDHAR NO.:-" << endl;
            cin >> addhar_no;
            break;
        case 6:
            cout << "ENTER PIN NO:-" << endl;
            cin >> pin_no;
            break;
        default:
            cout << "WRONG CHOICE" << endl;
            getch();
        }
    } while (choice > 6);
};
void account::pay()
{
    int choice;
    do
    {
        cout << "WHICH BILL YOU WANT TO PAY:-" << endl;
        cout << "01.ELECTRICITY" << endl;
        cout << "02.WATER" << endl;
        cout << "03.DTH" << endl;
        cout << "04.PREPAID MOBILLE" << endl;
        cout << "05.FASTAG" << endl;
        cout << "06.MEACHANT PAYMENT" << endl;
        cout << "07.BOOK TRAIN" << endl;
        cout << "08.BOOK BUS" << endl;

        switch (choice)
        {
        case 1:
            electricity_pay();
            break;
        case 2:
            water_pay();
            break;
        case 3:
            dth_pay();
            break;
        case 4:
            premobile_pay();
            break;
        case 5:
            fastag_pay();
            break;
        case 6:
            merchant_pay();
            break;
        case 7:
            book_train();
            break;
        case 8:
            book_bus();
            break;
        }

    } while (choice > 9);
};
void account::electricity_pay()
{
    int amount;
    long ivrs_no;
    int pin1;
    cout << "ENTER YOUR IVRS NO.:-\t";
    cin >> ivrs_no;
    cout << "\nENTER THE AMOUNT TO BE PAID:-\t";
    cin >> amount;
    cout << "\nENTER YOUR PIN NO:-\t";
    cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        cout << "WRONG PIN";
        getch();
    }
}
void account::water_pay()
{
    int amount;
    int pin1;
    long id_no;
    cout << "ENTER YOUR ID_NO:-\t";
    cin >> id_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    cout << "ENTER PIN NO.:-\t";
    cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        cout << "WRONG PIN";
        getch();
    }
}
void account::dth_pay()
{
    int amount;
    long setupbox_no;
    int pin1;
    cout << "ENTER YOUR SETUP BOX NO:-\t";
    cin >> setupbox_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    cout << "ENTER PIN NO.:-\t";
    cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        cout << "WRONG PIN";
        getch();
    }
}
void account::premobile_pay()
{  
    int mobile_no;
    int amount;
    int pin1;

    cout << "ENTER YOUR MOBILE NO:-\t";
    cin >> mobile_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    cout << "ENTER PIN NO.:-\t";
    cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        cout << "WRONG PIN";
        getch();
    }
}
void account::fastag_pay()
{
    int fastag_no;
    int amount;
    int pin1;

    cout << "ENTER YOUR FASTAG CARD NO:-\t";
    cin >> fastag_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    cout << "ENTER PIN NO.:-\t";
    cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        cout << "WRONG PIN";
        getch();
    }
}
void account::merchant_pay(){
    int shop_no;
    int amount;
    int pin1;

    cout << "ENTER SHOP ID NO:-\t";
    cin >> shop_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    cout << "ENTER PIN NO.:-\t";
    cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        cout << "WRONG PIN";
        getch();
    }
}

int main()
{
    account customer[100];
    int opening_no = 0;
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
            break;

        default:
            cout << "WRONG CHOICE" << endl;
            getch();
        }
    } while (choice > 2);

    return 0;
}