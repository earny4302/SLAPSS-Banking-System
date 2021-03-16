
#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
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
    std::cout << "\n ENTER YOUR NAME:-\t";
    gets(my_name);
    std::cout << "\n ENTER YOUR FATHER'S NAME:-\t";
    gets(father_n);
    std::cout << "\n ENTER YOUR MOTHER'S NAME:-\t";
    gets(mother_n);
    std::cout << "\n ENTER YOUR PERMANENT ADDRESS:-\t";
    gets(mother_n);
    std::cout << "\n ENTER YOUR MOBILE NUMBER:-\t";
    std::cin >> mob_no;
    std::cout << "\n ENTER YOUR ADDHAR NUMBER:\t-";
    std::cin >> addhar_no;
    std::cout << "\n ENTER YOUR NOMINEE:-\t";
    gets(nominee);
    std::cout << "\n ENTER YOUR USERNAME FOR LOGIN:-\t";
    gets(login_user);
    std::cout << "\n ENTER YOUR PASSWORD FOR LOGIN:-\t";
    gets(login_pass);    
    std::cout << "\n SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-\t";
    std::cin >> pin_no;

};
void account::change_det()
{
    int choice;
    do
    {
        std::cout << "\n WHAT YOU WANT TO CHANGE:-";
        std::cout << "\n 01.NAME";
        std::cout << "\n 02.FATHER'S NAME";
        std::cout << "\n 03.MATHER'S NAME";
        std::cout << "\n 04.MOBILE NO.";
        std::cout << "\n 05.ID NUMBER";
        std::cout << "\n 06.PIN NO";
        std::cout << "\n ENTER YOUR CHOICE(1-6):-";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\nENTER NAME:-\t";
            gets(my_name);
            break;
        case 2:
            std::cout << "\nENTER FATHER'S NAME:-\t";
            gets(father_n);
            break;
        case 3:
            std::cout << "\nENTER MOTHER'S NAME:-\t";
            gets(mother_n);
            break;
        case 4:
            std::cout << "\nENTER MOBILE NUMBER:-\t";
            std::cin >> mob_no;
            break;
        case 5:
            std::cout << "\nENTER ADDHAR NO.:-\t";
            std::cin >> addhar_no;
            break;
        case 6:
            std::cout << "ENTER PIN NO:-\t";
            std::cin >> pin_no;
            break;
        default:
            std::cout << "\nWRONG CHOICE";
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
        std::cout << "\nWHICH BILL YOU WANT TO PAY:-" ;
        std::cout << "01.ELECTRICITY";
        std::cout << "02.WATER";
        std::cout << "03.DTH";
        std::cout << "04.PREPAID MOBILLE";
        std::cout << "05.FASTAG";
        std::cout << "06.MERCHANT PAYMENT";
        std::cout << "07.BOOK TRAIN";
        std::cout << "08.BOOK BUS";

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
    std::cout << "ENTER YOUR IVRS NO.:-\t";
    std::cin >> ivrs_no;
    std::cout << "\nENTER THE AMOUNT TO BE PAID:-\t";
    std::cin >> amount;
    std::cout << "\nENTER YOUR PIN NO:-\t";
    std::cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            std::cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            //add show balance
            getch();
        }
        if (acc_bal < amount)
        {
            std::cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        std::cout << "WRONG PIN";
        getch();
    }
}
void account::water_pay()
{
    int amount;
    int pin1;
    long id_no;
    std::cout << "ENTER YOUR ID_NO:-\t";
    std::cin >> id_no;
    std::cout << "ENTER AMOUNT TO PAID:-\t";
    std::cin >> amount;
    std::cout << "ENTER PIN NO.:-\t";
    std::cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            std::cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            std::cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        std::cout << "WRONG PIN";
        getch();
    }
}
void account::dth_pay()
{
    int amount;
    long setupbox_no;
    int pin1;
    std::cout << "ENTER YOUR SETUP BOX NO:-\t";
    std::cin >> setupbox_no;
    std::cout << "ENTER AMOUNT TO PAID:-\t";
    std::cin >> amount;
    std::cout << "ENTER PIN NO.:-\t";
    std::cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            std::cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            std::cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        std::cout << "WRONG PIN";
        getch();
    }
}
void account::premobile_pay()
{
    int mobile_no;
    int amount;
    int pin1;

    std::cout << "ENTER YOUR MOBILE NO:-\t";
    std::cin >> mobile_no;
    std::cout << "ENTER AMOUNT TO PAID:-\t";
    std::cin >> amount;
    std::cout << "ENTER PIN NO.:-\t";
    std::cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            std::cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            std::cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        std::cout << "WRONG PIN";
        getch();
    }
}
void account::fastag_pay()
{
    int fastag_no;
    int amount;
    int pin1;

    std::cout << "ENTER YOUR FASTAG CARD NO:-\t";
    std::cin >> fastag_no;
    std::cout << "ENTER AMOUNT TO PAID:-\t";
    std::cin >> amount;
    std::cout << "ENTER PIN NO.:-\t";
    std::cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            std::cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            std::cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        std::cout << "WRONG PIN";
        getch();
    }
}
void account::merchant_pay()
{
    int shop_no;
    int amount;
    int pin1;

    std::cout << "ENTER SHOP ID NO:-\t";
    std::cin >> shop_no;
    std::cout << "ENTER AMOUNT TO PAID:-\t";
    std::cin >> amount;
    std::cout << "ENTER PIN NO.:-\t";
    std::cin >> pin1;
    if (pin1 == pin_no)
    {
        if (acc_bal >= amount)
        {
            std::cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            acc_bal = acc_bal - amount;
            getch();
        }
        if (acc_bal < amount)
        {
            std::cout << "INSUFFIECIENT BALANCE";
            getch();
        }
    }
    if (pin1 != pin_no)
    {
        std::cout << "WRONG PIN";
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
        std::cout << "FOLLOWING LOAN ARE AVAILABLE IN OUR BANK:-"  ;
        std::cout << "01.HOME LOAN" ;
        std::cout << "02.VEHICLE LOAN";
        std::cout << "03.GOLD LOAN";
        std::cout << "04.EDUCATION LOAN";
        std::cout << "05.EMI";
        std::cout << "06.AGRICULTURE LOAN";
        std::cout << "07.YOUR CURRENT LOAN" ;

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
            std::cout << "\nWRONG CHOICE";
            getch();
        }

    } while (choice > 9);
}
void account::home_loan()
{
    std::cout << "\n HOME LOAN";
    std::cout << "\n ENTER LOCATION OF HOME FOR WHICH YOU NEED LOAN:-";
    gets(homeloan_newadd);
    std::cout << "\n ENTER YOUR CURRENT INCOME:- \t";
    std::cin >> current_income;
    std::cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
    std::cin >> homeloan_principal;
    std::cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
    std::cin >> homeloan_time;
}
//functions defination regarding LOAN ends here

