#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;

const double icecoffee_cost = 2.50;
const double lemontee_cost = 2.50;
const double lotte_cost = 3.00;
const double hottea_cost = 2.50;
const double cappachino_cost = 3.00;
const double smootie_cost = 3.25;
const double water_cost = 0.99;
const double spirit_cost = 1.00;
const double historybook_cost = 3.00;
const double magazine_cost = 2.00;
const double cartoon_cost = 4.00;
char choice;
void tutorial(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea);
void sales(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea);
void sizesSold(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea);
void totalCupsSold(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea);
void totalSales(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea);


int main()
{
    int icecoffee = 0;
    
    int lemontee = 0;
  
    int lotte = 0;
  
    int hottea = 0;
    
    int cappachino = 0;

    int smootie = 0;
    int water = 0;
    int spirit = 0;
    int historybook = 0;
    int magazine = 0;
    int cartoon = 0;

    char runagain;

    do {
        tutorial(icecoffee, lemontee, lotte, cappachino, smootie, water, spirit, historybook, magazine, cartoon, hottea);

        cout << "Do you want to run this program again? Enter Y for yes and N for no: " << endl;
        cin >> runagain;
        system("cls");

    } while (runagain == 'y' || runagain == 'Y');



}

void tutorial(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea)
{
    cout << "Please select which option you would like." << endl;
    cout << "1. Buy Coffee&book" << endl;
    cout << "2. Display the book &coffee of each TYPE sold" << endl;
    cout << "3. Display the total amount of money earned" << endl;
    cin >> choice;

    switch (choice)
    {
    case '1':
        sales(icecoffee, lemontee, lotte, cappachino, smootie, water, spirit, historybook, magazine, cartoon, hottea);
        break;
    case '2':
        sizesSold(icecoffee, lemontee, lotte, cappachino, smootie, water, spirit, historybook, magazine, cartoon, hottea);
        break;
    case '3':
        totalSales(icecoffee, lemontee, lotte, cappachino, smootie, water, spirit, historybook, magazine, cartoon, hottea);
        break;
    default:
        cout << "Invalid number selection. Please select a number between 1 and 4." << endl;
    }

}
void sales(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea)
{
    string size;

    cout << setw(50) << "MENU" << endl << endl;
    cout << setw(60) << "icecoffee ........................ $" << showpoint << setprecision(3) << icecoffee_cost << endl;
    cout << setw(60) <<"lemontee ....................... $" << showpoint << setprecision(3) << lemontee_cost << endl;
    cout << setw(60) <<"lotte ........................ $" << showpoint << setprecision(3) << lotte_cost << endl;
    cout << setw(60) <<"hottea ........................ $" << showpoint << setprecision(3) << hottea_cost << endl;
    cout << setw(60) <<"cappachino ........................ $" << showpoint << setprecision(3) << cappachino_cost << endl;
    cout << setw(60) <<"smootie ........................ $" << showpoint << setprecision(3) << smootie_cost << endl;
    cout << setw(60) <<"water ........................ $" << showpoint << setprecision(3) << water_cost << endl;
    cout << setw(60) <<"spirit ........................ $" << showpoint << setprecision(3) << spirit_cost << endl;
    cout << setw(60) <<"historybook ........................ $" << showpoint << setprecision(3) << historybook_cost << endl;
    cout << setw(60) <<"magazine ........................ $" << showpoint << setprecision(3) << magazine_cost << endl;
    cout << setw(60) <<"cartoon ........................ $" << showpoint << setprecision(3) << cartoon_cost << endl;
    
    
    cout << setw(60) <<"Please read the menu, and select the size of the coffee that you \nwould like to purchase." << endl << endl;

    cin>>setw(6)>>size;

    if(size == "icecoffee")
    {
        cout<<"How many icecoffee coffee's would you like sir?"<<endl;
        cout<<":";
        cin>>icecoffee;
    }
    else if(size == "lemontee")
    {
        cout<<"How many lemontee's would you like sir?"<<endl;
        cout<<":";
        cin>>lemontee;
    }
    else if(size == "lotte")
    {
        cout<<"How many lotte coffee's would you like sir?"<<endl;
        cout<<":";
        cin>>lotte;
    }
    else if(size == "hottea")
    {
        cout<<"How many hottea coffee's would you like sir?"<<endl;
        cout<<":";
        cin>>hottea;
    }
    
    else if(size == "cappachino")
    {
        cout<<"How many cappachino coffee's would you like sir?"<<endl;
        cout<<":";
        cin>>cappachino;
    }
    else if(size == "smootie")
    {
        cout<<"How many smootie's would you like sir?"<<endl;
        cout<<":";
        cin>>smootie;
    }
    else if(size == "water")
    {
        cout<<"How many water's would you like sir?"<<endl;
        cout<<":";
        cin>>water;
    }
    else if(size == "spirit")
    {
        cout<<"How many spirit's would you like sir?"<<endl;
        cout<<":";
        cin>>spirit;
        
    }
    
    else if(size == "historybook")
    {
        cout<<"How many historybook's would you like sir?"<<endl;
        cout<<":";
        cin>>historybook;
        
    }
    else if(size == "magazine")
    {
        cout<<"How many magazine's would you like sir?"<<endl;
        cout<<":";
        cin>>magazine;
        
    }
    else if(size == "cartoon")
    {
        cout<<"How many cartoon's would you like sir?"<<endl;
        cout<<":";
        cin>>cartoon;
        
    }
    
    
    
    
    
}
void sizesSold(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea)
{
    cout << "\nNumber of cups of icecoffee sold: " << icecoffee << endl;
    cout << "Number of cups of lemontee sold: " << lemontee << endl;
    cout << "Number of cups of lotte sold: " << lotte << endl;
    cout << "Number of cups of cappachino sold: " << cappachino << endl;
    cout << "Number of cups of smootiesold: " << smootie << endl;
    cout << "Number of cups of water sold: " << water << endl;
    cout << "Number of cups of spirit sold: " << spirit << endl;
    cout << "Number of historybook sold: " << historybook << endl;
    cout << "Number of magazine sold: " << magazine << endl;
    cout << "Number of cartoon sold: " << cartoon << endl;

    
    
}

void totalSales(int & icecoffee, int & lemontee, int & lotte, int & cappachino, int & smootie, int & water, int & spirit, int & historybook, int & magazine, int & cartoon, int & hottea)
{
    double moneyMade = (icecoffee * icecoffee_cost) + (lemontee * lemontee_cost) + (lotte * lotte_cost) + (hottea * hottea_cost) + (cappachino * cappachino_cost) + (smootie * smootie_cost) + (water * water_cost) + (spirit * spirit_cost) + (historybook * historybook_cost) + (magazine * magazine_cost) + (cartoon * cartoon_cost);
    cout << "Total Sales are: $" << showpoint << setprecision(2) << fixed <<moneyMade << endl;
}
