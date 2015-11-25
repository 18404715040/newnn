//
//  main.cpp
//  newnn
//
//  Created by 20141105074 on 15/11/25.
//  Copyright © 2015年 20141105074. All rights reserved.
//

#include <iostream>
using namespace std;
class Student
{private:
    int num;
    int score;
public:
    void setdata()
    {
        cin>>num;
        cin>>score;
    }
    void display()
    {
        cout<<"num="<<num<<endl;
        cout<<"score="<<score<<endl;
    }
};
Student stud1,stud2;

int main()
{
    stud1.setdata();
    stud2.setdata();
    stud1.display();
    stud2.display();
    return 0;
}