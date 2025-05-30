#include <iostream>
#include <string>

using namespace std;

#include "Treatment.cpp"
#include "Massage.cpp"

int main(){
    cout<<"Welcome to the Spa System"<<endl;
    

    bool end = false;

    while(end == false){
        cout<<""<<endl;
        cout<<"Menu:"<<endl;
        cout<<"1. Enter new appointment of massage."<<endl;
        cout<<"2. Exit "<<endl;

        int decision;
        cout<<"Enter your decision here:  ";
        cin>>decision;
        cout<<""<<endl;

        switch (decision)
        {
        case 1:{
            string name = "Personalized therapeutic massage";
            int duration;
            float price;
            int hour;
            int minutes;
            string hourStirng;
            int clientChose;
            bool client;

            cout<<"Please enter the Service duration: (numeric value)"<<endl;
            cin>>duration;
            cout<<""<<endl;

            cout<<"Please enter the Service price: (numeric value)"<<endl;
            cin>>price;
            cout<<""<<endl;

            cout<<"You will enter the time for the appointment: "<<endl;
            cout<<"Hour: (0 to 24 hours)"<<endl;
            cin>>hour;
            cout<<"Minutes: (00 to 59 minutes)"<<endl;
            cin>>hour;
            cout<<""<<endl;
            hourStirng = to_string(hour)+":"+to_string(minutes);

            Massage massage = Massage(name, duration, price, hourStirng);

            cout<<"Is your client a returning client: "<<endl;
            cout<<"Type 1 if it is, type 0 if its not."<<endl;
            cin>>clientChose;

            if(clientChose == 1){
                massage.setClient(true);
            }
            else{
                massage.setClient();
            }

            cout<<massage.getInfo()<<endl;

        }break;

        case 2:{
            end = true;
        }break;

        default:{
            cout<<"Invalid Option. Coming back to main menu."<<endl;
        }break;
        }

    }

    cout<<"Thank your for using this system."<<endl;

    return 0;
}
