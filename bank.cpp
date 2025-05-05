//Create a class BankAccount with attributes accountNumber, holderName, and balance. Implement
//methods to deposit, withdraw, and display account details.
#include <iostream>
using namespace std;
class BankAccount{
    public:
    int accountNumber;
    string holderName;
    double Balance=0;
    BankAccount(int x,string y){
        accountNumber=x;
        holderName=y;
    }

    double add(){
    double deposit;
    cout<<"How much money do u want to deposit?:\n";
    cin>>deposit;
    Balance=Balance+deposit;
    return Balance;
    }
    
    double subtract(){
    double withdraw;
    cout<<"How much money do u want to withdraw?:\n";
    cin>>withdraw;
    Balance=Balance-withdraw;
    cout<<"Here is your withdrawal amount "<<withdraw<<" \nTotal balance remaining in account is "<<Balance;
    return 0;
    }
};
int main(){
    BankAccount customer1(12345,"Karan");
    cout<<customer1.accountNumber<<endl;
    cout<<customer1.holderName<<endl;
    cout<<customer1.Balance<<endl;
    string Ask,Ask1;
    cout<<"Do you want to deposit money ?(yes/no)\n";
    cin>>Ask;
    if(Ask=="yes"){
    customer1.add();
    string choice;
    cout<<"Do you wish to see your balance?";
    cin>>choice;
    if(choice=="yes"){
    cout<<"Your balance is "<<customer1.Balance<<endl;
    }
    }
    else if (Ask=="no"){
    cout<<"Do you want to withdraw money ? (yes/no)\n";
    cin>>Ask1;
    if(Ask1=="yes"){
    customer1.subtract();
    }
    else if (Ask=="no" && Ask1=="no"){
    cout<<"Thankyou for visiting our Bank";
    }
}
}
