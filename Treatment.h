#ifndef TREATMENT_H
#define TREATMENT_H

#include <iostream>
#include <string>

using namespace std;

class Treatment{
    protected:
        string serviceName;
        int duration;
        float basePrice;

    public:

        Treatment();
        Treatment(string serviceName_, int duration_, float basePrice_);
        virtual float calculatePrice() = 0;
        virtual float calculatePrice(bool client_) = 0;
        virtual string getInfo();

};

#endif