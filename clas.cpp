#include<iostream>
using namespace std;
class student{
private:
    char name;
    int regno,sub[3];
    float total,avg;
public:
    void read()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter registration number:";
        cin>>regno;
        cout<<"enter the marks of three subjects";
        for(int i=0;i<3;i++){
            cin>>sub[i];

        }
    }
    void result(){
        total=0;
        for(int i=0;i<3;i++){
            total += sub[i];
        }
        avg=total/3;


    }

void print();



};
void student :: print()
{
    cout<<"name:"<<name<<endl;
    cout<<"registration:"<<regno<<endl;
    cout<<"total:"<<total<<endl;
    cout<<"average"<<avg<<endl;

}

int main()
{
    student s;
    s.read();
    s.result();
    s.print();
    return 0;
}
