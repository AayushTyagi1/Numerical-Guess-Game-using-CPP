#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int a=(rand()%10+1);
    cout<<"Lets start :)"<<endl;
    cout<<"Guess a number"<<endl;
    unsigned int g,i=0;
    while(i<3)
    {
        cin>>g;
        if(g==a)
        {
            cout<<"you win!";
            break;
        }
        if(i==2)
        {
            cout<<"Number is "<<a<<endl;
            cout<<"You loose:(";
        }
        else
        {
            cout<<"Wrong Guess \n Try Again"<<endl;
        }
        i++;
    }
}
