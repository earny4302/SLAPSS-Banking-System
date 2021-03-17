
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
    //variables regaring LOANS ends

    //function prototype regarding BASICS starts from here
    int login_check(char arr1[50],char arr2[50],int i){
        if(strcmp(arr[50],login_user)==1){
            if(strcmp(arr2[50],login_pass)==1){
                return int i;
            }
        }
        else 
            return -1;
    }
    void first_window();
    void get_det();
    void change_det();
    void deposit();
    void show_bal();
    int check_pin();
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

// functions defination regarding BASICS starts here
void account::first_window()
{
    system("CLS");
    
    int choice;
    do
    {
        cout << "\n HOW CAN WE HELP YOU:-";
        cout << "\n 01.CHANGE DETAILS";
        cout << "\n 02.DEPOSIT MONEY";
        cout << "\n 03.CHECK BALANCE";
        cout << "\n 04.APPLY FOR LOAN";
        cout << "\n 05.PAY TO MERCHANT";
        cout << "\n 06.TRANSFER FUNDS";
        cout << "\n 07.INSURANCE";
        cout << "\n 08.DONATION";
        cout << "\n 09.INVEST";
        cout << "\n 10.PAY TAXES";
        cout << "\n 11.TALK TO CUSTOMER CARE";
        cout << "\n 12.BACK TO MAIN MENU";
        cout << "\n 13.EXIT PROGRAM"
        cout << "\n ENTER YOUR CHOICE(1-6):-";
        cin >> choice;

        switch (choice)
        {
        case 1:
            change_det();
            break;
        case 2:
            deposit();
            break;
        case 3:
            show_bal();
            break;
        case 4:
            loan_into();
            break;
        case 5:
            pay();
            break;
        case 6:
            transfer_fund();
            break;
        case 7:
            insurance_intro();
            break;
        case 8:
            donate_intro();
            break;
        case 9:
            cout << "ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        case 10:
            cout << "ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        case 11:
            cout<<"\n WE ARE HERE FOR YOU 24*7";
            cout<<"\n CONTACT US ON 7999538548";
            getch();
            break;
         case 12:
            break;
         case 13:
            exit(0);
            break;

        default:
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice > 13);


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
            cout << "\n ENTER NAME:-\t";
            gets(my_name);
            break;
        case 2:
            cout << "\n ENTER FATHER'S NAME:-\t";
            gets(father_n);
            break;
        case 3:
            cout << "\n ENTER MOTHER'S NAME:-\t";
            gets(mother_n);
            break;
        case 4:
            cout << "\n ENTER MOBILE NUMBER:-\t";
            cin >> mob_no;
            break;
        case 5:
            cout << "\n ENTER ADDHAR NO.:-\t";
            cin >> addhar_no;
            break;
        case 6:
            cout << "\n ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        default:
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice > 6);
};
void account::show_bal()
{
    system("CLS");
    cout << "\n YOUR CURRENT BALANCE IS:- "<<acc_bal; 
    getch();   
}
int account::check_pin()
{

}
void account::deposit()
{
    system("CLS");
    cout << "\n ENTER THE AMOUNT TO BE DEPOSITED";

}
//functions defination regarding BASICS ends here

//functioms definations regarding PAYMENTS starts from here
void account::pay()
{
    int choice;
    do
    {
        cout << "\n WHICH BILL YOU WANT TO PAY:-" ;
        cout << "\n 01.ELECTRICITY";
        cout << "\n 02.WATER";
        cout << "\n 03.DTH";
        cout << "\n 04.PREPAID MOBILLE";
        cout << "\n 05.FASTAG";
        cout << "\n 06.MERCHANT PAYMENT";
        cout << "\n 07.BOOK TRAIN";
        cout << "\n 08.BOOK BUS";

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
            show_bal();
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
void account::loan_into()
{
    int choice;
    do
    {
        cout << "\n FOLLOWING LOAN ARE AVAILABLE IN OUR BANK:-"  ;
        cout << "\n 01.HOME LOAN" ;
        cout << "\n 02.VEHICLE LOAN";
        cout << "\n 03.GOLD LOAN";
        cout << "\n 04.EDUCATION LOAN";
        cout << "\n 05.EMI";
        cout << "\n 06.AGRICULTURE LOAN";
        cout << "\n 07.YOUR CURRENT LOAN" ;

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
            cout << "\n WRONG CHOICE";
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
//functions defination regarding LOAN ends here

//functions defination regarding INSURANCE starts from here

//functions defination regarding INSURANCE end here
//function defination regarding DONATION starts here
void donate_pay()
{
    int amount, total; // total is the fund collected till date
    long acc_bal = 10000;
    cout << "\n Enter the amount :";
    cin >> amount;
    if (acc_bal >= amount)
    {
        cout << "\n YOUR TRANSACTION IS SUCCESSFUL";
        acc_bal = acc_bal - amount;
        total = total + amount;
        //add show balance
        getch();
    }
    if (acc_bal < amount)
    {
        cout << "\n INSUFFIECIENT BALANCE";
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
    int current_no=-50;
    char check_user[50];
    char check_pass[50];
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
            system("CLS");
            cout << "\n ENTER YOUR USER NAME:-\t";
            gets(check_user);
            cout << "\n ENTER YOUR PASSWORD:-\t";
            gets(check_pass);
            for(int i=0;i<opening_no;i++)
            {
                int x=customer[i].login_check(check_user[50],check_pass[50],i)
                if(x!=-1){
                    current_no=i;
                    break;
                }
            }
            if(current_no!=-50){
                customer[current_no].first_window();
            }
            if(current_no==-50){
                system("CLS");
                cout << "\n WRONG USERNAME OR PASSWORD";    
                getch();            
            }
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