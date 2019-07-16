#include <iostream>
#include<iomanip>               // This file is used for setw() - formatted output
#include <ctime>                // This file let us use system time for generating random number
#include <windows.h>            // This file lets us use Sleep() function
#include <stdlib.h>             // This file contains other used functions

using namespace std;

// We use structure to define properties of individual cars and thus helps us keep tracks of positions of each car.
struct car{
 int steps;
 int tot_steps=0;
 void draw();
};
//-----------------------------------------------------------------------------------------------------------------


void start();  //Starting message prompt;


//-----------------------------------------------------------------------------------------------------------------


int main() {

/*We will be using system time method to generate true random numbers.
  The time() function returns the system time expressed as a number of seconds.
  We thus store this result in a long type variable 'sec'. The reference is passed as time() takes a pointer to a variable.
*/

long sec;
time (&sec);
srand( (unsigned)sec);          //This initialises the srand() function. As srand() requires an 'unsigned int' type, we downcast sec.

car c1,c2,c3;
char ch;
do{
    start();
    while(c1.tot_steps < 50 && c2.tot_steps < 50 && c3.tot_steps < 50 ){
      //Initialise the steps taken by cars by random numbers ranging from 1-10;

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
		if(c1.tot_steps < 50 && c2.tot_steps < 50 && c3.tot_steps < 50) 
        system("CLS");
        }

//Printing the result of the race

    if(c1.tot_steps >= 50)
        cout<<"\n\n\n\n\n\n\nCar 1 wins";

    else if(c2.tot_steps >= 50)
            cout<<"\n\n\n\n\n\n\nCar 2 wins";

    else if(c3.tot_steps >= 50)
    cout<<"\n\n\n\n\n\n\nCar 3 wins";

    cout<<"\nDo you wish to race again? (y/n)";
    cin>>ch;
}
while(ch=='y' && ch=='Y');


return 0;
}


//This function draws cars at the calcuated positions.
void car::draw(){
int i= this->tot_steps + this->steps;
cout<<setw(i);
cout<<"C"<<flush;
}

void start(){

system("CLS");
cout<<"The race starts in 1...";
Sleep(1000);
cout<<"2...";
Sleep(1000);
cout<<"3..."<<flush;

system("CLS");

}
