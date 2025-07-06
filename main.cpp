#include<iostream>
#include"sets.h"
using namespace std;
main()
{
    Set<int> s1(5);
    Set<int> s2(5);
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cout<<"Enter val"<<endl;
        cin>>temp;
        s1.setSetIndex(temp, i);
        cout<<"Enter val"<<endl;
        cin>>temp;
        s2.setSetIndex(temp, i);
        
    }
    
    s1.display();
    s2.display();
    s1.Union(s2).display();
    s1.intersection(s2).display();



}