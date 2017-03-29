//using namespace std;
class ELO {
public:
	void setK(int K);
	void setRA(int RA);
	int getRA();
	void setRB(int RB);
	int getRB();
	void cal(double game);
private:
	void setE(void);
	int K,RA,RB;
	double EA,EB;
};
