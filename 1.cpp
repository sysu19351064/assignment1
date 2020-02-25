//
//  1.cpp
//  C++作业
//
//  Created by 李苹果 on 2020/2/22.
//  Copyright © 2020 李苹果. All rights reserved.
//
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
struct Student{
public:
    Student(int newI,string newN,int newA);//构造函数
    Student(){
        id=0;
        name='0';
        age=0;
    }
    void set();//设置函数
    void read();//取值函数
    void warn();//错误提醒函数
    void print();//打印函数
private:
    int id;
    string name;
    int age;
} ;
int main()
{
    Student s1,s2;
    s1.set();s2.set();
    cout<<"please input infoemation of s1"<<endl;
    s1.read();s1.warn();
    cout<<"please input information of s2"<<endl;
    s2.read();s2.warn();
    cout<<"student 1:"<<endl;
    s1.print();
    cout<<"student 2:"<<endl;
    s2.print();
    return 0;
}
void Student::set(){
    
}
void Student::read(){
    cin>>id>>name>>age;//m依次输入三个数据成员
}
void Student::warn(){
    while(!(19000000<id&&id<19999999)){//检查id是否正确输入，范围8位数，且以19开头
        cout<<"wrong id,please input again:"<<endl;
        cin>>id;
    }
    for(auto c:name){//检查name是否正确输入，范围为大小写字母
        if(c>='A'&&c<='z') continue;
        else {
            cout<<"wrong name,please input again:"<<endl;
            cin>>name;
            break;
        }
    }
    while(!(0<age&&age<120)){
        cout<<"wrong age,please input again:"<<endl;
        cin>>age;
    }
}
void Student::print(){
    cout<<id<<' '<<name<<' '<<age<<endl;
}
