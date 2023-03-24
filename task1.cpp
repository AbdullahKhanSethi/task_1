#include<iostream>
using namespace std;

class Animal{
	private:
		string name;
		int age;
	public:
		void setname(string x){
			name=x;
			
		}
		string getname(){
			return name;
			
		}
		void setage(int y){
			age=y;
		}
		int getage(){
			return age;
		}
		Animal(string x,int y){
			name=x;
			age=y;
		}
};
class Dog:public Animal{
	public:
		Dog():Animal("Fido",5){
		}
			
		
		
	void dogspeak(){
		cout<<"Woof"<<endl;
		}
	
};
class Cat:public Animal{
	public:
		Cat():Animal("Mittens",3){
		}
	
		void catspeak(){
			cout<<"Meow"<<endl;
		}
	
};
int main()
{
	Animal obj("animal",100);
	Dog obj2;
	Cat obj3;
	cout<<"My name is "<<obj2.getname()<<" and I am "<<obj2.getage()<<" year old"<<endl;
	cout<<"My name is "<<obj3.getname()<<" and I am "<<obj3.getage()<<" year old";
	return 0;
}
