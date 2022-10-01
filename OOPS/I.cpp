#include<iostream>
using namespace std;
class time {
	private:
		int hour,minute,second;
	public:
		time()
		{
		hour=0; minute=0; second=0;
		}
		time(int x,int y,int z)
		{
		hour=x; minute=y; second=z;
		}
void getdata()
{
cout<<"enter the number of hours"<<endl; cin>>hour;
cout<<"enter number of minutes"<<endl; cin>>minute;
cout<<"enter the number of seconds"<<endl;
cin>>second;
}

time addtwo(time& t)
{
	time t1;
	t1.second=this->second +t.second;
	t1.minute=this->minute+t.minute;
	t1.hour=this->hour+t.hour;
	while(t1.second>59) {
		t1.second-=60;
		t1.minute+=1;
	}
	while(t1.minute>59) {
		t1.minute-=60;
		t1.hour+=1;
	}
return t1;
}
void display() {
	cout<<"hours :"<<hour<<
	"\nminute :"<<minute<<
	"\nseconds :"<<second<<endl;
	return;
	}
};
int main() {
	int h,m,s;
	time t2(0,0,0),t3(0,0,0),t4;
	t2.getdata();
	t3.getdata();
	t4=t2.addtwo(t3);
	t4.display();
	return 0;
}
