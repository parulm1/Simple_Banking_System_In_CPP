#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <random>
#include <ctime>
using namespace std;

class Bank
{
    char name[100], fname[100], add[100], type[10];
    float bal;
    long phone;

public:
    void open_account();
    void deposit_money();
    void withdrawal_money();
    void display_account();
    void rtgs_transfer();
    void neft_transfer();
    void imps_transfer();
    void b_loans();
    void h_loans();
    void p_loans();
    void bill_pay();
    void complaint_register();
    void fixed_deposit();
    long generate_acc_no();
};

long generate_account_number()
{
    // Seed the random number generator with the current time
    mt19937 rng(time(nullptr));
    // Define the range of account numbers (adjust as needed)
    uniform_int_distribution<long> distribution(100000000000, 999999999999);
    // Generate a random account number
    long account_number = distribution(rng);
    return account_number;
}

void Bank::open_account()
{
    cout << "\n                                                                Enter Your Name:";
    cin.ignore();
    cin.getline(name, 100);
    cout << endl;
cout<< "\n                                                                Enter Your Father's Name: ";
    cin.getline(fname, 100);
    cout << endl;
        cout<< "\n                                                                Enter Your Address: ";
    cin.ignore();
    cin.getline(add, 100);
    cout << endl;
       cout<< "\n                                                                Enter Your Phone number: ";
    cin >> phone;
    cout << endl;
     cout<< "\n                                                                Type of Account You want to Open:" << endl;
      cout<< "                                                                Savings(s) or Current(c)";
    cin.ignore();
    cin.getline(type, 100);
    cout << endl;
         cout<< "\n                                                                Enter your first deposit amount: ";
    cin >> bal;
    cout << "\n                                                                Your Account is created successfully!!!!\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
     
}

