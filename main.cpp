#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
#define SIZE 10

int main(){

  /*int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  
    int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;*/

/*Example Array*/
  /*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 
*/
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */
  char *pa, *pb, temp;
    int i;
  char a[SIZE];
  cout<<"Input string: ";
  cin>>a;
  pa = &a[0];
  cout<<endl;
  cout << "Original: ";
  for(i=0; i<strlen(a);i++,pa++)
    cout<<setw(3)<<*pa<<" ";
    cout<<setw(3)<<*pa<<endl;
  pa = &a[0]; pb = &a[strlen(a)-1];
  cout<<endl;
  cout<<"Swap: ";
  for(i=0;i<strlen(a)/2;i++){
    temp =*pa;
    *pa = *pb;
    *pb = temp;
    pa++; pb--;
  }
  pa = &a[0];
  for(i=0;i<strlen(a)-1;i++,pa++)
    cout<<setw(3)<<*pa<<" ";
    cout<<setw(3)<<*pa<<endl;
}
