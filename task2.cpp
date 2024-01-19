#include <iostream>
using namespace std;
int main(){
    float num1,num2,ans;
    int option;
    char choice;
    cout<<"\n*****Welcome to Calculator!!*****"<<endl;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    do
    {
    cout<<"Which Operation do you want to perform ? "<<endl;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
    cin>>option;
    cout<<"------------------------------------------------------------------------"<<endl;
      switch (option)
    {
    case 1:
        ans=num1+num2;
        cout<<"Addition : "<<ans<<endl;
        break;
    case 2:
        ans=num1-num2;
        cout<<"Subtraction : "<<ans<<endl;
        break;
    case 3:
        ans=num1*num2;
        cout<<"Mulitiplication : "<<ans<<endl;
        break;
    case 4:
        if(num2==0){
            cout<<"Number can't divisible by 0 "<<endl;
        }
        else
        {
           ans=num1/num2;
           cout<<"Division : "<<ans<<endl;
        }
        break;    
    
    default:
       cout<<"Please Enter right choice !! "<<endl;
    }
    cout<<"------------------------------------------------------------------------"<<endl;
     cout<<"Do you want to continue ?? "<<endl;
     cout<<"Press 'y' to continue & Press any key to close "<<endl;
     cin>>choice;   
    } while (choice=='y');
    return 0;
}