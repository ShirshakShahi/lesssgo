#include <iostream>
#include <string.h>

using namespace std;
class Person
{
protected:
    char name[50];
    int age;

public:
    Person(char *n, int a)
    {
        strcpy(name, n);
        age = a;
    }
    void display()
    {
        cout << "Name is " << name << endl
             << "Age is " << age << endl;
    }
};
class Teacher : public Person
{
    char department[50];

public:
    Teacher(char *n, int a, char *d) : Person(n, a)
    {
        strcpy(department, d);
    }

    void display()
    {
        cout << "Department is " << department << endl;
    }
};
class Student : public Person
{
    char faculty[50];

public:
    Student(char *n, int a, char *f) : Person(n, a)
    {
        strcpy(faculty, f);
    }
    void display()
    {
        cout << "Faculty is " << faculty << endl;
    }
};
int main()
{
    Teacher T("MNB", 22, "Science");
    Student S("Shirshak", 19, "Technology");
    cout << "For teacher " << endl;
    T.Person::display();
    T.display();
    cout << "For Student " << endl;
    S.Person::display();
    S.display();
    return 0;
}