#include <iostream>
#include<iomanip>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdlib.h>

using namespace std;

struct car{
int steps;
int tot_steps=0;
void draw();
}c1,c2,c3;



int main()
{
   long sec;
   time( &sec);            // Reads the present time
   srand( (unsigned)sec);
    char ch= 'y';
    while(c1.tot_steps < 50 && c2.tot_steps < 50 && c3.tot_steps < 50 ){
            c1.steps= (rand() %10) +1;
            c2.steps= (rand() %10) +1;
            c3.steps= (rand() %10) +1;

            c1.draw();
            c1.tot_steps+=c1.steps;
            cout<<endl<<endl;
            c2.draw();
            c2.tot_steps+=c2.steps;
            cout<<endl<<endl;
            c3.draw();
            c3.tot_steps+=c3.steps;
            Sleep(1500);

            cout<<"\n\n"<<flush;
            system("CLS");

            }
if(c1.tot_steps >= 50)
    cout<<"Car1 wins";
else if(c2.tot_steps >= 50)
    cout<<"car 2 wins";
else if(c3.tot_steps >= 50)
    cout<<"Car 3 wins";
   return 0;
}


void car::draw(){
int i= this->tot_steps + this->steps;
cout<<setw(i);
cout<<"C";
}
