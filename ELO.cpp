#include "ELO.h"
#include<cmath>
#include<iostream>
using namespace std;
void ELO::setK(int K){
	this->K=K;
}
void ELO::setRA(int RA){
	this->RA=RA;
}
int ELO::getRA() {
	return RA;
}
void ELO::setRB(int RB){
	this->RB=RB;
}
int ELO::getRB() {
	return RB;
}
//int getE(int RA,RB)
void ELO::cal(double game){
	setE();
	RA=RA+K*(game-EA);
	game=1-game;
	RB=RB+K*(game-EB);
	//if((int)(RA*10)%10>=5)RA+=1;
	//else if((int)(RA*10)%10>=5&&(int)(RB*10)%10>=5){RA++;RB++;}
	//if((int)(RB*10)%10>=5)RB+=1;
	return;
}
void ELO::setE(void){
	double MA,MB;
	MA=1/(1+pow(10,(RB-RA)/400));
	MB=1/(1+pow(10,(RA-RB)/400));
	//EA=1/MA;
	//EB=1/MB;
	//cout<<MA<<" "<<MB<<" "<<EA<<" "<<EB<<endl;
}
