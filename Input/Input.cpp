
#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    float annualsalary;
    cout << "Add annual salery ";
    cin >> annualsalary;
    float monthlysalary = annualsalary / 12;
    cout << "Your monthly salary is " << monthlysalary;
    cout << "\n" ;

    // data sizes

    char character = 'a';
    int yearOfBirth = 1977;
    bool isOlderThan18 = true;
    float averageGrade = 9.5;
    double balance = 6258457.658;


    cout << " Size of double is : " << sizeof(double) << "bytes\n";
    cout << " Size of char is : " << sizeof(char) << "bytes\n";
    cout << " Size of bool is : " << sizeof(bool) << "bytes\n";
    cout << " Size of float is : " << sizeof(float) << "bytes\n";
    cout << " Size of int is : " << sizeof(int) << "bytes\n";

   system("pause>0");
}

