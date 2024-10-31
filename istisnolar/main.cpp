//
//  main.cpp
//  istisnolar
//
//  Created by Saloxiddin Sayfuddinov on 23/10/24.
//

#include <iostream>
#include <stdexcept>
#include <string>
#include <limits>

using namespace std;

//class Account {
//private:
//    double balance;
//    
//public:
//    Account(double initial_balance) {
//        if (initial_balance < 0) {
//            throw invalid_argument("Initial balance cannot be negative.");
//        }
//        balance = initial_balance;
//    }
//    
//    void deposit (double amount) {
//        if (amount < 0) {
//            throw invalid_argument("Deposit amount cannot be negative.");
//        }
//        balance += amount;
//    }
//    
//    void withdraw(double amount) {
//        if (amount < 0) {
//            throw invalid_argument("withdraw amount cannot be negative.");
//        }
//        if (amount > balance) {
//            throw runtime_error("Insufficient funds.");
//        }
//        balance -= amount;
//    }
//    
//    double getBalance() const {
//        return balance;
//    }
//};
//
//int main() {
//    try {
//        Account myAccount(10000); // boshlang'ich balans
//        myAccount.deposit(500);
//        myAccount.withdraw(20000); // istisno, boshlang'ich balansdan kam bo'lishi kerak
//        cout << "Account balance: " << myAccount.getBalance() << endl;
//    } catch (const exception & err) {
//        cerr << "Error: " << err.what() << endl;
//    }
//    return 0;
//}


// ------------ 1-TOPSHIRIQ ---------------

//class BankException : public runtime_error {
//public:
//    BankException(const string & message) : runtime_error(message) {}
//};
//
//class InsufficientFundsException : public BankException {
//public:
//    InsufficientFundsException() : BankException("Insufficient funds in account") {}
//};
//
//class Account {
//private:
//    double balance;
//    
//public:
//    Account(double initial_balance) {
//        if (initial_balance < 0) {
//            throw BankException("Initial balance cannot be negative.");
//        }
//        balance = initial_balance;
//    }
//    
//    void withdraw(double amount) {
//        if (amount > balance) {
//            throw InsufficientFundsException();
//        }
//        balance -= amount;
//    }
//    
//    double getBalance() const {
//        return balance;
//    }
//};
//
//int main () {
//    try {
//        Account myAccount(500);
//        myAccount.withdraw(1000); // istisno
//        cout << "balance: " << myAccount.getBalance() << endl;
//    } catch (const InsufficientFundsException & err) {
//        cerr << "Error: " << err.what() << endl;
//    } catch(const BankException & err) {
//        cerr << "Bank error: " << err.what() << endl;
//    }
//}



// ------------ 2-TOPSHIRIQ ---------------

//class AgeException : public runtime_error {
//public:
//    AgeException(const string & message) : runtime_error(message) {}
//};
//
//class InvalidAgeException : public AgeException {
//public:
//    InvalidAgeException() : AgeException("Invalid age.") {}
//};
//
//class Student {
//    string name = "Saloxiddin";
//    int age;
//public:
//    Student(double initial_age) {
//        if (initial_age < 0 || initial_age > 150) {
//            throw AgeException("Initial age cannot be negative.");
//        }
//        age = initial_age;
//    }
//    
//    void setAge(int value) {
//        if (value < 0 || value >= 150) {
//            throw InvalidAgeException();
//        }
//        age = value;
//    }
//    
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//};
//
//int main() {
//    try {
//        Student std(20);
//        std.setAge(18);
//        cout << "Name: " << std.getName() << endl;
//        cout << "Age: " << std.getAge() << endl;
//    } catch (const InvalidAgeException & err) {
//        cerr << "InvalidAgeException: " << err.what() << endl;
//    } catch(const AgeException & err) {
//        cerr << "AgeException: " << err.what() << endl;
//    }
//}


// ------------ 3-TOPSHIRIQ ---------------

//class DivisionByZeroException : public runtime_error {
//public:
//    DivisionByZeroException() : runtime_error("Error: DivisionByZeroException") {}
//};
//
//class Calculator {
//public:
//    double devide(double a, double b) {
//        if (b == 0) {
//            throw DivisionByZeroException();
//        }
//        return a / b;
//    }
//    
//    double multiply(double a, double b) {
//        return a * b;
//    }
//};
//
//int getValidInput() {
//    int value;
//    cin >> value;
//
//    if (cin.fail()) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        throw invalid_argument("Invalid input: Please enter a valid integer.");
//    }
//
//    return value;
//}
//
//int main() {
//    Calculator calc;
//    
//    try {
//        cout << "a: ";
//        int a = getValidInput();
//        cout << "b: ";
//        int b = getValidInput();
//                        
//        cout << "Division result: " << calc.devide(a, b) << endl;
//        cout << "Multiply result: " << calc.multiply(a, b) << endl;
//        
//    } catch (const DivisionByZeroException & err) {
//        cerr << err.what() << endl;
//    } catch (const invalid_argument & err) {
//        cerr << "Invalid Argument: " << err.what() << endl;
//    }
//}


