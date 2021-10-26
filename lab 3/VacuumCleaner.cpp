#include <iostream>

using namespace std;

int main()
{
    char sq;
    int sqa = 0, sqb = 0, i=0;

    while(1)
    {
        cout<<"Input a Square (A or B) : ";
        cin>>sq;
        if(sq=='A')
        {
           cout<<"Input the square status (Dirty=1,Clean=0): ";
           cin>>sqa;
           if(sqa==0)
            cout<<"\n RIGHT \n";
            else{
                sqa=0;
                cout<<"\n SUCK \n";
            }

        }
           else if(sq=='B')
           {
               cout<<"Input the status (Dirty=1,Clean=0): ";
               cin>>sqb;
               if(sqb==0)
                cout<<"\n LEFT \n";
                else{
                    sqb=0;
                    cout<<"\n SUCK \n";
                }

           }
     }

     return 0;
    }
