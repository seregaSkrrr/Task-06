#include <string>
#include <iostream>
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

class Security_Guard : public Human {
public:
    Security_Guard(string name, string first_name, int age, int experience) :
        Human(name, first_name, age), _experience(experience) {}

    void Info() override {
        Human::Info();
        cout << "I'mma security guard, my experience: " << _experience << "." << endl;
    }

private:
    int _experience; //стаж (лучше ничего в голочу не лезло)
};

class Barmaid : public Human {
public:
    Barmaid(string name, string first_name, int age, int number_of_steaks_sold_per_day) :
        Human(name, first_name, age), _number_of_steaks_sold_per_day(number_of_steaks_sold_per_day) {}

    void Info() override {
        Human::Info();
        cout << "I'mma barmaid, last day I sold this number of steaks: " << _number_of_steaks_sold_per_day << "." << endl;
    }

private:
    int _number_of_steaks_sold_per_day;
};

class Scrubwoman : public Human {
public:
    Scrubwoman(string name, string first_name, int age, int floors_washed) :
        Human(name, first_name, age), _floors_washed(floors_washed) {}

    void Info() override {
        Human::Info();
        cout << "I'mma Scrubwoman, last day I washed this number of floors: " << _floors_washed << "." << endl;
    }

private:
    int _floors_washed;
};

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    Human Person("Lil", "Yachty", 23);
    Person.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Teacher teacher1("Dwayne", "Johnson", 30, "PE(Phisical cultures)");
    Teacher teacher2("Maybe", "Baby", 16, "English");
    Teacher teacher3("Dora", "", 16, "Russian");
    Teacher teacher4("xxxmanera", "", 28, "English");
    teacher1.Info();
    cout << endl;
    teacher2.Info();
    cout << endl;
    teacher3.Info();
    cout << endl;
    teacher4.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Student student1("Sergey", "Kravtsov", 16, 22);
    Student student2("Max", "...", 17, 22);
    Student student3("Timosha", "Bublik", 15, 22);
    Student student4("Sergey", "Makarov", 15, 22);
    student1.Info();
    cout << endl;
    student2.Info();
    cout << endl;
    student3.Info();
    cout << endl;
    student4.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Security_Guard security_guard1("SODA", "LUV", 24, 4);
    Security_Guard security_guard2("LOVV66", "", 26, 5);
    security_guard1.Info();
    cout << endl;
    security_guard2.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Barmaid barmaid1("Traviss", "Scott", 39, rand() % 10000);
    Barmaid barmaid2("Kevin", "Hurt", 36, rand() % 10000);
    barmaid1.Info();
    cout << endl;
    barmaid2.Info();

    cout << "\n----------------------------------------------------------------------------------------------------\n\n";

    Scrubwoman scrubwoman1("Valya", "Carnival", 43, rand() % 10);
    Scrubwoman scrubwoman2("Instasamka", "", 46, rand() % 10);
    scrubwoman1.Info();
    cout << endl;
    scrubwoman2.Info();

    return 0;
}