#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int small_room;
    int large_rooms;
    // float cost=(small_room*25+large_rooms*35);
    float tax=(small_room*25+large_rooms*35)*(int(0.6));
    float total=(small_room*25+large_rooms*35)+tax;
    cout<<"Hey,Welcome to the jack cleaning Service"<<endl;
    cout<<"How many small room you want to clean: ";cin>>small_room;
    cout<<"How many large room you want to clean: ";cin>>large_rooms;
    // cout<<"==================================================="<<endl;
    cout<<"Estimate for room cleaning is:  "<<endl;
    
    cout<<"Price per small room is: 25$ "<<endl;
    
    cout<<"Price per large room is: 35$ "<<endl;
    
    cout<<"Estimate for Room cleaning servies are"<<endl;
    
    cout<<"Total Cost = $"<<small_room*25+large_rooms*35<<endl;
    cout<<"Total Tax is = $"<<float((small_room*25+large_rooms*35))*((0.06))<<endl;
    cout<<"=============================================================================================================================="<<endl;
    cout<<"Total Estimate with tax is: "<<float((small_room*25+large_rooms*35))+float((small_room*25+large_rooms*35))*((0.06))<<endl;
    cout<<"This bill can paid within 30 days"<<endl;
    getch();
    return 0;
}