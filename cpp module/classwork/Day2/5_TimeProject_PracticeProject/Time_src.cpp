#include"Time.h"

Time::Time() 
{
	hh = 0;
	mm = 0;
}
Time::Time(int hh, int mm) {
	this->hh = hh;
	this->mm = mm;
}
int Time::gethh() {
	return hh;
}
int Time::getmm() {
	return mm;
}
void Time::sethh(int hh) {
	this->hh = hh;
}
void Time::setmm(int mm) {
	this->mm=mm;
}
void Time::display() {
	cout << "\n Time is " <<hh <<":"<< mm << endl;
} 
void Time:: accept() {
	cout << "enter time ";
	cin >> hh >> mm;

}