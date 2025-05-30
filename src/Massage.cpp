#include <iostream>
#include <string>

using namespace std;

#include "../include/Massage.h"


Massage::Massage():Treatment(){
    time = "";
    returning = false;
};

Massage::Massage(string serviceName_, int duration_, float basePrice_, string time_):Treatment( serviceName_,  duration_,  basePrice_){
    time = time_;
    returning = false;
};

void Massage::setClient(){
    returning = false;
};

void Massage::setClient(bool){
    returning = true;
};

float Massage::calculatePrice(){
    float price = basePrice;
    if(duration >60){
        price = price+200.0;
    }
    if(returning){
        price = price*0.9;
    }

    return price; 
};

string Massage::getInfo(){
    string text = "Service Name: "+serviceName+"\nDuration: "+to_string(duration)+"\nBase Price: $ "+to_string(basePrice)+"\n";
    if(returning){
        text = text + "Client Type: Returning Client\n";
    }
    
    text = text + "\nNote: ";

    if(returning){
        text = text + "Client discount applied: 10%\n";
    }
    if(duration >60){
        text = text + "Duration exceeds 60 minutes. Surcharge applied: +$200.00\n";
    }
    text = text + "Final Price: "+to_string(calculatePrice())+"\nBooking confirmed.";
    return text;
};
