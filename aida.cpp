#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//x
	double a1c[5]={4,4,5,3,3}, a2c[5]={3,3,4,2,3}, a3c[5]={5,4,2,2,2};
	//x
	cout << "MATRIX X :"<<endl;
		int nanas1=0;
	do{
		cout << a1c[nanas1]<<" | ";
		nanas1++;
	}while(nanas1<5);cout<<endl;
	int nanas2=0;
	do{
		cout << a2c[nanas2]<<" | ";
		nanas2++;
	}while(nanas2<5);cout<<endl;
		int nanas3=0;
	do{
		cout << a3c[nanas3]<<" | ";
		nanas3++;
	}while(nanas3<5);cout<<endl;
	//r
	double mc1=max(a1c[0],max(a2c[0],a3c[0])),
	mc2=max(a1c[1],max(a2c[1],a3c[1])),
	mc3=max(a1c[2],max(a2c[2],a3c[2])),
	mc4=max(a1c[3],max(a2c[3],a3c[3])),
	mc5=max(a1c[4],max(a2c[4],a3c[4]));
	
	double Ra1c[5]={ (a1c[0]/mc1),(a1c[1]/mc2),(a1c[2]/mc3),(a1c[3]/mc4),(a1c[4]/mc5) };
	double Ra2c[5]={ (a2c[0]/mc1),(a2c[1]/mc2),(a2c[2]/mc3),(a2c[3]/mc4),(a2c[4]/mc5) };
	double Ra3c[5]={ (a3c[0]/mc1),(a3c[1]/mc2),(a3c[2]/mc3),(a3c[3]/mc4),(a3c[4]/mc5) };
	//r
	cout << endl<<endl;
		cout << "MATRIX R :"<<endl;
	int apel1=0;
	do{
		cout << Ra1c[apel1]<<" | ";
		apel1++;
	}while(apel1<5);cout<<endl;
		int apel2=0;
	do{
		cout << Ra2c[apel2]<<" | ";
		apel2++;
	}while(apel2<5);cout<<endl;
		int apel3=0;
	do{
		cout << Ra3c[apel3]<<" | ";
		apel3++;
	}while(apel3<5);cout<<endl;
	//bb w
	double w1=5, w2=3, w3=4, w4=4, w5=2;
	cout << endl << "BOBOT W :"<<endl<< w1<<" | "<< w2<<" | "<< w3<<" | "<< w4<<" | "<< w5<<" | "<<endl;
	//r*w
	double RWa1c[5]={ (Ra1c[0]*w1),(Ra1c[1]*w2),(Ra1c[2]*w3),(Ra1c[3]*w4),(Ra1c[4]*w5) };
	double RWa2c[5]={ (Ra2c[0]*w1),(Ra2c[1]*w2),(Ra2c[2]*w3),(Ra2c[3]*w4),(Ra2c[4]*w5) };
	double RWa3c[5]={ (Ra3c[0]*w1),(Ra3c[1]*w2),(Ra3c[2]*w3),(Ra3c[3]*w4),(Ra3c[4]*w5) };
	//r*w
	cout << endl<<endl;
}
