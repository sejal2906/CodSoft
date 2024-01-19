#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int guess;
    int randomNumber;
    int chance=0;
    srand(time(0));
    randomNumber=rand() % 100 + 1;
    do
    {
       cout<<"Guess the number from 1 to 100 : "<<endl;
       cin>>guess;
       chance++;
       if(guess<randomNumber){
        cout<<"Your guess "<<guess<<" is low !! "<<endl;
       }
       else if(guess>randomNumber){
        cout<<"Your guess "<<guess<<" is high !! "<<endl;
       }
       else{
        cout<<"You have guess right "<<guess<<" in "<<chance<<" chances !!"<<endl;
       }
    } while (guess!=randomNumber);
    

    return 0;
}