#include<iostream>
using namespace std;

#include"lib\Predict.h"
int main() {
	AroyaPredict ap;
	int w1 = 7;
	int w2 = 6;
	double t1 = 3;
	double t2 = 5;
	//cout << "weekday:" << ap.weekday(1, 1) << endl;
	//cout << "funH:" << ap.FunctionDeltaH(t1, t2) << endl;
	//cout << "funD:" << ap.FunctionDeltaD(t1, t2) << endl;
	cout << "ans:"<<ap.getAns(ap.weekday(w1, w2), t1, t2) << endl;
	system("pause");
	return 0;
}