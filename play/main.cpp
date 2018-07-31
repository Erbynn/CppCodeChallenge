/*        DEPARTMENT OF COMPUTER SCIENCE, UCC
           DATA STRUCTURES ASSIGNMENT 2
           NAME: ERBYNN, JOHN KWESI
           INDEX: PS/CSC/15/OOO6
           DATE: 2ND NOVEMBER, 2017
*/

#include <iostream>
#include <string>
using namespace std;

struct Emp_salary
    {
        string  empName;
        int empId;
        double hours;
        int *benefit;
        int benf;
        double payRate;
        double wages;
    };

int main()
{
        int numOfEmp;

retry1:
            cout << " Total number of Employees : " ;
            cin >> numOfEmp;
            cout << endl;
            if(numOfEmp <= 0){
                cout << " Number of Employees must be positive. " << endl;
                cout << " Kindly Re-input. " <<endl<<endl;;
                goto retry1;
            }

        Emp_salary *employee;
        employee = new Emp_salary[numOfEmp];

        for (int i=0; i<numOfEmp; i++){
            cout << "\t Employee " <<(i+1)<<" Name : \t" ;
            cin.ignore();
           getline(cin, employee[i].empName) ;

            cout << "\t Employee ID : \t\t";
            cin >> employee[i].empId;

           cout << "\t Employee Benefits : \t" ;
           cin >> employee[i].benf;

retry2:
            cout << "\t Employee Pay Rate : \t";
            cin >> employee[i].payRate;
            if(employee[i].payRate < 15.00){
                cout << " \t\tPay rate must be greater than 15.00. " << endl;
                 cout << " \t\tKindly Re-input.\n";
                goto retry2;
            }

retry3:
            cout << "\t Hours worked : \t";
            cin >> employee[i].hours;
             if(employee[i].hours < 0){
                cout << "\t \tHours should not be negative. " << endl;
                cout << "\t \tKindly Re-input.\n";
                goto retry3;
            }
            cout << endl;

            employee[i].wages =  employee[i].payRate * employee[i].hours;
}


            cout << "\n**********Displaying of Employee Data**********" <<endl<<endl;

            for(int i=0; i<numOfEmp; i++){
                    employee[i].benefit = &(employee[i].benf);
                cout << "\tEmployee ID : \t" << employee[i].empId << endl;
                cout << "\tGross Wages : \t GHS " << employee[i].wages << endl;
                cout << "\tNumber of Benefits : \t" << employee[i].benf << endl << endl;
            }

      return 0;
}
