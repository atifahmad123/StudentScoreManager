
#include<iostream>
using namespace std;


class FastFoods{
	
	private:
		int Pizza;
		int ZingerBurger;
		int Lazzaniya;
		
	public:
		FatsFoods(){
			Pizza = 0;
			ZingerBurger = 0;
			Lazzaniya = 0;
		}
		
		void setPizza(){
			cin>>Pizza;
		}
		void setLazzaniya(){
			cin>>Lazzaniya;
		}
		void setZingerBurger(){
			cin>>ZingerBurger;
		}
				
		void operator ++(){
			ZingerBurger += 5;
		}
		void operator +(){
			Lazzaniya += 3;
		}
		void operator -(){
			Pizza = -Pizza;
		}

		void getInfo(){
			cout<<"\nTotal Pizzas are: "<<Pizza;
			cout<<"\nTotal burgers are: "<<ZingerBurger;
			cout<<"\nTotal Lazzaniyas are: "<<Lazzaniya;
		}
};


int main(){
	FastFoods obj;
	cout<<"Kindly enter number of Pizzas."<<endl;
	obj.setPizza();
	
	cout<<"Kindly enter number of Burgers."<<endl;
	obj.setZingerBurger();

	cout<<"Kindly enter number of Lazzaniyas."<<endl;
	obj.setLazzaniya();
	
	++obj;
	+obj;
	-obj;
	
	obj.getInfo();

	
}