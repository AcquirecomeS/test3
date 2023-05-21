#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
        void get()
        {
            cout<<"enter the 2 numbers to add";
            cin>>a>>b;
        }
        void put(){
            cout<<"value "<<a+b;
        }
}
int main(){
    add a;
    a.get();
    a.put();
    cout<<"jnjrnirrru";
    return 0;
}