
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
    //variables regarding loans starts
    //variables regarding home loan starts
    char homeloan_newadd[200];
    long homeloan_principal;
    int homeloan_no;
    long current_income;
    float homeloan_interest;
    int homeloan_time;
    long homeloan_totalamount;
    //variables regarding home loan ends 
    //variables regaring LOANS ends
    
    //function prototype regarding BASICS starts from here
    void get_det();
    void change_det();
    void deposit();
    void credit();
    void show_bal();
    //function prototype regarding BASICS ends here

    //functions prototype regarding PAYMENTS starts from here
    void pay();
    void electricity_pay();
    void water_pay();
    void dth_pay();
    void premobile_pay();
    void fastag_pay();
    void merchant_pay();
    void book_train();
    void book_bus();
    void transfer_fund();
    //functions prototype regarding PAYMENTS end here

    //functions prototype regarding LOAN start from here
    void loan_into();
    void home_loan();
    void vehicle_loan();
    void gold_loan();
    void edu_loan();
    void emi_loan();
    void agri_loan();
    //function prototype regarding LOAN ends here

    //functions prototype regarding INSURANCE starts from here

    // functions prototype regarding INSURANCE end here
};

void account::get_det()
{
    cout << "\n ENTER YOUR NAME:-";
    gets(my_name);
    cout << "\n ENTER YOUR FATHER'S NAME:-";
    gets(father_n);
    cout << "\n ENTER YOUR MOTHER'S NAME:-";
    gets(mother_n);
    cout << "\n ENTER YOUR MOBILE NUMBER:-";
    cin >> mob_no;
    cout << "\n ENTER YOUR ID NUMBER:-";
    cin >> addhar_no;
    cout << "\n SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-";
    cin >> pin_no;
};
void account::change_det()
{
    int choice;
    do
    {
        cout << "\n WHAT YOU WANT TO CHANGE:-";
        cout << "\n 01.NAME";
        cout << "\n 02.FATHER'S NAME";
        cout << "\n 03.MATHER'S NAME";
        cout << "\n 04.MOBILE NO.";
        cout << "\n 05.ID NUMBER";
        cout << "\n 06.PIN NO";
        cout << "\n ENTER YOUR CHOICE(1-6):-";
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

//functioms definations regarding PAYMENTS starts from here
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
        cout << "06.MERCHANT PAYMENT" << endl;
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
            //add show balance
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
//functions definations regarding PAYMENTS ends here

    //functions defination regarding LOAN start from here
void account::loan_into()
{
 int choice;
    do
    {
        cout <<"FOLLOWING LOAN ARE AVAILABLE IN OUR BANK:-" << endl;
        cout << "01.HOME LOAN" << endl;
        cout << "02.VEHICLE LOAN" << endl;
        cout << "03.GOLD LOAN" << endl;
        cout << "04.EDUCATION LOAN" << endl;
        cout << "05.EMI" << endl;
        cout << "06.AGRICULTURE LOAN" << endl;
        cout << "07.YOUR CURRENT LOAN"<<endl;
    

        switch (choice)
        {
        case 1:
            home_loan();
            break;
        case 2:
            vehicle_loan();
            break;
        case 3:
            gold_loan();
            break;
        case 4:
            edu_loan();
            break;
        case 5:
            emi_loan();
            break;
        case 6:
            agri_loan();
            break;
        default:
            cout<<"\nWRONG CHOICE";            
            getch();
        }

    } while (choice > 9);   
}
void account::home_loan()
{  
    cout<<"\n HOME LOAN";
    cout<<"\n ENTER LOCATION OF HOME FOR WHICH YOU NEED LOAN:-";
    gets(homeloan_newadd);
    cout<<"\n ENTER YOUR CURRENT INCOME:- \t";
    cin>>current_income;
    cout<<"\n ENTER THE AMOUNT YOU NEED:-\t";
    cin>>homeloan_principal;
    cout<<"\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
    cin>>homeloan_time;
}
    //functions defination regarding LOAN ends here

    //functions defination regarding INSURANCE starts from here

    //functions defination regarding INSURANCE end here

int main()
{
    account customer[100];
    int opening_no = 0;
    int current_no;
    int choice;
    do
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\tWELCOME TO SLAPPS BANK";
        cout << "\n MAIN MENU:-";
        cout << "\n 01.NEW COUSTOMER";
        cout << "\n 02.LOGIN";
        cout << "\n 03.EXIT";

        cout << "\n ENTER YOUR CHOICE(1-3):-";
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
            cout <<"\n WRONG CHOICE";
            getch();
        }
    } while (choice > 2);

    return 0;
}