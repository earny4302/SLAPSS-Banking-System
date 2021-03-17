
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
    char login_user[50];
    char login_pass[50];
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
    //variables regarding vehicle loan starts
    char vehicle_model[100];
    char vehicle_info[500];
    int vehicleloan_time;
    long vehicleloan_principal;
    //variables regarding vehicle loan ends
    //variables regarding gold loan starts
    float gold_amount;
    float goldloan_value;
    int goldloan_time;
    //variables regarding gold loan ends
    //variables regarding education loan starts
    char edu_field[100];
    char edu_info[500];
    int edu_duration;
    long edu_fee;
    int edu_time;
    //variables regarding education loan ends
    //varialbes regarding agricultural loan starts
    char agri_crop[200];
    char agri_info[800];
    float agri_area;
    long agri_amount;
    int agri_time;
    //varialbes regarding agricultural loan ends
    //variables regaring LOANS ends

    //function prototype regarding BASICS starts from here
    void first_window();
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
    void life_insurance();
    void car_insurance();
    void health_insurance();

    // functions prototype regarding INSURANCE end here
    //function prototype regarding DONATION starts here
    void donate_pay();
    void donatef1();
    void donatef2();
    void donatef3();
    void donatef4();
    void donate_intro();
    //function prototype regarding DONATION ends here 
};
void account::first_window()
{

}

