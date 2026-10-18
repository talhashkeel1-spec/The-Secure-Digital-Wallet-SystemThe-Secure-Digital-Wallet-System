#include <iostream>
#include <string>
using namespace std;

class DigitalWallet{
private:

    string accountHolder;
    double balance;
    int pinCode;
public:


    DigitalWallet(string holder,double bal,int code){
        accountHolder=holder;
        balance=bal;
        pinCode=code;
    }
    void depositamount(){
        cout<<"Enter amount you want to add"<<endl;
        double amou;
        cin>>amou;
        if(amou>0){
            balance+=amou;
        }
        else{

            cout<<"invalid amount"<<endl;
        }

    };

        void withdrawMoney(){
            int cod;
            double am;
            cout<<"Enter your pin to withdraw amount"<<endl;
            cin>>cod;

            if(cod==pinCode){
                cout<<"pin is correct"<<endl<<"now enter amount you want to withdraw"<<endl;
                cin>>am;
                 if(am<=balance){
                    cout<<"amount is correct"<<endl;
                   balance= balance-am;
                }
                else{
                    cout<<"amount is not correct"<<endl;
                }
            }
            else {
                cout<<"pin is not correct"<<endl;
            }



        }
        void realbal(){
            int newpin;
            cout<<"Enter pin to check balance"<<endl;
            cin>>newpin;
            if(newpin==pinCode){
                cout<< balance<<endl;
            }
            else{
                cout<< "your pin is not correct"<<endl;
            }



        }


};

int main()
{

    DigitalWallet s1("Talha",783.43,2234);
    s1.depositamount();
    s1.withdrawMoney();
    s1.realbal();


    return 0;
}
