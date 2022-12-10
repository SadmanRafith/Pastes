#include<iostream>
#include<string.h>
using namespace std;

class Person
{
protected:
    string nat, phn, mari;
public:
    string name;
    int age;
    Person(){}
    Person(string name, int age, string phn, string nat, string mari)
    {
        this->name=name;
        this->age=age;
        this->phn=phn;
        this->nat=nat;
        this->mari=mari;
    }
    void showdata()
    {
        cout << "Person\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;
    }
};

class Student : virtual public Person
{
protected:
    float cgpa;
public:
    string inst, id, dept, sem;
    Student(){}
    Student(string name, int age, string phn, string inst, string id,
            string sem, float cgpa, string nat, string mari)
    :Person(name,age,phn, nat, mari)
    {
        this->inst=inst;
        this->id=id;
        this->sem=sem;
        this->cgpa=cgpa;
    }
    void showdata()
    {
        cout << "Student\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "Institute         : " << inst << endl;
        cout << "ID                : " << id << endl;
        cout << "Semester          : " << sem << endl;
        cout << "CGPA              : " << cgpa << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;
    }

};

class Graduate_student : public Student
{
protected:
    int fd;
public:
    string deg, dept;
    Graduate_student(){}
    Graduate_student(string name, int age, string phn, string inst, string id,
                     string sem, float cgpa,string dept, int fd, string deg,
                     string nat, string mari)
    :Student(name,age,phn,inst,id,sem,cgpa,nat,mari),Person(name,age,phn,nat,mari)
    {
        this->dept=dept;
        this->fd=fd;
        this->deg=deg;
    }
    void showdata()
    {
        cout << "Graduate Student\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "Institute         : " << inst << endl;
        cout << "ID                : " << id << endl;
        cout << "Semester          : " << sem << endl;
        cout << "CGPA              : " << cgpa << endl;
        cout << "Department        : " << dept << endl;
        cout << "Fall/Drop         : " << fd << endl;
        cout << "Degree            : " << deg << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;
    }
};

class Employee : virtual public Person
{
protected:
    string nid;
    float sal;
public:
    string des;
    string wh;
    Employee(){}
    Employee(string name, int age, string phn, string nid, float sal,
             string des, string wh, string nat, string mari)
    :Person(name,age,phn,nat,mari)
    {
        this->nid=nid;
        this->sal=sal;
        this->des=des;
        this->wh=wh;
    }
    void showdata()
    {
        cout << "Employee\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "NID               : " << nid << endl;
        cout << "Salary            : " << sal << endl;
        cout << "Designation       : " << des << endl;
        cout << "Working hours     : " << wh << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;
    }
};

class Officer : public Employee
{
public:
    string inst;
    Officer(){}
    Officer(string name, int age, string phn, string nid, float sal,
            string des, string wh, string inst, string nat, string mari)
    :Employee(name,age,phn,nid,sal,des,wh,nat,mari),Person(name,age,phn,nat,mari)
    {
        this->inst=inst;
    }
    void showdata()
    {
        cout << "Officer\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "NID               : " << nid << endl;
        cout << "Salary            : " << sal << endl;
        cout << "Institute         : " << inst << endl;
        cout << "Designation       : " << des << endl;
        cout << "Working hours     : " << wh << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;;
    }
};
class Faculty : virtual public Employee
{
public:
    string inst;
    string sub;
    Faculty(){}
    Faculty(string name, int age, string phn, string nid, float sal, string des,
            string wh, string inst, string sub, string nat, string mari)
    :Employee(name,age,phn,nid,sal,des,wh,nat,mari),Person(name,age,phn,nat,mari)
    {
        this->inst=inst;
        this->sub=sub;
    }
    void showdata()
    {
        cout << "Faculty\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "NID               : " << nid << endl;
        cout << "Salary            : " << sal << endl;
        cout << "Institute         : " << inst << endl;
        cout << "Designation       : " << des << endl;
        cout << "Working hours     : " << wh << endl;
        cout << "Subject           : " << sub << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;
    }
};

class TA : virtual public Faculty, virtual public Student
{
public:
    string inst, sub, type;
    TA(){}
    TA(string name, int age, string phn, string nid, float sal, string des, string wh,string inst,
       string sub, string nat, string mari, string type)
    :Faculty(name,age,phn,nid,sal,des,wh,inst,sub,nat,mari),//Employee(name,age,phn,nid,sal,des,wh,nat,mari),
    Student(name,age,phn,inst,id,sem,cgpa,nat,mari)//,Person(name,age,phn,nat,mari)
    {
        this->inst=inst;
        this->sub=sub;
        this->type=type;

    }
    void showdata()
    {
        cout << "Teaching Assistant\n";
        cout << "----------------------------------" << endl;
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "NID               : " << nid << endl;
        cout << "Salary            : " << sal << endl;
        cout << "Institute         : " << inst << endl;
        cout << "Subject           : " << sub << endl;
        cout << "Designation       : " << des << endl;
        cout << "Working hours     : " << wh << endl;
        cout << "Subject           : " << sub << endl;
        cout << "Job Type          : " << type << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl << endl << endl;
    }
};
int main()
{
    cout << "----------- IP FINAL TERM ASSIGNMENT Question - 1 -------------" << endl;
    cout << "---------------------------------------------------------------" << endl << endl << endl;
    Person();
    Person p("Tahsin", 21, "054615646510", "Bangladeshi", "Unmarried");
    p.showdata();

    Student();
    Student s("Disha", 21, "0455400000000", "JU", "21-21168",
              "Semester - 1", 4.0, "Bangladeshi", "Unmarried");
    s.showdata();

    Graduate_student();
    Graduate_student gs("Valorant", 27, "0000000000", "BUET", "505", "Fall 18-19",
                        3.8, "CSE", 0, "B.Sc in CSE", "Bangladeshi", "Unmarried");
    gs.showdata();

    Employee();
    Employee e("Hasib", 35, "251361650", "12345678910", 80000.00,
               "Manager", "5-6 hours", "Bangladeshi", "Married");
    e.showdata();

    Officer();
    Officer o("Stark", 25, "00000000", "12345678910", 50000.00, "Executive",
              "10-12 hours", "Dhaka Bank", "Bangladeshi", "Married");
    o.showdata();

    Faculty();
    Faculty f("Valorant", 30, "000000000", "12345678910", 30000.00,
              "Lecturer","5-6 hours", "AIUB", "CSE", "Bangladeshi", "Married");
    f.showdata();

    TA();
    TA ta("Rezuanul", 25, "1234566255", "12345678910", 1500, "Assistant", "Part time",
       "AIUB", "CSE", "Bangladeshi", "Unmarried", "Part time");
    ta.showdata();

    cout << "----------------------------------------------------------------" << endl;
    return 0;
}
