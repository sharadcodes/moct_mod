#include <iostream>
#include "fundef.h"
#include <windows.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;
int choice;
/******************** MACRO DEFINITIONS FOR PRINTING LINES AND TABS ************************/
#define SIDETAB cout<<"\t\t\t\t\t";
#define CLS system("cls");
/*******************************************************************************************/
void moct(void);
void modis(void);
void indi_mean(void);
void disc_mean(void);
/*************************** FUNCTIONS FOR PRINTING LINES **********************************/
void line(void);
void newline(void);
void solidline(void);
void newsolidline(void);
void hashline(void);

int main()
{
    newsolidline();
    SIDETAB
    cout<<"  MEASURES OF CENTRAL TENDENCY & MEASURES OF DISPERSION\n";
    solidline();
    SIDETAB
    cout<<"MAIN MENU\n\n";
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
            modis();
            break;
        }
    default:
         {
           CLS
           main();
         }
    }
    return 0;
}


/*******************************************************************************************/
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
                                                            indi_mean();
                                                            CLS
                                                            main();
                                                            break;
                                                        }
                                                    case 2:
                                                        {
                                                            disc_mean();
                                                            break;
                                                        }
                                                    case 3:
                                                        {
                                                            //cont_mean();
                                                            break;
                                                        }
                                                    default:
                                                         {
                                                           CLS
                                                           main();
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
                            default:
                                 {
                                   CLS
                                   main();
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
                            default:
                                 {
                                   CLS
                                   main();
                                 }
                            }

            break;
        }
    case 3:
    {
                               newsolidline();
                               SIDETAB
                               cout<<"\t\t  MODE\n";
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
                              default:
                                   {
                                     CLS
                                     main();
                                   }
                               }

               break;
           }
    default:
           {
             CLS
             main();
           }
    }
}

void modis()
{
  newsolidline();
  SIDETAB
  cout<<"\t\tMEASURES OF DISPERSION\n";
  solidline();
  SIDETAB
  cout<<"MENU\n\n";
  SIDETAB
  cout<<"1: MEAN DEVIATION FROM MEAN\n";
  SIDETAB
  cout<<"2: MEAN DEVIATION FROM MEDIAN\n";
  SIDETAB
  cout<<"3: MEAN DEVIATION FROM MODE\n";
  SIDETAB
  cout<<"4: STANDARD DEVIATION\n";
  SIDETAB
  cout<<"5: COMBINED STANDARD DEVIATION\n";
  SIDETAB
  cout<<"6: COEFFICIENT OF MEAD DEVIATION\n";
  SIDETAB
  cout<<"7: COEFFICIENT OF STANDARD DEVIATION\n";
  line();
  SIDETAB
  cout<<"ENTER YOUR CHOICE : ";
  cin>>choice;
  switch(choice)
  {
    case 1:{
      //mdm();
      break;
    }
    case 2:{
      //mdmd();
      break;
    }
    case 3:{
      //mdmo();
      break;
    }
    case 4:{
      //sd();
      break;
    }
    case 5:{
      //csd();
      break;
    }
    case 6:{
      //comd();
      break;
    }
    case 7:{
      //cosd();
      break;
    }
    default:{
      CLS
      main();
    }
  }
}

/********************************** FUNCTION FOR MEAN OF INDIVIDUAL SERIES *********************************************************/

void indi_mean()
{
    CLS
    float obs[50];
    float m,n,total=0;
    newsolidline();
    SIDETAB
    cout<<"ENTER TOTAL NUMBER OF OBSERVATIONS : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        SIDETAB
        cout<<"ENTER OBSERVATION "<<i+1<<" : ";
        cin>>obs[i];
        total += obs[i];
    }
    CLS
    newsolidline();
    SIDETAB
    cout<<"OBSERVATIONS"<<endl;
    solidline();
    for(int i=0;i<n;i++)
    {
        SIDETAB
        cout<<setw(12)<<obs[i]<<endl;
    }
    line();
    SIDETAB
    cout<<"SUM OF OBSERVATIONS = "<<float(total)<<endl;
    SIDETAB
    cout<<"MEAN = "<<float(total)<<"/"<<n<<endl;
    SIDETAB
    cout<<"MEAN = "<<float(total/n);
    getchar();
    getchar();
}

/********************************** FUNCTION FOR MEAN OF DISCRETE SERIES *********************************************************/

void disc_mean()
{
    CLS
    float obs[50];
    float m,n,total=0;
    int freq[50],total_freq=0;
    newsolidline();
    SIDETAB
    cout<<"ENTER TOTAL NUMBER OF CLASSES : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        SIDETAB
        cout<<"ENTER OBSERVATION "<<i+1<<" : ";
        cin>>obs[i];
        SIDETAB
        cout<<"ENTER FREQUENCY OF "<<obs[i]<<" : ";
        cin>>freq[i];
        total += (freq[i]*obs[i]);
        total_freq += freq[i];
    }
    CLS
    newsolidline();
    SIDETAB
    cout<<"OBSERVATIONS\t\tFREQUENCY\t\tfi * Xi"<<endl;
    SIDETAB
    cout<<"    (x)     \t\t   (f)   \t\t       "<<endl;
    solidline();
    for(int i=0;i<n;i++)
    {
        SIDETAB
        cout<<setw(12)<<obs[i]<<"\t\t"<<setw(9)<<freq[i]<<"\t\t"<<setw(7)<<obs[i]*freq[i]<<endl;
    }
    SIDETAB
    cout<<"\t\t    TOTAL f = "<<total_freq<<"   TOTAL fi*Xi = "<<total;
    line();
    SIDETAB
    cout<<"MEAN = "<<float(total)<<"/"<<total_freq<<endl;
    SIDETAB
    cout<<"MEAN = "<<float(total/total_freq);
    getchar();
    getchar();
}
