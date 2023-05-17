#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	
	cout << "Enter the first number:";
	cin >> a;
	
	cout << "Enter the second number:";
	cin >> b;
	
	cout << "Enter the third number:";
	cin >> c;
	
	cout << "Enter the fourth number:";
	cin >> d;
	
	if(a>b && a>c && a>d){
		cout << "first is maximum" << endl;
	}
	else if(b>a && b>c && b>d){
		cout << "second is maximum" << endl;
	}	
	else if(c>a && c>d && c>b){
		cout << "third is maximum" << endl;
	}	
	else if(d>a && d>c && d>b){
		cout << "fourth is maximum" << endl;
	}
	
	if(a<b && a<c && a<d){
		cout << "first is minimum" << endl;
	}
	else if(b<a && b<c && b<d){
		cout << "second is minimum" << endl;
	}	
	else if(c<a && c<d && c<b){
		cout << "third is minimum" << endl;
	}	
	else if(d<a && d<c && d<b){
		cout << "fourth is minimum" << endl;
	}
	
	system("pause");
	
	return 0;
}
