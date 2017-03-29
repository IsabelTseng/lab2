#include <iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include"ELO.h"
using namespace std;
int main() {
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	if(!inFile){
		cerr<<"Failed open input file"<<endl;
		exit(1);
	}
	if(!outFile){
		cerr<<"Failed open output file"<<endl;
		exit(1);
	}
	int K,RA,RB;
	double game;
	inFile>>K>>RA>>RB;
	outFile<<RA<<' '<<RB<<endl;
	ELO elo;
	elo.setK(K);
	elo.setRA(RA);
	elo.setRB(RB);
	while(inFile>>game){
		//int tempA;
		//tempA=elo.cal(elo.getRA(),elo.getRB(),game);
		//elo.setRB(elo.cal(elo.getRB(),elo.getRA(),1-game));
		//elo.setRA(tempA);
		elo.cal(game);
		outFile<<elo.getRA()<<' '<<elo.getRB()<<endl;
	}
	return 0;
}
