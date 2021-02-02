#include <iostream>
#include <string>
#include <ctime>


using namespace std;

int main()
{
    string fullname;
    string atmname;
    double phone;
    double actno;
    double setpin;

 cout << " ----GARZO BANK---- \n" << "--ATM Registration-- \n";
 cout << " \n";
 cout << " Customer's Fullname:\n";
 getline(cin,fullname);
 cout << " Name to be printed on ATM Card:\n";
 getline(cin,atmname);
 cout << " Mobile Number for ATM transaction alerts:\n";
 cin >> phone;
 cout << " Account Number to be linked to card:\n";
 cin >> actno;
 cout << "Set your ATM pin code:\n";
 cin >> setpin;
 cout << "  \n";
 cout << " Your Account has been Created successfully.\n";
 cout << "   Your Unique ID is:" << "  504\n";

 int oid=504;
 double pin;
 login:
 cout << "**ATM LOGIN**\n";
 cout << "Enter Unique ID :\n";
 cin >> oid;
 cout << "Enter Pin Code:\n";
 cin >> pin;
 if (oid !=504 || pin !=setpin)
 {
 cout << " \n";
 cout << " Sorry Invalid ID or Pin \n";
  cout << " \n";
     goto login;

 }
 else {  double balance=5000;
    cout<< "******" << " ACCOUNT DETAILS" <<"******\n";
    cout<< " Card Holder: " << atmname << endl;
    cout<< " Account Number: " << actno <<endl;
    cout<< " Account Balance: " << "$" <<  balance << endl;
 }

  double cases;
  cout << "  \n";
  cout << " Select type of transaction:\n";
  cout << "1. Cash Withdrawal  \n";
  cout << "2. Request for Balance \n";
  cout << "3. Request Statement \n";
  cout << "4. Reset Pin \n";
  cin>> cases;

    if (cases == 1)
    {
        double amt;
        cant:
        cout<< " Enter withdrawal amount\n";
        cin>> amt;
        if (amt>5000)
        {
            cout<< " Insufficient Balance to make transaction \n";
        }
        if (amt > 1000)
        {   cout << " Transaction Failed \n";
        cout << "Daily Transaction limit is : " << "$1000" << endl;
            goto cant;
        }
        else {
            double remain=5000-amt;
        cout << " Cash withdrawn: " << "$" << amt << endl;
        cout << " Your Remaining Balance is : " << "$" << remain << endl;
        }

    }
    else if (cases == 2 )

    {
        cout << " Your Available Balance is " << "$5000\n";
    }

     else if (cases == 3)
     {
     cout << "Account Summary:\n";
     time_t now = time(0);
     char* date_time=ctime(&now);
     cout << date_time;
     cout << "       Beginning Balance is  :  "  "$5000"<< endl;
     cout << date_time;
     cout << "       Ending Balance is : " "$5000  \n";
     }
      else if (cases ==4)
      {
          double newpin;
          ahpin:
          cout << " Enter new pin:  \n";
          cin >> newpin;
          if (newpin==setpin)
          {

          cout << "This is your current pin code,Please Enter a new pincode  \n";
          goto ahpin;

          }


          else
          {
              cout <<" Your Pin code has been changed successfully \n";
          }
      }





    return 0;
}
