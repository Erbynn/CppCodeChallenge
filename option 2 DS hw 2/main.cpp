  //Kwabena Afriyie-Gyamfi
  //Ps/csc/15/0007
  //assignment
  //Data structures_


#include <iostream>
#include <string>
using namespace std;



struct EmployeeSalary{
                        string empName;
                        string empId;
                        double hours;
                        double payRate;
                        double wages;
                        string *benefit;

                     };
int main()
{


    int  no , num;
        cout <<"how many benefits are available"<<endl;
        cin >>no;

        cout<<"enter the number employees in ucc"<<endl;
        cin>> num;

        EmployeeSalary *employee =0;
        employee= new EmployeeSalary[num];

        string*benefitId=0;
        benefitId= new string[no];

    for(int i=0;i<num;i++)
        {
            cout << "Hello enter the mame of  employee"<<i+1<<" " << endl;
            cin >> employee[i].empName ;

            cout << "Hello enter his/her employeeId" << endl;
            cin >> employee[i].empId ;

            cout << "Enter  benefits  "<<employee[i].empName<<" enjoys"<< endl;
            cin >> benefitId[i] ;
            employee[i].benefit= &benefitId[i];

 check1:    cout << "Hello enter pay rate for the employee with the id of" <<employee[i].empId <<endl;
            cin >> employee[i].payRate ;

         if (employee[i].payRate <15.00){
                cout<<"invalid entry retry, pay rate must not be lower than 15.00   "<<endl;
            goto check1;
            }
         else {
                cout << "proceed"<<endl;
              }

check2:      cout << "please enter the hours  employee with the id of" <<employee[i].empId<<" worked "<<endl;
            cin >> employee[i].hours ;
            if (employee[i].hours <0.00)
                            {
                             cout<<"invalid entry retry, pay must not be negative "<<endl;
                             goto check2;
                            }
            else {
                employee[i].wages= employee[i].hours * employee[i].payRate;
                }
        }
    cout <<"Employee Id \t \t || Number of benefits \t \t || Wages  "<<endl;
    for(int a=0; a<num; a++)
        {
            cout << employee[a].empId <<"\t ||"<< benefitId[a]<<"\t||" <<"ghc"<<employee[a].wages<<endl;
        }

        delete [] benefitId;
        benefitId=0;
        delete [] employee;
        employee=0;

return 0;
}




