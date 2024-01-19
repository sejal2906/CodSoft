#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int level;
    int randomnum;
    int guess;
    srand(time(0));
    randomnum = rand() % 100 + 1;
    cout << "\n\t\t\tWelcome to Guess Number Game";
    cout << "\n\t\t\t\tInstructions";
    cout << "\n\t\t1.Enter the level there will be 3 levels easy,medium and hard";
    cout << "\n\t\t2.For easy level you'll have 8 chances ";
    cout << "\n\t\t3.For medium level you'll have 5 chances ";
    cout << "\n\t\t4.For hard level you'll have 3 chances "<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    while (true)
    {
        cout << "1.Easy\n2.Medium\n3.Hard\n4.Exit"<<endl;
        cout << "\nEnter the level : " << endl;
        cin >> level;
        if (level == 1)
    {
        int leftchances=8;
        for (int i = 0; i < 8; i++)
        {
            cout << "Guess the number"
                 << "Chance " << (i + 1) << " :" << endl;
            cin >> guess;
            if (guess > randomnum)
            {
                cout << "Your guess " << guess << " is high !! " << endl;
            }
            else if (guess < randomnum)
            {
                cout << "Your guess " << guess << " is low !! " << endl;
            }
            else 
            {
                cout << "You have guess right " << guess << " in " << i << " chances !!" << endl;
                break;
            }
            leftchances--;
            if(leftchances==0){
                cout<<"Betterluck next time!!"<<endl;
            }
            
        }
    }
    else if (level == 2)
    {
        int leftchances=5;
        for (int i = 0; i < 5; i++)
        {
            cout << "Guess the number"
                 << "Chance " << (i + 1) << " :" << endl;
            cin >> guess;
            if (guess > randomnum)
            {
                cout << "Your guess " << guess << " is high !! " << endl;
            }
            else if (guess < randomnum)
            {
                cout << "Your guess " << guess << " is low !! " << endl;
            }
            else 
            {
                cout << "You have guess right " << guess << " in " << i << " chances !!" << endl;
                break;
            }
            leftchances--;
            if(leftchances==0){
                cout<<"Betterluck next time!!"<<endl;
            }
            
        }
    }
    else if(level==3)
    {
        int leftchances=3;
        for (int i = 0; i < 3; i++)
        {
            cout << "Guess the number"
                 << "Chance " << (i + 1) << " :" << endl;
            cin >> guess;
            if (guess > randomnum)
            {
                cout << "Your guess " << guess << " is high !! " << endl;
            }
            else if (guess < randomnum)
            {
                cout << "Your guess " << guess << " is low !! " << endl;
            }
            else 
            {
                cout << "You have guess right " << guess << " in " << i << " chances !!" << endl;
                break;
            }
            leftchances--;
            if(leftchances==0){
                cout<<"Betterluck next time!!"<<endl;
            }
            
        }
    }
    else if(level==4)
    {
        exit(0);
    }
        cout<<"--------------------------------------------------------------------"<<endl;
       
    }
    
    return 0;
}