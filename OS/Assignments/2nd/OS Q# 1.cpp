#include<iostream>
#include <string>
using namespace std;


    int splitString(string str)
{

    string num, special;
        int numbers;
    for (int i=0; i<str.length(); i++)
    {
        if (isdigit(str[i]))
            num.push_back(str[i]);
        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'));
        else
            special.push_back(str[i]);
    }
    numbers = stoi(num);
    return numbers;
}
 

int main()
{
    string a;
    string b;
    string c;
    cout<<"enter num 1"<<endl;
    cin>>a;
    cout<<"enter num 2"<<endl;
    cin>>b;
    cout<<"enter num 3"<<endl;
    cin>>c;
    int A;
    int B;
    int C;
    cout<<a<<"+"<<b<<"="<<c<<endl;
    
    
    A =splitString(a);
    B =splitString(b);
    C =  splitString(c);
    
    if (A == 0)
    {
     A = C - B;
    }
	else if ( B == 0) 
	{
     B = C - A;
    }
    else 
	{
     C = A + B;
    }    

        cout<<A<<"+"<<B<<"="<<C<<endl;
        
    
    return 0;
}

