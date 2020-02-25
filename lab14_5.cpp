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
void shuffle(int *a,int *b, int *c, int *d){
	int *x[] = {a,b,c,d};
	int y,z;
	int t;

	for(int i=0;i<100;i++){
		y=rand()%4;
		z=rand()%4;
		t=*x[y];
		*x[y]=*x[z];
		*x[z]=t;
	}

	*a=*x[0];
	*b=*x[1];
	*c=*x[2];
	*d=*x[3];
}