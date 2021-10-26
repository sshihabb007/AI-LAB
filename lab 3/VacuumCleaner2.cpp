#include <iostream>

using namespace std;
string Action(string act)
{
    if(act=="suck")
        return act;
    else if(act=="left")
        return act;
    else if(act=="right")
        return act;
    else{
        cout<<"Wrong Input";
        return "invalid";
    }
}

string RuleMatch(string state,string act)
{
    if(act=="dirty")
        return Action("suck");
    else if(act=="clean" && state=="A")
        return Action("right");
    else if(act=="clean" && state=="B")
        return Action("left");
    else{
        cout<<"Wrong Input";
        return "wrong";
    }
}

string Intercept_Input(string percept)
{
    string inp2,inp3;
    cout<<"Input the Destination Location(A/B) : ";
    cin>>inp2;
    cout<<"input the status(dirty/clean)";
    cin>>inp3;
    if(inp2 =="A" && percept =="B")
    {
        cout<<"left"<<endl;
    }
    else if(inp2 =="B" && percept =="A")
    {
        cout<<"right"<<endl;
    }
    return RuleMatch(inp2,inp3);
}

string SimpleReflexAgent(string percept)
{
    return Intercept_Input(percept);
}


int main()
{
 string input,check="y";
 while(check=="y")
 {
     cout<<"Enter the Current Location (A/B) : ";
     cin>>input;
     cout<<SimpleReflexAgent(input);
     cout<<"\n\nPress y to start again";
 }



}
