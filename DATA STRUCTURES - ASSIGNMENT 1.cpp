        /*DEPARTMENT OF COMPUTER SCIENCE, UCC
           DATA STRUCTURES ASSIGNMENT 1
           NAME: ERBYNN, JOHN KWESI
           INDEX: PS/CSC/15/OOO6
           DATE: 17TH OCTOBER,2017*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


    for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= i; j++){
System.out.print (�*�);
}
System.out.println ( );
}
    int num_of_employee=10;
    int empId[]={1234567, 2345678, 3456789, 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[num_of_employee];
    double payRate[num_of_employee];
    double wages[num_of_employee];
    double a,b;

    cout << "ENTER THE HOURS WORKED BY EACH ENPLOYEE AND THEIR HOURLY RATE \n" << endl;

        for(int i = 0; i < num_of_employee; i++){

                            cout << "\t Employee ID : " << empId[i];
                            cout << endl;
                            a=hours[i];
          backward:    cout << "\t Hours worked : " ;/*by employee" << empId[i]<< " */
                            cin >> a;

                              b=payRate[i];
                            cout << "\t Hourly pay rate : " ;/* for employee " << empId[i] << " :  ";*/
                            cin >> b;
                            cout << endl << endl;

                        if(payRate[i]<15.00 || hours[i]<0){
                            cout << " ## Hours should not be negative AND/OR Pay Rate should not be less than GHC 15.00 ##" <<endl;
                            cout << " ## Re-enter Hours and Pay Rate : " <<endl;
                            goto backward;
                }
        }

            cout << "*******GROSS WAGES FOR EACH EMPLOYEE*****"<<endl<< endl;

            for ( int i =0; i<num_of_employee; i++){
                    double wages=hours[i]*payRate[i];
                cout << "\t Employee ID  :  " <<    empId [i] << "\n" ;
                cout << "\t Gross wage   :  GHC " << wages << endl << endl;
            }


    return 0;
}
