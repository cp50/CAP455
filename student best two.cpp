#include<iostream>
using namespace std;
class student{
private:
    char name;
    int regno,sub[3];
    float total,besttwo;
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
        int small;
        total=0;
        for(int i=0;i<2;i++){
                for(int j=i+1;i<3;i++){
                      if (sub[i] < sub[j]) {
                    int temp = sub[i];
                    sub[i] = sub[j];
                    sub[j] = temp;


                    }
                }




    }
     total = sub[0] + sub[1];
       besttwo = total / 2.0;
    }

void print();



};
void student :: print()
{
    cout<<"name:"<<name<< endl;
    cout<<"registration:"<<regno<< endl;
    cout<<"total:"<<total<< endl;
    cout<<"besttwo"<<besttwo<< endl;

}

int main()
{
    student s;
    s.read();
    s.result();
    s.print();
    return 0;
}

