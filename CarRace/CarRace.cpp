#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

long sec;
time ( &sec );

struct car{
int steps;
int tot_steps;
}c1,c2,c3;

int main() {
srand( (unsigned)sec);
char ch= 'y';
while(ch=='y'){
c1.steps= (rand() %10) +1;
c2.steps= (rand() %10) +1;
c3.steps= (rand() %10) +1;
cout<<c1.steps<<endl<<c2.steps<<endl<<c3.steps;
cout<<"\n\n Do you want to continue ? ";
cin>>ch;
cout<<endl<<endl;
}
return 0;




}
