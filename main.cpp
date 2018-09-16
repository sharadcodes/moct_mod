#include <iostream>
#include "fundef.h"
#include <windows.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

/******************** MACRO DEFINITIONS FOR PRINTING LINES AND TABS ************************/

#define SIDETAB cout<<"\t\t\t\t\t";
#define CLS system("cls");

/*************************** FUNCTIONS FOR PRINTING LINES **********************************/

void line(void);
void newline(void);
void solidline(void);
void newsolidline(void);
void hashline(void);

/*******************************************************************************************/

void moct(void);
void modis(void);


void newline()
{
    int i;
    cout<<"\n\n\n\n\n\t\t\t\t\t";
    for(i=1;i<=57;i++)
    {
        cout<<"=";
    }
    cout<<"\n\n";
}
void line()
{
    int i;
    cout<<"\n\t\t\t\t\t";
    for(i=1;i<=57;i++)
    {
        cout<<"=";
    }
    cout<<"\n\n";
}
void hashline()
{
    int i;
    cout<<"\t\t\t\t\t";
    for(i=1;i<=57;i++)
    {
        cout<<"#";
    }
    cout<<"\n";
}
void newsolidline()
{
    int i;
    cout<<"\n\n\n\n\n\t\t\t\t\t";
    for(i=1;i<=57;i++)
    {
        printf("%c",254);
    }
    cout<<"\n\n";
}
void solidline()
{
    int i;
    cout<<"\n\t\t\t\t\t";
    for(i=1;i<=57;i++)
    {
        printf("%c",254);
    }
    cout<<"\n\n";
}

void moct()
{
    int choice;
    newsolidline();
    SIDETAB
    cout<<"\t      MEASURES OF CENTRAL TENDENCY\n";
    solidline();
    SIDETAB
    cout<<"MENU\n\n";
    SIDETAB
    cout<<"1: MEAN\n";
    SIDETAB
    cout<<"2: MEDIAN\n";
    SIDETAB
    cout<<"3: MODE\n";
    line();
    SIDETAB
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;
    CLS
    switch(choice)
    {
    case 1:
        {
                            newsolidline();
                            SIDETAB
                            cout<<"\t\t\tMEAN\n";
                            solidline();
                            SIDETAB
                            cout<<"MENU\n\n";
                            SIDETAB
                            cout<<"1: ARITHMATIC MEAN\n";
                            SIDETAB
                            cout<<"2: GEOMETRIC MEAN\n";
                            SIDETAB
                            cout<<"3: HARMONIC MEAN\n";
                            line();
                            SIDETAB
                            cout<<"ENTER YOUR CHOICE : ";
                            cin>>choice;
                            CLS
                                switch(choice)
                                {
                                case 1:
                                    {
                                                    newsolidline();
                                                    SIDETAB
                                                    cout<<"\t\t  ARITHEMATIC MEAN\n";
                                                    solidline();
                                                    SIDETAB
                                                    cout<<"MENU\n\n";
                                                    SIDETAB
                                                    cout<<"1: INDIVIDUAL SERIES\n";
                                                    SIDETAB
                                                    cout<<"2: DESCRETE SERIES\n";
                                                    SIDETAB
                                                    cout<<"3: CONTINOUS SERIES\n";
                                                    line();
                                                    SIDETAB
                                                    cout<<"ENTER YOUR CHOICE : ";
                                                    cin>>choice;
                                                    CLS
                                                    switch(choice)
                                                    {
                                                    case 1:
                                                        {
                                                            //indi_mean();
                                                            break;
                                                        }
                                                    case 2:
                                                        {
                                                            //disc_mean();
                                                            break;
                                                        }
                                                    case 3:
                                                        {
                                                            //cont_mean();
                                                            break;
                                                        }
                                                    }

                                    break;
                                }
                            case 2:
                                {
                                    //geo_mean();
                                    break;
                                }
                            case 3:
                                {
                                    //harm_mean();
                                    break;
                                }
                            }
                            break;
        }
    case 2:
 {
                            newsolidline();
                            SIDETAB
                            cout<<"\t\t  MEDIAN\n";
                            solidline();
                            SIDETAB
                            cout<<"MENU\n\n";
                            SIDETAB
                            cout<<"1: INDIVIDUAL SERIES\n";
                            SIDETAB
                            cout<<"2: DESCRETE SERIES\n";
                            SIDETAB
                            cout<<"3: CONTINOUS SERIES\n";
                            line();
                            SIDETAB
                            cout<<"ENTER YOUR CHOICE : ";
                            cin>>choice;
                            CLS
                            switch(choice)
                            {
                            case 1:
                                {
                                    //indi_median();
                                    break;
                                }
                            case 2:
                                {
                                    //disc_median();
                                    break;
                                }
                            case 3:
                                {
                                    //cont_median();
                                    break;
                                }
                            }

            break;
        }
    case 3:
        {
            //mode();
            break;
        }
    }
}

void modis();
/*******************************************************************************************/


int main()
{
    newsolidline();
    SIDETAB
    cout<<"  MEASURES OF CENTRAL TENDENCY & MEASURES OF DISPERSION\n";
    solidline();
    SIDETAB
    cout<<"MAIN MENU\n\n";
    int choice;
    SIDETAB
    cout<<"1: CENTRAL TENDENCY\n";
    SIDETAB
    cout<<"2: DISPERSION\n";
    line();
    SIDETAB
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;
    CLS
    switch(choice)
    {
    case 1:
        {
            moct();
            break;
        }
    case 2:
        {
            //modis();
            break;
        }
    }
    return 0;
}
