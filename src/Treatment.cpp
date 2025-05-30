#include <iostream>
#include <string>

using namespace std;

#include "../include/Treatment.h"

Treatment::Treatment(){
    serviceName = "";
    duration = 0;
    basePrice = 0.0;
};
Treatment::Treatment(string serviceName_, int duration_, float basePrice_){
    serviceName = serviceName_;
    duration = duration_;
    basePrice = basePrice_;
};

string Treatment::getInfo(){
    string text = "Service Name: "+serviceName+"\nDuration: "+to_string(duration)+"\nBase Price: $ "+to_string(basePrice)+"\n";
    return text;
};