void account::get_det()
{
    cout << "\n ENTER YOUR NAME:-\t";
    gets(my_name);
    cout << "\n ENTER YOUR FATHER'S NAME:-\t";
    gets(father_n);
    cout << "\n ENTER YOUR MOTHER'S NAME:-\t";
    gets(mother_n);
    cout << "\n ENTER YOUR PERMANENT ADDRESS:-\t";
    gets(mother_n);
    cout << "\n ENTER YOUR MOBILE NUMBER:-\t";
    cin >> mob_no;
    cout << "\n ENTER YOUR ADDHAR NUMBER:\t-";
    cin >> addhar_no;
    cout << "\n ENTER YOUR NOMINEE:-\t";
    gets(nominee);
    cout << "\n ENTER YOUR USERNAME FOR LOGIN:-\t";
    gets(login_user);
    cout << "\n ENTER YOUR PASSWORD FOR LOGIN:-\t";
    gets(login_pass);    
    cout << "\n SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-\t";
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
            cout << "\nENTER NAME:-\t";
            gets(my_name);
            break;
        case 2:
            cout << "\nENTER FATHER'S NAME:-\t";
            gets(father_n);
            break;
        case 3:
            cout << "\nENTER MOTHER'S NAME:-\t";
            gets(mother_n);
            break;
        case 4:
            cout << "\nENTER MOBILE NUMBER:-\t";
            cin >> mob_no;
            break;
        case 5:
            cout << "\nENTER ADDHAR NO.:-\t";
            cin >> addhar_no;
            break;
        case 6:
            cout << "ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        default:
            cout << "\nWRONG CHOICE";
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
        cout << "\nWHICH BILL YOU WANT TO PAY:-" ;
        cout << "01.ELECTRICITY";
        cout << "02.WATER";
        cout << "03.DTH";
        cout << "04.PREPAID MOBILLE";
        cout << "05.FASTAG";
        cout << "06.MERCHANT PAYMENT";
        cout << "07.BOOK TRAIN";
        cout << "08.BOOK BUS";

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
void account::merchant_pay()
{
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
void account::loan_intro()
{
    int choice;
    do
    {
        cout << "FOLLOWING LOAN ARE AVAILABLE IN OUR BANK:-"  ;
        cout << "01.HOME LOAN" ;
        cout << "02.VEHICLE LOAN";
        cout << "03.GOLD LOAN";
        cout << "04.EDUCATION LOAN";
        cout << "05.AGRICULTURE LOAN";
        cout << "06.YOUR CURRENT LOAN" ;

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
            agri_loan();
            break;
        default:
            cout << "\nWRONG CHOICE";
            getch();
        }

    } while (choice > 9);
}
void account::home_loan()
{
    cout << "\n HOME LOAN";
    cout << "\n ENTER LOCATION OF HOME FOR WHICH YOU NEED LOAN:-";
    gets(homeloan_newadd);
    cout << "\n ENTER YOUR CURRENT INCOME:- \t";
    cin >> current_income;
    cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
    cin >> homeloan_principal;
    cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
    cin >> homeloan_time;
}
void account::vehicle_loan()
{
    cout << "\n VEHICLE LOAN";
    cout << "\n ENTER THE MODEL OF THE VEHICLE";
    gets(vehicle_model);
    cout << "\n ENTER THE VEHICLE INFORMATION";
    gets(vehicle_info);
    cout << "\n ENTER YOUR CURRENT INCOME:- \t";
    cin >> current_income;
    cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
    cin >> vehicleloan_principal;
    cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
    cin >> vehicleloan_time;
    //cout << "\n DO YOU WANT VEHICLE INSURANCE";
}
void account::gold_loan()
{
    cout << "\n GOLD LOAN";
    cout << "\n CURRENT PRICE OF GOLD :-";
    cout << "\n Rs.46,000 per 10gram";
    cout << "\n ENTER THE AMOUNT OF GOLD YOU ARE LENDING(IN GRAM)";
    cin >> gold_amount;
    cout << "\n THE RATE OF INTEREST IS 5%"
    goldloan_value = gold_amount*4370
    cout << "\n THE AMOUNT YOU GET FROM LENDING THE GOLD:- \t" << goldloan_value ;
    cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO REPAY THE AMOUNT:-";
    cin >> goldloan_time;
}
void account::edu_loan()
{
    cout << "\n EDUCATION LOAN";
    cout << "\n ENTER YOUR FIELD OF EDUCATION";
    gets(edu_field);
    cout << "\n ENTER YOUR EDUCTION COURSE INFORMATION";
    gets(edu_info);
    cout << "\n ENTER COURSE DURATION(IN MONTHS)";
    cin >> edu_duration;
    cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
    cin >> edu_fee;
    cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
    cin >> edu_time;
}
void account::agri_loan()
{
    cout << "\n AGRICULTURE LOAN";
    cout << "\n ENTER THE CORPS GROWN IN THE FIELD";
    gets(agri_crop);
    cout << "\n ENTER THE INFO OF CROPS AND FIELD";
    gets(agri_info);
    cout << "\n ENTER YOUR AREA OF THE FIELD";
    cin >> agri_area;
    cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
    cin >> agri_amount;
    cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
    cin >> agri_time;
}
//functions defination regarding LOAN ends here

//functions defination regarding INSURANCE starts from here

//functions defination regarding INSURANCE end here
//function defination regarding DONATION starts here
void donate_pay()
{
    int amount, total; // total is the fund collected till date
    long acc_bal = 10000;
    cout << "Enter the amount :";
    cin >> amount;
    if (acc_bal >= amount)
    {
        cout << "YOUR TRANSACTION IS SUCCESSFUL \n";
        acc_bal = acc_bal - amount;
        total = total + amount;
        //add show balance
        getch();
    }
    if (acc_bal < amount)
    {
        cout << "INSUFFIECIENT BALANCE \n";
        getch();
    }
}

void donatef1() // function for donatiion in cm fund
{
    int df1;
    int total = 505000;
    cout << "   CM Relief Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df1;

    if (df1 == 1)
    {
        donate_pay();
    }
    else if (df1 == 2)
    {
        cout << "1,200+ people have donated till date \n";
    }
    else if (df1 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}

void donatef2() // donation in pm fund
{
    int df2, total = 1070000;
    cout << "   PM Relief Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df2;

    if (df2 == 1)
    {
        donate_pay();
    }
    else if (df2 == 2)
    {
        cout << "2,200+ people have donated till date \n";
    }
    else if (df2 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}
void donatef3() //function for donation in army charity fund
{
    int df3, total = 2505000;
    cout << "   Army Charity Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df3;

    if (df3 == 1)
    {
        donate_pay();
    }
    else if (df3 == 2)
    {
        cout << "5,600+ people have donated till date \n";
    }
    else if (df3 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}

void account::donatef4() //Function df4 for Donation in slapps charity fund
{
    int df4, total = 250000;
    cout << "   SLAPPS Charity Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df4;

    if (df4 == 1)
    {
        donate_pay();
    }
    else if (df4 == 2)
    {
        cout << "500+ people have donated till date \n";
    }
    else if (df4 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}
void account::donate_intro()
{
    int donate, choose;
    do{
    cout << "Donations \n";
    cout << "1). CM Relief Fund \n";
    cout << "2). PM Relief Fund \n";
    cout << "3). Army Charity Fund \n";
    cout << "4). SLAPSS Charity Fund \n";
    cout << "Press a number \n";
    cin >> donate;
    switch (donate)
    {
    case 1:
        donatef1();
         cout << "1). Back to Donation  \n";
    cout << "2). Exit \n";
    cin >> choose;
        break;

    case 2:
        donatef2();
         cout << "1). Back to Donation  \n";
    cout << "2). Exit \n";
    cin >> choose;
        break;

    case 3:
        donatef3();
         cout << "1). Back to Donation  \n";
    cout << "2). Exit \n";
    cin >> choose;
        break;

    case 4:
        donatef4();
         cout << "1). Back to Donation  \n";
    cout << "2). Exit \n";
    cin >> choose;
        break;

    default:
        break;
    }}
    while (choose == 1);
}
//function defination regarding DONATION ends here

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
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice > 2);

    return 0;
}