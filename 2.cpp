//
//  2.cpp
//  C++作业
//
//  Created by 李苹果 on 2020/2/22.
//  Copyright © 2020 李苹果. All rights reserved.
//
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
struct timedate{
public:
    timedate(int newY,int newM,int newD,int newH,int newMin,int newS);
    timedate(){
        year;month;day=0;min=0;sec=0;
    }
    void set();
    void read();
    void warn();
    void print();
private:
    enum  Year {I=2010,II,III,IV,V,VI}year;
    enum  Month {Jur=1,Feb,Mar,Apr,May,Jun,Jul,Agu,Sep,Oct,Nov,Dec}month;
    int day;
    int hour;
    int min;
    int sec;
};
int main(){
    cout<<"please input year,month,day,hour,minitue,second:"<<endl;
    timedate date;
    date.read();
    date.warn();
    date.print();
}
void timedate::set(){
    
}
void timedate::read(){
    int x,y;
    cin>>x>>y;
    year=Year(x);
    month=Month(y);
    cin>>day>>hour>>min>>sec;
}
void timedate::warn(){
    while(!(2010<=year&&year<=2015)){//检查年份输入，范围为2010-2015
        cout<<"wrong year,please input agian:"<<endl;
        int x;
        cin>>x;
        year=Year(x);
    }
    while(!(1<=month&&month<=12)){//检查月份输入，范围为1-12
        cout<<"wrong month,please input agian:"<<endl;
        int x;
        cin>>x;
        month=Month(x);
    }
    while(!(1<=day&&day<=31)){//检查日期输入，范围为1-31
        cout<<"wrong day,please input agian:"<<endl;
        cin>>day;
    }
    while(!(0<=hour&&hour<=23)){//检查小时输入，范围为0-23
        cout<<"wrong hour,please input agian:"<<endl;
        cin>>hour;
    }
    while(!(0<=min&&min<=59)){//检查分钟输入，范围为0-59
        cout<<"wrong minitue,please input again:"<<endl;
        cin>>min;
    }
    while(!(0<=sec&&sec<=59)){//检查秒输入，范围为0-59
        cout<<"wrong sec,please input again:"<<endl;
        cin>>sec;
    }
}
void timedate::print(){
    cout<<year<<'.'<<month<<'.'<<day<<'.'<<hour<<':'<<min<<':'<<sec<<endl;
}
