#include <iostream>




int subtract(int a,int b);

int multiply(int a,int b);

int divide(int a,int b);

int main()
{
	 /* ?\n;||(or) e &&(and)*/


	std::cout << multiply(3,2) << "\n";
	//std::cout << 5/3 << "\n";
	std::cout << divide(5,3) << "\n";

	return 0;
}


int subtract(int a,int b){
	return a + (-b);
}

int multiply(int a,int b){

	int r = 0;
	for(int i = 0;i < b;i++){
		r += a;
	}
	return r;
}

int divide(int a,int b){

	int c = 0;
	while(a >= b){
		a = subtract(a,b);
		c++;
	}
	return c;
}


