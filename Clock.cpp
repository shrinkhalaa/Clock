#include<iostream>
#include<iomanip>
#include <unistd.h>
using namespace std;
int clock(int h, int m, int s){
    for(h;h<24;h++){
            for(m;m<60;m++){
                for(s;s<60;s++){
                    system("cls");
                    cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s;
                    sleep(1);
                }
            s=00;
            }
        m=00;
        }
    clock(0,0,0);
}
int main(){
    int error,trial,h,s,m;
    error=trial=0;
    while(error==0){
        cout<<endl<<"Set the time you want the clock to run from, in 24 hour format"<<endl;
        cout<<"Enter hours:"<<endl;
        cin>>h;
        cout<<"Enter minutes:"<<endl;
        cin>>m;
        cout<<"Enter seconds:"<<endl;
        cin>>s;
        if(h>24 || m>59 || s>59){
        cout<<"Invalid time;";
        break;}
        else{
            clock(h,m,s);
    }
}
    return 0;}