void Bank::deposit_money()
{
    int d;
    cout << "\n                                                                Enter account holder's name:\t";
    cin.ignore();
    cin.getline(name,100);
    cout << "\n                                                                Enter account holder's phone:\t";
    cin >> phone;
    cout << "\n                                                                Enter amount you want to deposit:\t";
    cin >> d;
    bal = bal + d;
    cout << "\n                                                                Your Current/Total balance is: " << bal << endl;
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::withdrawal_money()
{
    int w;
    int d;
    cout << "\n                                                                Enter account holder's name:\t";
    cin.ignore();
    cin.getline(name,100);
    cout << "\n                                                                Enter account holder's phone:\t";
    cin >> phone;
    cout << "\n                                                                Enter amount you want to withdrawal: ";
    cin >> w;
    bal = bal - w;
    cout << "\n                                                                Your Current/Total balance is: " << bal << endl;
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::display_account()
{
        long acc_number = generate_account_number();
        cout << "\n                                                                Your Name: " << name << endl;
        cout << "\n                                                                Your Father's Name: " << fname << endl;
        cout << "\n                                                                Type of Account: " << type << endl;
        cout << "\n                                                                Your Account Number: " << acc_number << endl;
        cout << "\n                                                                Current/Total Balance: " << bal << endl;
        cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::rtgs_transfer(){
    int account,amount,pin;
    char ifsc[100];
    cout<<"                                                                Please enter the account number to which you want to transfer money:\t";
	cin>>account;
	cout<<"                                                                Please enter the IFSC code to which you want to transfer money:\t";
	cin>>ifsc;
	cout<<"                                                                Enter the amount to transfer:\t";
	cin>>amount;
	if(amount<0) 
	cout<<"\n                                                                Transaction declined";
	else
	cout<<"                                                                enter your PIN : ";
	cin>>pin;
	cout<<"                                                                amount transferred successfully\n";
	cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::imps_transfer(){
    int account,amount,pin;
    char ifsc[100];
    cout<<"                                                                Please enter the account number to which you want to transfer money:\t";
	cin>>account;
	cout<<"                                                                Please enter the IFSC code to which you want to transfer money:\t";
	cin>>ifsc;
	cout<<"                                                                Enter the amount to transfer:\t";
	cin>>amount;
	if(amount<0) 
	cout<<"\n                                                                Transaction declined\n";
	
	else
	cout<<"                                                                enter your PIN : ";
	cin>>pin;
	cout<<"                                                                amount transferred successfully\n";
	cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::neft_transfer(){
    int account,amount,pin;
    char ifsc[100];
    cout<<"                                                                Please enter the account number to which you want to transfer money:\t";
	cin>>account;
	cout<<"                                                                Please enter the IFSC code to which you want to transfer money:\t";
	cin>>ifsc;
	cout<<"                                                                Enter the amount to transfer:\t";
	cin>>amount;
	if(amount<0) 
	cout<<"\n                                                                Transaction declined";
	else
	cout<<"                                                                enter your PIN : ";
	cin>>pin;
	cout<<"                                                                amount transferred successfully\n";
	cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}


void Bank::b_loans(){
    int amt,dur;
    char pan[100];
    cout<<"                                                                Please enter amount required for loan : ";
    cin>>amt;
   cout<<"                                                                please enter the duration of the loan : ";
   cin>>dur;
    cout<<"                                                                Please enter your PAN details : ";
    cin.ignore();
    cin.getline(pan,100);
    if(amt>10000000)
    cout<<"                                                                Sorry we cant provide you loan...";
    else
    cout<<"                                                                congratulations!! you are elegible for the loan\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::h_loans(){
    int amt,dur;
    char pan[100];
    cout<<"                                                                Please enter amount required for loan : ";
    cin>>amt;
   cout<<"                                                                please enter the duration of the loan : ";
   cin>>dur;
    cout<<"                                                                Please enter your PAN details : ";
    cin.ignore();
    cin.getline(pan,100);
    if(amt>1000000)
    cout<<"                                                                Sorry we cant provide you loan...";
    else
    cout<<"                                                                congratulations!! you are eligible for the loan\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::p_loans(){
    int amt,dur;
    char pan[100];
    cout<<"                                                                Please enter amount required for loan : ";
    cin>>amt;
   cout<<"                                                                please enter the duration of the loan : ";
   cin>>dur;
    cout<<"                                                                Please enter your PAN details : ";
    cin.ignore();
    cin.getline(pan,100);
    if(amt>100000)
    cout<<"                                                                Sorry we cant provide you loan...";
    else
    cout<<"                                                                congratulations!! you are elegible for the loan\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::bill_pay(){
    char bp[100];
    int pin;
    float pay;
    cout<<"                                                                Enter your bill provider : ";
    cin.ignore();
    cin.getline(bp,100);
    cout<<"                                                                Enter the amount to pay";
    cin>>pay;
    if(pay<0)
        cout<<"                                                                invalid amount..try again";
    else
    cout<<"                                                                Enter pin: ";
    cin>>pin;
    cout<<"                                                                bill payment successful\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
}

void Bank::complaint_register(){
    char issue[100];
    cout<<"                                                                Enter the issue you are facing";
    cin>>issue;
    cout<<"                                             Your complaint is registered successfully..our executives will contact you soon\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
}
void Bank::fixed_deposit(){
    int acno,amfd,dura;
    char name[100];
    cout<<"                                                                Please enter your name";
    cin.ignore();
    cin.getline(name,100);
    cout<<"                                                                please enter your account number";
    cin>>acno;
    cout<<"                                                                Enter the amount for fixed deposit";
    cin>>amfd;
    if(amfd<0)
    cout<<"                                                                Invalid entry..try again";
    else
    cout<<"                                                                Enter the duration (in years) for fixed deposit";
    cin>>dura;
    cout<<"                                                                Fixed deposit created successfully\n";
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
    
    
}

int main()
{

    Bank obj;
    int ch;
    char option='y';
    
    while(option == 'y'){
        system("clear");
    cout<<"****************************************************************************************************************************************************************************";
    cout<<"\n**                                                           ~~~~~~~~~~~ WELCOME TO OUR BANK ~~~~~~~~~~~                                                                 **\n";
    cout<<"****************************************************************************************************************************************************************************";
    cout << "**                                                                       1. Open Account                                                                                 **" << endl;
    cout << "**                                                                       2. Deposit Money                                                                                **" << endl;
    cout << "**                                                                       3. Withdrawal Money                                                                             **" << endl;
    cout << "**                                                                       4. Display Accounts                                                                             **" << endl;
    cout << "**                                                                       5. IMPS Transfer                                                                                **" << endl;
    cout << "**                                                                       6. NEFT Transfer                                                                                **" << endl;
    cout << "**                                                                       7. RTGS Transfer                                                                                **" << endl;
    cout << "**                                                                       8. Business Loans                                                                               **" << endl;
    cout << "**                                                                       9. Personal Loans                                                                               **" << endl;
    cout << "**                                                                       10.Home Loans                                                                                   **"<< endl;
    cout << "**                                                                       11.Pay Bills                                                                                    **" << endl;
    cout << "**                                                                       12.Fixed Deposits                                                                               **" << endl;
    cout << "**                                                                       13.Register Complaint                                                                           **" << endl;
    cout << "**                                                                       14.Exit                                                                                         **" << endl;
    cout<<"****************************************************************************************************************************************************************************";
    cout<<"\n**                                                                                                                                                                       **";
    cout << "\n**                                                              Enter the choice to want start with:                                                                     **"<<endl;
    cout<<"**\t\t\t\t\t\t\t\t\t\t";
    cin >>ch;
    cout<<"**-----------------------------------------------------------------------------------------------------------------------------------------------------------------------**"<<endl;;
        switch (ch)
        {
        case 1:
            cout << "**                                                                       1. Open Account:" << endl;
            obj.open_account();
            break;

        case 2:
            cout << "**                                                                2. Deposit Money: " << endl;
            obj.deposit_money();
            break;

        case 3:
            cout << "**                                                                3. Withdrawal Money: " << endl;
            obj.withdrawal_money();
            break;

        case 4:
            cout << "**                                                                4. Display Account: " << endl;
            obj.display_account();
            break;
            
        case 5:
            cout <<"**                                                                5. IMPS Transfer: " << endl;
            obj.imps_transfer();
            break;
            
        case 6:
            cout <<"**                                                                6. NEFT Transfer: " << endl;
            obj.neft_transfer();
            break; 
            
        case 7:
            cout <<"**                                                                7. RTGS Transfer: " << endl;
            obj.rtgs_transfer();
            break;    
            
        case 8:
            cout <<"**                                                                8. Business Loans: " << endl;
            obj.b_loans();
            break;
            
        case 9:
            cout <<"**                                                                9. Personal Loans: " << endl;
            obj.p_loans();
            break;
            
        case 10:
            cout <<"**                                                                10. Home Loans: " << endl;
            obj.h_loans();
            break;
            
        case 11:
            cout <<"**                                                                11. Pay Bills: " << endl;
            obj.bill_pay();
            break;
            
        case 12:
            cout <<"**                                                                12. Fixed Deposit: " << endl;
            obj.fixed_deposit();
            break;
            
        case 13:
            cout <<"**                                                                13. Register Complaint: " << endl;
            obj.complaint_register();
            break;    

        case 14:
            if (ch == 5)
            {
                exit(1);
            }
            break;

        default:
            cout << "\n**                                                      Please Try again and Choose correct option!!!!" << endl;
            break;
        }
        
        cout << "\n**                                                          Do You want to continue banking without exit? Press (Y/N)                                                    **";
        cin>>option;}
        return 0;
}