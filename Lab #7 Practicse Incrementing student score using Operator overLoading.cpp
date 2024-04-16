
#include<iostream>
using namespace std;


class StudentScore{
	
	private:
		int score;
		int bonus;
		
	public:
		StudentScore(){
			score = 0;
			bonus = 0;
		}
		
		void setScore(){
			cin>>score;
		}
		void setBonus(){
			cin>>bonus;
		}
		
		void operator ++(){
			score += 5;
		}
		void operator -(){
			bonus = -bonus;
		}

		void getInfo(){
			cout<<"\nStudent's score is: "<<score;
			cout<<"\nStudent's bonus is: "<<bonus;
		}
};


int main(){
	StudentScore std;
	cout<<"Kindly enter student's score."<<endl;
	std.setScore();
	
	cout<<"Kindly enter student's bonus."<<endl;
	std.setBonus();
	
	++std;
	-std;
	
	std.getInfo();

	
}