#include<iostream>
using namespace std;

class BOOK{
	private:
		int copiessold;
	public:
		string title;
		string author;
		int pages;
		BOOK(string x,string y,int z){
			title=x;
			author=y;
			pages=z;
		}
		BOOK(int numcopiessold){
			numcopiessold=copiessold;
		
		}	
		bool bestseller(){
			if(copiessold>1000000){
				return true;
			}
			else{
				return false;
			}
		}
};
int main(){
	BOOK obj("Imran Khan The Great Leader","Abdullah",524);
	cout<<obj.title<<endl;
	cout<<obj.author<<endl;
	cout<<obj.pages<<endl;
	BOOK booksold(1200000);
	if(booksold.bestseller()){
		cout<<"This book is a best seller"<<endl;
	}
	else{
		cout<<"The book is not a best seller"<<endl;
	}
	return 0;
}


