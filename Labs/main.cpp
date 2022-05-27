#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	int weight;
	bool job;
	

	Person() {
		name = " ";
		age = 0;
		weight = 0;
		job = false;
	}

	void setJob(bool val) {
		job = val;
	}

	void isJob() {

		if (job == true) {
			cout << "Human have job!" << endl;
		}
		if (job == false) {
			cout << "Human dont have job!" << endl;
		}
	}

};
void print(Person* person) 
{
	cout << person->name << " is " << person->age << " years old" << endl; 
	cout << "Weight: " << person->weight << endl;
}

int main()
{
	Person person;
	person.name = "Harry";
	person.age = 23;
	cout << "Meet " << person.name;
	print(&person);   

	

	cout << "#########################" << endl;
	Person human;
	human.name = "John";
	human.age = 32;
	human.weight = 81;
	print(&human); 
	human.isJob();  
	human.setJob(true);
	print(&human); 
	human.isJob(); 

	return 0;
}