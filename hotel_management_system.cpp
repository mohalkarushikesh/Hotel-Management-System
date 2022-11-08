#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchiken=0;
    //food items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schiken=0;
    //Total proc of items
    int Total_rooms=0,Total_pas
    
    
    
    ta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chiken=0;
    
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available : ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll : ";
    cin>>Qchiken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) burger";
    cout<<"\n4) noodles";
    cout<<"\n5) shake";
    cout<<"\n6) chicken-roll";
    cout<<"\n7) Infromation regarding sales and collection ";
    cout<<"\n8 Exit";

    cout<<"\n\n Please Enter you choice! ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if (Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms = Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
        }
        else
            cout<<"\n\t Only "<<Qrooms-Srooms<<"Rooms remaining in hotel";
            break;
    case 2:
        cout<<"\n\n Enter Pasta Quantity : ";

        cin>>quant;
        if (Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta = Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
        }
        else
            cout<<"\n\t Only "<<Qpasta-Spasta<<"Pasta remaining in hotel";
            break;
    case 3:
        cout<<"\n\n Enter burger Quantity : ";

        cin>>quant;
        if (Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            Total_burger = Total_burger+quant*120;
            cout<<"\n\n\t\t"<<quant<<"burger is the order!";
        }
        else
            cout<<"\n\t Only "<<Qburger-Sburger<<"burger remaining in hotel";
            break;
    case 4:
        cout<<"\n\n Enter noodles Quantity : ";

        cin>>quant;
        if (Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles+quant*140;
            cout<<"\n\n\t\t"<<quant<<"noodles is the order!";
        }
        else
            cout<<"\n\t Only "<<Qnoodles-Snoodles<<"Noodles remaining in hotel";
            break;
    case 5:
        cout<<"\n\n Enter Shakes Quantity : ";

        cin>>quant;
        if (Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            Total_shake = Total_shake+quant*120;
            cout<<"\n\n\t\t"<<quant<<"shake is the order!";
        }
        else
            cout<<"\n\t Only "<<Qshake-Sshake<<"Shakes remaining in hotel";
            break;
    case 6:
        cout<<"\n\n Enter Chicken Quantity : ";

        cin>>quant;
        if (Qchiken-Schiken>=quant)
        {
            Schiken=Schiken+quant;
            Total_chiken = Total_chiken+quant*150;
            cout<<"\n\n\t\t"<<quant<<"Chiken-roll is the order!";
        }
        else
            cout<<"\n\t Only "<<Qchiken-Schiken<<"Chiken-roll remaining in hotel";
            break;
    case 7:

        cout<<"\n\t\tDetails of sales and collection ";
        cout<<"\n\n Number of rooms we have : "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

        cout<<"\n\n Number of Pastas we had : "<<Qpasta;
        cout<<"\n\n Number of Pastas we sold "<<Spasta;
        cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
        cout<<"\n\n Total Pastas collection for the day : "<<Total_pasta;

        cout<<"\n\n Number of burgers we had : "<<Qburger;
        cout<<"\n\n Number of burgers we sold "<<Sburger;
        cout<<"\n\n Remaining burgers : "<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day : "<<Total_burger;

        cout<<"\n\n Number of noodles we had : "<<Qnoodles;
        cout<<"\n\n Number of noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodle collection for the day : "<<Total_noodles;

        cout<<"\n\n Number of shakes we had : "<<Qshake;
        cout<<"\n\n Number of shakes we sold "<<Sshake;
        cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
        cout<<"\n\n Total shake collection for the day : "<<Total_shake;

        cout<<"\n\n Nuber of chicken-rolls we had : "<<Qchiken;
        cout<<"\n\n Number of chicken-rolls we sold "<<Schiken;
        cout<<"\n\n Remaining chicken-rolls : "<<Qchiken-Schiken;
        cout<<"\n\n Total chicken-roll collection for the day : "<<Total_chiken;

        cout<<"\n\n\n Total collection for the day : "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chiken;
        break;
    case 8:
        exit(0);

    default:
        cout<<"\n Please select the numbers mentioned above!";
        break;
    }
    goto m;
}