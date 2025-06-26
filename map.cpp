#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> hash;

    hash["Md"] = 1; 
    hash["Ali"] = 2;
    hash["Azam"] = 3;

    cout<<"Value of Azam in hashtable: "<<hash["Azam"]<<endl;

    for(auto j=hash.begin();j!=hash.end();j++){
        cout<<"Key are: "<<j->first<<" Values are: "<<j->second<<endl;
    }
}