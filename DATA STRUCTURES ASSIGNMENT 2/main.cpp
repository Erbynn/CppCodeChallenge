#include <iostream>
#include <string>
using namespace std;

struct Emp_salary
    {
        string  empName;
        int empId;
        double hours;
        int *benefit;
        int benefits;
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
            cout << " Employee " <<(i+1)<<" Name : \t" ;
            cin.ignore();
           getline(cin, employee[i].empName) ;

            cout << " Employee ID of " << employee[i].empName << " : \t";
            cin >> employee[i].empId;

            int benefitNum[i];
           cout << " Employee's Benefits : \t" ;
           cin >> benefitNum[i];

retry2:
            cout << " Pay Rate of " << employee[i].empName << " : \t";
            cin >> employee[i].payRate;
            if(employee[i].payRate <= 15.00){
                cout << " \tKindly Re-input.\n\n";
                cout << " \tPay rate must be greater than GHS 15.00. " << endl;
                goto retry2;
            }

            cout << " Hours worked by " << employee[i].empName << " : \y ";
            cin >> employee[i].hours;
            cout << endl;
            employee[i].wages =  employee[i].payRate * employee[i].hours;
}


            cout << "\n**********Displaying of Employee Data**********" <<endl<<endl;
            for(int i=0; i<numOfEmp; i++){
                    int benefitNum[i];
                    employee[i].benefits = &(benefitNum[i]);
                cout << "\tEmployee ID : " << employee[i].empId << endl;
                cout << "\tGross Wages : " << employee[i].payRate << endl;
                cout << "\tNumber of Benefits : " << employee[i].benefits << endl << endl;
            }

      return 0;
}
