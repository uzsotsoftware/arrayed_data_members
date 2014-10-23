#include <cstdlib>
#include<string>
#include<iostream>

using namespace std;

class Students{
    string name;
    float fees[3];
    
public:
    static int objectCounter;
    Students(){objectCounter++;}
    void SetFees(float amount,int index){fees[index]=amount;}
    friend float OutStandingFees(Students thisStudent,float termFees);
};

int Students::objectCounter=0;

float OutStandingFees(Students thisStudent,float termFees){
    float totalFees=0;
    for(int count=0;count<=2;count++)
        totalFees+=thisStudent.fees[count];
    return termFees-totalFees;
}

int main(int argc, char** argv){
    float lFees[3],termFees;
    Students student1,student2,student3;
    
    cout<<"Term fees...";
    cout<<student3.objectCounter<<endl;
    return 0;
}