//functions defination regarding INSURANCE starts from here

//functions defination regarding INSURANCE end here
//function defination regarding DONATION starts here
void donate_pay()
{
    int amount, total; // total is the fund collected till date
    long acc_bal = 10000;
    std::cout << "Enter the amount :";
    std::cin >> amount;
    if (acc_bal >= amount)
    {
        std::cout << "YOUR TRANSACTION IS SUCCESSFUL \n";
        acc_bal = acc_bal - amount;
        total = total + amount;
        //add show balance
        getch();
    }
    if (acc_bal < amount)
    {
        std::cout << "INSUFFIECIENT BALANCE \n";
        getch();
    }
}

void donatef1() // function for donatiion in cm fund
{
    int df1;
    int total = 505000;
    std::cout << "   CM Relief Fund \n";
    std::cout << "1). Donate \n";
    std::cout << "2). See how many people have donated till date \n";
    std::cout << "3). See the amount money donated till date \n";
    std::cout << "Press a number \n";
    std::cin >> df1;

    if (df1 == 1)
    {
        donate_pay();
    }
    else if (df1 == 2)
    {
        std::cout << "1,200+ people have donated till date \n";
    }
    else if (df1 == 3)
    {
        std::cout << total << " Rs have been donated till date \n";
    }
    else
    {
        std::cout << "Invalid input \n";
    }
}

void donatef2() // donation in pm fund
{
    int df2, total = 1070000;
    std::cout << "   PM Relief Fund \n";
    std::cout << "1). Donate \n";
    std::cout << "2). See how many people have donated till date \n";
    std::cout << "3). See the amount money donated till date \n";
    std::cout << "Press a number \n";
    std::cin >> df2;

    if (df2 == 1)
    {
        donate_pay();
    }
    else if (df2 == 2)
    {
        std::cout << "2,200+ people have donated till date \n";
    }
    else if (df2 == 3)
    {
        std::cout << total << " Rs have been donated till date \n";
    }
    else
    {
        std::cout << "Invalid input \n";
    }
}
void donatef3() //function for donation in army charity fund
{
    int df3, total = 2505000;
    std::cout << "   Army Charity Fund \n";
    std::cout << "1). Donate \n";
    std::cout << "2). See how many people have donated till date \n";
    std::cout << "3). See the amount money donated till date \n";
    std::cout << "Press a number \n";
    std::cin >> df3;

    if (df3 == 1)
    {
        donate_pay();
    }
    else if (df3 == 2)
    {
        std::cout << "5,600+ people have donated till date \n";
    }
    else if (df3 == 3)
    {
        std::cout << total << " Rs have been donated till date \n";
    }
    else
    {
        std::cout << "Invalid input \n";
    }
}

void account::donatef4() //Function df4 for Donation in slapps charity fund
{
    int df4, total = 250000;
    std::cout << "   SLAPPS Charity Fund \n";
    std::cout << "1). Donate \n";
    std::cout << "2). See how many people have donated till date \n";
    std::cout << "3). See the amount money donated till date \n";
    std::cout << "Press a number \n";
    std::cin >> df4;

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
    std:cout << "2). Exit \n";
    std::cin >> choose;
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
        std::cout << "\n\t\t\t\t\t\t\t\t\t\tWELCOME TO SLAPPS BANK";
        std::cout << "\n MAIN MENU:-";
        std::cout << "\n 01.NEW COUSTOMER";
        std::cout << "\n 02.LOGIN";
        std::cout << "\n 03.EXIT";

        std::cout << "\n ENTER YOUR CHOICE(1-3):-";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            //customer[opening_no++].get_det();
            customer[0].get_det();
            break;

        case 2:
            customer[0].first_window();
            break;

        case 3:
            break;

        default:
            std::cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice > 2);

    return 0;
}