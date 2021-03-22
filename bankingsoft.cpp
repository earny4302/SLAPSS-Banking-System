
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
class account
{
public:
    //std:  char my_name;
    char my_name[50];
    char father_n[50];
    char mother_n[550];
    char address[200];
    char nominee[50];
    long double mob_no;
    long double addhar_no;
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
    int login_check( char arr1[50],    char arr2[50],int i){
        if(strcmp(arr1,login_user)==0){
            if(strcmp(arr2,login_pass)==0){
                return i;
            }
            else 
                return -50;
        }
        else 
            return -50;
    }
    void first_window();
    void show_details();
    void get_det();
    void change_det();
    void deposit();
    void show_bal();
    int check_pin(int);

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
    void insurance_intro();
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
    //functions prototype regarding INVEST starts from here
    void demat_services();
    void saving_funds();
    void pension_funds();
    void gold_funds();
    // functions prototype regarding INVEST end here
    //variables regarding PAY_TAXES starts
    long long salary;
    char pan_number[10];
    //variables regarding PAY_TAXES ends
    void pay_taxes();
};

// functions defination regarding BASICS starts here
void account::first_window()
{
    system("CLS");
    
    int choice;
    do
    {
        cout << "\n HOW CAN WE HELP YOU:-";
        cout << "\n 01.SHOW DETAILS";
        cout << "\n 02.CHANGE DETAILS";
        cout << "\n 03.DEPOSIT MONEY";
        cout << "\n 04.CHECK BALANCE";
        cout << "\n 05.APPLY FOR LOAN";
        cout << "\n 06.PAY TO MERCHANT";
        cout << "\n 07.TRANSFER FUNDS";
        cout << "\n 08.INSURANCE";
        cout << "\n 09.DONATION";
        cout << "\n 10.INVEST";
        cout << "\n 11.PAY TAXES";
        cout << "\n 12.TALK TO CUSTOMER CARE";
        cout << "\n 13.BACK TO MAIN MENU";
        cout << "\n 14.EXIT PROGRAM";
        cout << "\n ENTER YOUR CHOICE(1-6):-";
        cin >> choice;

        switch (choice)
        {
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
            loan_into();
            break;
        case 6:
            pay();
            break;
        case 7:
           // transfer_fund();
            break;
        case 8:
            //insurance_intro();
            break;
        case 9:
            donate_intro();
            break;
        case 10:
            cout << "ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        case 11:
            cout << "ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        case 12:
            cout<<"\n WE ARE HERE FOR YOU 24*7";
            cout<<"\n CONTACT US ON 7999538548";
            getch();
            break;
         case 13:
            break;
         case 14:
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
    cin.clear();
    cin.sync();
    cin.getline(my_name,50);
    cout << "\n ENTER YOUR FATHER'S NAME:-\t";
    cin.clear();
    cin.sync();
    cin.getline(father_n,50);
    cout << "\n ENTER YOUR MOTHER'S NAME:-\t";
    cin.clear();
    cin.sync();
    cin.getline(mother_n,50);
    cout << "\n ENTER YOUR PERMANENT ADDRESS:-\t";
    cin.clear();
    cin.sync();
    cin.getline(address,200);
    cout << "\n ENTER YOUR MOBILE NUMBER:-\t";
    cin >> mob_no;
    cout << "\n ENTER YOUR ADDHAR NUMBER:\t-";
    cin >> addhar_no;
    
    cout << "\n ENTER YOUR NOMINEE:-\t";
    cin.clear();
    cin.sync();
    cin.getline(nominee,50);
    cout << "\n ENTER YOUR USERNAME FOR LOGIN:-\t";
    cin.clear();
    cin.sync();
    cin.getline(login_user,50);
    cout << "\n ENTER YOUR PASSWORD FOR LOGIN:-\t";
    cin.clear();
    cin.sync();
    cin.getline(login_pass,50);    
    cout << "\n SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-\t";
    cin >> pin_no;

};
void account::show_details(){
    cout<<"\n\t ACCOUNT NO:-";
    cout<<"\n\t NAME OF ACCOUNT HOLDER:-"<<my_name;
    cout<<"\n\t FATHER'S NAME OF ACCOUNT HOLDER:-"<<father_n;
    cout<<"\n\t MOTHER'S NAME OF ACCOUNT HOLDER:-"<<mother_n;
    cout<<"\n\t ADDRESS OF ACCOUNT HOLDER:-"<<address;
    cout<<"\n\t NOMINEE OF ACCOUNT HOLDER:-"<<nominee;
    cout<<"\n\t TOTAL BALANCE OF ACCOUNT HOLDER:-"<<acc_bal;
    cout<<"\n\t MOBILE NO. ACCOUNT HOLDER:-"<<mob_no;
    cout<<"\n\t ADDHAR NO. OF ACCOUNT HOLDER:-"<<addhar_no;
    
}
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
        cout << "\n 05.ADDHAR NUMBER";
        cout << "\n 06.PERMANENT ADDRESS";
        cout << "\n 07.PIN NO";
        cout << "\n ENTER YOUR CHOICE(1-6):-";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n ENTER NAME:-\t";
            cin.clear();
            cin.sync();
            cin.getline( my_name,50);
            break;
        case 2:
            cout << "\n ENTER FATHER'S NAME:-\t";
            cin.clear();
            cin.sync();
            cin.getline(father_n,50);
            break;
        case 3:
            cout << "\n ENTER MOTHER'S NAME:-\t";
            cin.clear();
            cin.sync();
            cin.getline(mother_n,50);
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
            cout << "\n ENTER PERMANENT ADDRESS:-\t";
            cin.clear();
            cin.sync();
            cin.getline(address,200);
            break;
         case 7:
            cout << "\n ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        default:
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice > 7);
};
void account::show_bal()
{
    system("CLS");
    cout << "\n YOUR CURRENT BALANCE IS:- "<<acc_bal; 
    getch();   
}
int account::check_pin(int check_p)
{    
    if(check_p==pin_no)
    {
        return 1;
    }
    else if(check_p!=pin_no)
    {
        return 0;
    }
    else 
        return 0;
}
void account::deposit()
{
    system("CLS");
    int x;
    int temp_pin;
    int amount;
    cout << "\n ENTER THE AMOUNT TO BE DEPOSITED:- \t";
    cin>>amount;
    cout<<"\nENTER YOUR PIN";
    cin>>temp_pin;
    x=check_pin(temp_pin);
    if(x==1){
        acc_bal=acc_bal+amount;
    }
    if(x!=1){
        system("cls");
        cout<<"\nWRONG PIN";
        getch();
    }
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
           // book_train();
            break;
        case 8:
            //book_bus();
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
void account::book_bus()
{   system("cls");
    char boarding[100];
    char destinattion[100];
    int distance;
    int price;
    int temp_pin;
    int choice;
    cout<<"\n------------------------------------------------------------";
    cout<<"\n\t\tWELCOME TO BUS TICKET BOOKING WINDOW";
    cout<<"\n------------------------------------------------------------";
    cout<<"\n\tENTER YOUR BOARDING POINT:-\t";
    cin.clear();
    cin.sync();
    cin.getline(boarding,100);
    cout<<"\n\tENTER YOUR DESTINATION:-";
    cin.clear();
    cin.sync();
    cin.getline(destinattion,100);
    cout<<"\n\tENTER THE  DISTANCE BETWEEN TWO POINTS:-";
    cin>>distance;
    price=distance*2;
    cout<<"\n\tTOTAL COST OF YOUR TRAVEL IS:-"<<price;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR TRAVEL(TYPE 1 FOR YES, 2 FOR NO)";
    cin>>choice;
    switch(choice){
        case 1:
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
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
            cout << "\n WRONG CHOICE";
            getch();
        }

    } while (choice > 9);
}
void account::home_loan()
{
    cout << "\n HOME LOAN";
    cout << "\n ENTER LOCATION OF HOME FOR WHICH YOU NEED LOAN:-";
    cin.clear();
    cin.sync();
    cin.getline(homeloan_newadd,200);
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
    cin.clear();
    cin.sync();
    cin.getline(vehicle_model,100);
    cout << "\n ENTER THE VEHICLE INFORMATION";
    cin.clear();
    cin.sync();
    cin.getline(vehicle_info,500);
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
    cout << "\n THE RATE OF INTEREST IS 5%";
    goldloan_value = gold_amount*4370;
    cout << "\n THE AMOUNT YOU GET FROM LENDING THE GOLD:- \t" << goldloan_value ;
    cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO REPAY THE AMOUNT:-";
    cin >> goldloan_time;
}
void account::edu_loan()
{
    cout << "\n EDUCATION LOAN";
    cout << "\n ENTER YOUR FIELD OF EDUCATION";
    cin.clear();
    cin.sync();
    cin.getline(edu_field,100);
    cout << "\n ENTER YOUR EDUCTION COURSE INFORMATION";
    cin.clear();
    cin.sync();
    cin.getline(edu_info,500);
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
    cin.clear();
    cin.sync();
    cin.getline(agri_crop,200);
    cout << "\n ENTER THE INFO OF CROPS AND FIELD";
    cin.clear();
    cin.sync();
    cin.getline(agri_info,800);
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
void account::donate_pay()
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

void account::donatef1() // function for donatiion in cm fund
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

void account::donatef2() // donation in pm fund
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
void account::donatef3() //function for donation in army charity fund
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
// functions defination regarding INVEST starts here
void account::demat_services()
{

}
void account::saving_funds()
{
    long long sav_funds;

    cout<<"ENTER THE PIN NUMBER:-"<<endl;
    cin>>(pin_no);
    sav_funds=acc_bal+(acc_bal*7*1/100);
    cout<<"YOUR TOTAL SAVINGS FUNDS ARE: "<<sav_funds;
    getch();
}
void account::pension_funds()
{
    long long pen_funds;

    cout<<"ENTER THE PIN NUMBER:-"<<endl;
    cin>>(pin_no);
    pen_funds=acc_bal+(acc_bal*5*1/100);
    cout<<"YOUR TOTAL PENSION FUNDS ARE: "<<pen_funds;
    getch();
}
void account::gold_funds()
{
    long long gold_fund;

    cout<<"ENTER THE PIN NUMBER:-"<<endl;
    cin>>(pin_no);
    gold_fund=acc_bal+(acc_bal*20*1/100);
    cout<<"YOUR TOTAL GOLD FUNDS ARE: "<<gold_fund;
    getch();
}
// functions defination regarding PAY TAX start here

void account::pay_taxes()
{
    int tax;
    cout<<"ENTER YOUR SALARY:-"<<endl;
    cin>>(salary);
    cout<<"ENTER YOUR PAN NUMBER:-"<<endl;
    cin>>(pan_number);
    if(salary>0 && salary<=250000)
        tax=0;
    else if(salary>250000 && salary<=500000)
        tax=5;
    else if(salary>500000 && salary<=1000000)
        tax=20;
    else if(salary>1000000)
        tax=30;
    cout<<"TOTAL TAX PERCENTAGE: "<<tax<<endl;
    int total_tax=salary*tax/100;
    if(acc_bal>=total_tax){
        acc_bal-=total_tax;
        cout<<"TAX PAID SUCCESSFULLY"<<endl;
    }
    else{
        cout<<"YOU DON'T HAVE ENOUGH BALANCE TO PAY TAX"<<endl;
    }
    getch();
}


    // functions defination regarding PAY TAX end here
    // functions defination regarding INVEST end here

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
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n\t\tWELCOME TO SLAPPS BANK";
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n\t MAIN MENU:-";
        cout << "\n\t 01.NEW CUSTOMER";
        cout << "\n\t 02.LOGIN";
        cout << "\n\t 03.EXIT";

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
            cin.clear();
            cin.sync();
            cin.getline(check_user,50);
            cout << "\n ENTER YOUR PASSWORD:-\t";
            cin.clear();
            cin.sync();
            cin.getline(check_pass,50);
            for(int i=0;i<opening_no;i++)
            {
                int x=customer[i].login_check(check_user,check_pass,i);
                if(x!=-50){
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
    } while (choice!= 3);
    

    return 0;
}