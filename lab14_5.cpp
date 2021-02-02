#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *w,int *x,int *y,int *z)
{
int rannum=rand()%6+1;
 switch (rannum)
 {
 case 1:
	 swap(*w,*x);
	 break;
case 2:
	 swap(*w,*y);
	 break;
case 3:
	 swap(*w,*z);
	 break;
case 4:
	 swap(*x,*y);
	 break;
case 5:
	 swap(*x,*z);
	 break;
case 6:
	 swap(*z,*y);
	 break; 
 }
}