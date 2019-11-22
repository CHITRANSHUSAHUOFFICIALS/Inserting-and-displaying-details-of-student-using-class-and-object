#include <iostream>

using namespace std;

class student
{int rn;
char name[30];
public:void input()
{
    cout<<"enter roll no.:";
    cin>>rn;
    cout<<"enter name.:";
    cin>>name;

}
void show()
{
    cout<<"student roll no.:"<<rn;
    cout<<"\n student name.:"<<name;
}
};
class person:public student
{
    char br[10];
    char gender;
    public:void input()
    {
        student::input();
        cout<<"enter branch:";
        cin>>br;
        cout<<"enter gender:";
        cin>>gender;
    }
    void show()
    {
        student::show();
        cout<<"\n student branch:";
        cout<<br;
        cout<<"\n student gender: ";
        cout<<gender;
    }
};
int main ()
{
    person s;
    s.input();
    s.show();
    return 0;
}