// ------------ 4-TOPSHIRIQ ---------------
//class InvalidWorkHoursException : public runtime_error {
//public:
//    InvalidWorkHoursException() : runtime_error("Error: Invalid work hours.") {}
//};
//
//class InvalidSalaryException : public runtime_error {
//public:
//    InvalidSalaryException() : runtime_error("Error: Invalid salary.") {}
//};
//
//class Employee {
//protected:
//    int salary;
//    int workHours;
//    
//public:
//    Employee(int initial_salary, int initial_workHours) {
//        if (initial_salary < 0) {
//            throw InvalidSalaryException();
//        }
//        salary = initial_salary;
//        
//        if (initial_workHours < 0) {
//            throw InvalidWorkHoursException();
//        }
//        workHours = initial_workHours;
//    }
//    
//    virtual int calculateSalary() const = 0;
//    virtual void display() const {
//        cout << "Work Hours: " << workHours << endl;
//    }
//
//    int getSalary() const {
//        return salary;
//    }
//    
//    int getWorkHours() const {
//        return workHours;
//    }
//
//    virtual ~Employee() {}
//};
//
//class FullTimeEmployee : public Employee {
//public:
//    FullTimeEmployee(int salary, int workHours)
//        : Employee(salary, workHours) {}
//
//    int calculateSalary() const override {
//        return salary;
//    }
//
//    void display() const override {
//        cout << "Full-Time Employee: " << endl;
//        Employee::display();
//        cout << "Salary: " << calculateSalary() << endl;
//    }
//};
//
//class PartTimeEmployee : public Employee {
//public:
//    PartTimeEmployee(int salary, int workHours)
//        : Employee(salary, workHours) {}
//
//    // Maoshni hisoblash metodi
//    int calculateSalary() const override {
//        return salary * (workHours / 160.0);
//    }
//
//    void display() const override {
//        cout << "Part-Time Employee: " << endl;
//        Employee::display();
//        cout << "Salary: " << calculateSalary() << endl;
//    }
//};
//
//int main() {
//    try {
//        FullTimeEmployee fullTimeEmp(20000000, 160);
//        fullTimeEmp.display();
//        
//        PartTimeEmployee partTimeEmp(10000000, 80);
//        partTimeEmp.display();
//        
//    } catch (const InvalidSalaryException &err) {
//        cerr << err.what() << endl;
//    } catch (const InvalidWorkHoursException &err) {
//        cerr << err.what() << endl;
//    }
//
//    return 0;
//}


// ------------ 1-TOPSHIRIQ: student age >= 18 || age >= 30 ---------------
//class AgeException : public runtime_error {
//public:
//    AgeException(const string & message) : runtime_error(message) {}
//};
//
//class InvalidAgeException : public AgeException {
//public:
//    InvalidAgeException() : AgeException("Invalid age.") {}
//};
//
//class Student {
//    string name = "Saloxiddin";
//    int age;
//public:
//    Student(double initial_age) {
//        if (initial_age < 18 || initial_age > 30) {
//            throw AgeException("Initial age cannot be negative.");
//        }
//        age = initial_age;
//    }
//    
//    void setAge(int value) {
//        if (value < 18 || value > 30) {
//            throw InvalidAgeException();
//        }
//        age = value;
//    }
//    
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//};
//
//int main() {
//    try {
//        Student std(18);
//        std.setAge(31);
//        cout << "Name: " << std.getName() << endl;
//        cout << "Age: " << std.getAge() << endl;
//    } catch (const InvalidAgeException & err) {
//        cerr << "InvalidAgeException: " << err.what() << endl;
//    } catch(const AgeException & err) {
//        cerr << "AgeException: " << err.what() << endl;
//    }
//}

// ------------ 2-TOPSHIRIQ: car year < 1900 || year > 2024 ---------------
//class InvalidYearException : public runtime_error {
//public:
//    InvalidYearException() : runtime_error("Invalid year.") {}
//};
//
//class Car {
//    string model = "Chevrolet";
//    int year;
//    int mileage = 100000;
//    
//public:
//    Car(int initial_year) {
//        if (initial_year < 1900 || initial_year > 2024) {
//            throw InvalidYearException();
//        }
//        year = initial_year;
//    }
//    
//    void setYear(int value) {
//        if (value < 1900 || value > 2024) {
//            throw InvalidYearException();
//        }
//        year = value;
//    }
//    
//    string getModel() const {
//        return model;
//    }
//    int getYear() const {
//        return year;
//    }
//    int getMileage() const {
//        return mileage;
//    }
//};
//
//int main() {
//    try {
//        Car car(2013);
//        car.setYear(2024);
//        cout << "Model: " << car.getModel() << endl;
//        cout << "Year: " << car.getYear() << endl;
//        cout << "Mileage: " << car.getMileage() << endl;
//    } catch (const InvalidYearException & err) {
//        cerr << "Error: " << err.what() << endl;
//    }
//}


// ------------ 3-TOPSHIRIQ: Bank account ---------------
class BankException : public runtime_error {
public:
    BankException(const string & message) : runtime_error(message) {}
};

class InsufficientFundsException : public BankException {
public:
    InsufficientFundsException() : BankException("Insufficient funds in account") {}
};

class Account {
private:
    double balance;
    
public:
    Account(double initial_balance) {
        if (initial_balance < 0) {
            throw BankException("Initial balance cannot be negative.");
        }
        balance = initial_balance;
    }
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }
    
    double getBalance() const {
        return balance;
    }
};

int main () {
    try {
        Account myAccount(500);
        myAccount.withdraw(1000); // istisno
        cout << "balance: " << myAccount.getBalance() << endl;
    } catch (const InsufficientFundsException & err) {
        cerr << "Error: " << err.what() << endl;
    } catch(const BankException & err) {
        cerr << "Bank error: " << err.what() << endl;
    }
}
