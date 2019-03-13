/*
Author 		: M Reza Atthariq Kori 
NPM 		: 140810180060
Deskripsi 	: Program operasi hitung menggunakan pointer
Tahun 		: 2019
*/

#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
 	float panjang;
 	float lebar;
} 	segiempat;

void input(segiempat *s){
	cout<<"Input Panjang	: ";cin>>s->panjang;
	cout<<"Input Lebar	: ";cin>>s->lebar;
}

float keliling(segiempat s){
	return s.panjang+s.panjang+s.lebar+s.lebar;
}
float luas(segiempat s){
	return s.panjang*s.lebar;
}
float diagonal(segiempat s){
	return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
}
void print(segiempat s){
	cout<<"\nPanjang		: "<<s.panjang<<endl;
	cout<<"Lebar		: "<<s.lebar<<endl;
	cout<<"Keliling	: "<<keliling(s)<<endl;
	cout<<"Luas		: "<<luas(s)<<endl;
	cout<<"Diagonal	: "<<diagonal(s)<<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}

