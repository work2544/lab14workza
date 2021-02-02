#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d)
{
 int rannum=rand()%6+1;
 switch (rannum)
 {
 case 1:
	 swap(a,b);
	 break;
case 2:
	 swap(a,c);
	 break;
case 3:
	 swap(a,d);
	 break;
case 4:
	 swap(b,c);
	 break;
case 5:
	 swap(d,b);
	 break;
case 6:
	 swap(c,d);
	 break; 
 }
}