#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> a;

    a.push_back(5);
    a.push_front(6);
    a.push_back(7);
    a.push_front(6);

    
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i;
    }
    cout<<endl;
    
    a.pop_back();
    a.pop_front();

    a.sort();

    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i;
    }
    cout<<endl;
}