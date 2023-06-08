#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="hello world";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    
    // string a="dijhfdlfdfdsifdsfsdkflkd";
    // cout<<a.capacity()<<endl;
    // a="rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr";
    // cout<<a.capacity()<<endl;

    // string s="Hello";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // string s="hello";
    // if(s.empty()==true)cout<<"Empty"<<endl;
    // else cout<<"Not empth"<<endl;

    string s;
    cin>>s;
    // cout<<s<<endl;
    s.resize(5);
      cout<<s<<endl;
    s.resize(9,'x');
    cout<<s<<endl;
    return 0;
}