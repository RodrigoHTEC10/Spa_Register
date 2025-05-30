#include <iostream>
#include <string>

using namespace std;

#include "../include/Massage.h"

/*Massage() is the default constructor*/
Massage::Massage():Treatment(){
    time = "";
    returning = false;
};

/*Massage(string serviceName_, int duration_, float basePrice_, string time_, bool client_) is the constructor with parameters.*/
Massage::Massage(string serviceName_, int duration_, float basePrice_, string time_, bool client_):Treatment( serviceName_,  duration_,  basePrice_){
    time = time_;
    returning = client_;
};

/*calculatePrice() calculates the price of a non returning client.*/
float Massage::calculatePrice(){
    float price = basePrice;
    if(duration >60){
        price = price+200.0;
    }
    return price; 
};

/*calculatePrice(bool client) calculates the price of a returning client.*/
float Massage::calculatePrice(bool client){
    float price = basePrice;
    if(duration >60){
        price = price+200.0;
    }
    price = price*0.9;
    return price; 
};

/*getInfo() returns the information of the Massage*/
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
    if(returning){
        text = text + "Final Price: $ "+to_string(calculatePrice(true))+"\nBooking confirmed.";
    }
    else{
        text = text + "Final Price: $ "+to_string(calculatePrice())+"\nBooking confirmed.";
    }
    
    return text;
};