#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

string Rule_action(string rule)
{
    if(rule=="Suck")
    {
      return rule;
    }

    else if(rule=="Left")
    {
       return rule;
    }
    else if(rule=="Right")
    {
       return rule;
    }
    else{
        cout<<"invalid input"<<endl;
        return "try again";
    }
}
string Rule_Match(string state,string rule)
{
    if(rule=="Dirty")
    {
      return Rule_action("Suck");
    }

    else if(rule=="Clean" && state=="A")
    {
       return Rule_action("Right");
    }
    else if(rule=="Clean" && state=="B")
    {
       return Rule_action("Left");
    }
    else{
        cout<<"invalid input"<<endl;
        return "try again";
    }
}
string Interpret_Input(string percept)
{
    string input2,input3;
    cout<<"enter the location:\n1)A\n2)B"<<endl;
    cin>>input2;
    cout<<"enter the state:\n 1)Clean\n2)Dirty"<<endl;
    cin>>input3;
    if(input2 =="A" && percept =="B")
    {
        cout<<"Left"<<endl;
    }
    else if(input2 =="B" && percept =="A")
    {
        cout<<"Right"<<endl;
    }
    return Rule_Match(input2,input3);
}
string Simple_Reflex_Agent(string percept)
{
     return Interpret_Input(percept);

}
int main()
{
    string input,chk="y";
     while(chk =="y"){
    cout<<"enter the current location:\n1)A\n2)B"<<endl;
    cin>>input;
    cout<<Simple_Reflex_Agent(input);
    cout<<"\npress y to continue"<<endl;
    cin>>chk;
    }
    return 0;
}
