#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    Human(string _name, string first_name, int age) :
        name(_name), _first_name(first_name), _age(age) {}

    virtual void Info() {
        cout << "I'm: " << name << " " << _first_name << ", I'm " << _age << " y.o." << endl;
    }

protected:
    string name;
    string _first_name;
    int _age;
};

class Teacher : public Human {
public:
    Teacher(string name, string first_name, int age, string lesson) :
        Human(name, first_name, age), _lesson(lesson) {}

    void Info() override {
        Human::Info();
        cout << "I'mma teacher, my lesson is: " << _lesson << "." << endl;
    }

private:
    string _lesson;
};

class Student : public Human {
public:
    Student(string name, string first_name, int age, int group) :
        Human(name, first_name, age), _group(group) {}

    void Info() override {
        Human::Info();
        cout << "I'mma student, my group: " << _group << "." << endl;
    }

private:
    int _group;
};


int main() {
    setlocale(LC_ALL, "RU");
    Human Person("Lil", "Yachty", 23);
    Person.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Teacher teacher("Traviss", "Scott", 56, "PE(Phisical cultures)");
    teacher.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Student student("Sergey", "Kravtsov", 16, 22);
    student.Info();

    return 0;
}