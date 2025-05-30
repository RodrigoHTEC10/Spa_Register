#ifndef MASSAGE_H
#define MASSAGE_H

#include <iostream>
#include <string>
#include "Treatment.h"

using namespace std;

class Massage: public Treatment{
    private:
        string time;
        bool returning;
        

    public:

        Massage();
        Massage(string serviceName_, int duration_, float basePrice_, string time, bool client_);
        void setClient();
        void setClient(bool);
        float calculatePrice() override;
        float calculatePrice(bool client) override;
        string getInfo() override;

};

#endif