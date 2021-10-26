#include <iostream>

using namespace std;

 int rec(int x)
{
    if(x==0)
        return 0;
    if(x == 1)
     return 1;
        return rec(x-1)+rec(x-2);
        }




 main()
{

for(int i=1;i<=100;i++){
        if(rec(i)>25)
            break;
  cout<< rec(i)<<" ";

}

}


