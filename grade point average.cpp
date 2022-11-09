#include <iostream>
using namespace std;
int main()
{
    int gpa;
    cout <<"Enter gpa"<<endl;
    cin>>gpa;
    if (gpa>=3.5)
    cout<<"You have made the Dean's list"<<endl;

    else if(gpa>=2.0)
    cout<<"gpa is ok"<<endl;
    else if(gpa<2.0)
    cout<<"see the course administrator";
}

