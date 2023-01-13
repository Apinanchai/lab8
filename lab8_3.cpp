#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	
	char y;
	if(x > (char)64 and x <(char)91 ) {
		y = x-1;
	}else{	
	    y = '0';
	}

	if(x == 'A'){
		y = 'Z';
	}
	return y;
}
    
