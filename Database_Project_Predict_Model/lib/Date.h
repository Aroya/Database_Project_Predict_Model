#ifndef AROYA_DATE
#define AROYA_DATE

#include<sstream>
#include<string>
using namespace std;

class AroyaDate {
public:
	AroyaDate();
	/*date format
	YYYY?MM?DD
	?���κη������ַ�
	*/
	void input(const string&dateStr);
	//��ȡ����
	int getWeekday();
	//��ȡ���׼ʱ������ڲ�
	int getDateInstant();
	//��ȡ�·�
	int getMonth();
private:
	int year, month, day, weekday, instant;
	const static int StartYear = 2000;
	const static int StartMonth = 1;
	const static int StartDay = 1;
	const static int StartWeekday = 6;

	const static int January = 31;
	const static int February = 28;
	const static int FebruaryE = 29;
	const static int March = 31;
	const static int April = 30;
	const static int May = 31;
	const static int June = 30;
	const static int July = 31;
	const static int August = 31;
	const static int September = 30;
	const static int October = 31;
	const static int November = 30;
	const static int December = 31;
};
#endif // !AROYA_DATE
