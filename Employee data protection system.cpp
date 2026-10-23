/*
NAME: MARIPET KERETO
REG: CT101/G/26655/25
DATA PROTECTION SYSTEM

*/

#include <iostream>
#include <string>
using namespace std;

class Employee{
	
	private:
		string Name;
		int id;
		double Salary;
		double netSalary;
		
		public:
			void setEmployeeDetails(){
				
				cout<<"Enter employee name: "<<endl;
				getline(cin, Name);
				
				cout<<"Enter employee id: "<<endl;
				cin>>id;
				
				cout<<"Enter employee basic salary: "<<endl;
				cin>>Salary;
				
				calculateSalary();
			}
			
			void calculateSalary(){
				
				netSalary = Salary +(0.10 * Salary);
            }
			void displayEmployeeDetails(){
				cout<<"--Employee details--"<<endl;
				cout<<"Name: "<<Name<<endl;
				cout<<"Employee ID: "<<id<<endl;
				cout<<"Basic salary: "<<Salary<<endl;
				cout<<"Net Salary: "<<netSalary<<endl;
				cout<<"-------------------------"<<endl;
			}
};

int main(){
	Employee emp;

	emp.setEmployeeDetails();
	emp.displayEmployeeDetails();
	return 0;
}
