/*ENE211-0004/2020 MAINA FRANCIS MURIU.
A university has students taking ICT, Law and Business courses. In the Faculty of ICT, there are
Certificate, Diploma and a Degree courses (BSC-IT). BSC-IT has three stages: Stage 1, Stage 2 and
Stage 3.
(i) Briefly explain how inheritance can assist in the capture and processing of student details in the
above scenario.
(ii) Develop a program to implement the design in (i)

Inheritance is a fundamental concept in object-oriented programming that allows a class to inherit properties and behaviors from a parent or base class. In the scenario described above, inheritance can be used to model the different levels of courses and stages in the Faculty of ICT.

For example, we can define a base class called "Course" that contains common attributes and behaviors shared by all courses, such as course code, course name, and course instructor. We can then define three child classes, namely "CertificateCourse", "DiplomaCourse", and "BSCITCourse", each inheriting from the Course class. These child classes can add additional attributes and behaviors specific to their respective levels.

Likewise, we can define another base class called "Stage" that contains common attributes and behaviors shared by all stages of the BSC-IT course, such as stage code, stage name, and stage coordinator. We can then define three child classes, namely "Stage1", "Stage2", and "Stage3", each inheriting from the Stage class. These child classes can add additional attributes and behaviors specific to their respective stages.

Using inheritance in this way allows us to capture and process student details more easily and efficiently. For example, we can create a "Student" class that inherits from the appropriate course and stage classes to represent each individual student in the system. This would allow us to easily access and manipulate student details such as their course, stage, grades, and other relevant information.

in c++ A university has students taking ICT, Law and Business courses. In the Faculty of ICT, there are
Certificate, Diploma and a Degree courses (BSC-IT). BSC-IT has three stages: Stage 1, Stage 2 and
Stage 3.
(i) Briefly explain how inheritance can assist in the capture and processing of student details in the
above scenario.
(ii) Develop a program to implement the design in (i)
(i) Inheritance is a powerful feature of object-oriented programming that allows a derived class to inherit the properties and behaviors of a base class. In the scenario described, inheritance can be used to model the different levels of courses and stages in the Faculty of ICT, which can help in the capture and processing of student details.

For example, we can define a base class called "Course" that contains common attributes such as course code, course name, and course instructor. We can then define three derived classes, namely "CertificateCourse", "DiplomaCourse", and "BSCITCourse", each inheriting from the Course class. These derived classes can add additional attributes specific to their respective levels.

Likewise, we can define another base class called "Stage" that contains common attributes such as stage code, stage name, and stage coordinator. We can then define three derived classes, namely "Stage1", "Stage2", and "Stage3", each inheriting from the Stage class. These derived classes can add additional attributes specific to their respective stages.

Using inheritance in this way allows us to create a hierarchy of classes that reflect the different levels of courses and stages in the Faculty of ICT. We can then use these classes to create objects that represent students, and easily capture and process student details such as their course, stage, grades, and other relevant information.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course {
public:
    Course(string code, string name, string instructor) : code_(code), name_(name), instructor_(instructor) {}
    string code() const { return code_; }
    string name() const { return name_; }
    string instructor() const { return instructor_; }
private:
    string code_;
    string name_;
    string instructor_;
};

class CertificateCourse : public Course {
public:
    CertificateCourse(string code, string name, string instructor, int duration) : Course(code, name, instructor), duration_(duration) {}
    int duration() const { return duration_; }
private:
    int duration_;
};

class DiplomaCourse : public Course {
public:
    DiplomaCourse(string code, string name, string instructor, int duration) : Course(code, name, instructor), duration_(duration) {}
    int duration() const { return duration_; }
private:
    int duration_;
};

class BSCITCourse : public Course {
public:
    BSCITCourse(string code, string name, string instructor, int duration) : Course(code, name, instructor), duration_(duration) {}
    int duration() const { return duration_; }
private:
    int duration_;
};

class Stage {
public:
    Stage(string code, string name, string coordinator) : code_(code), name_(name), coordinator_(coordinator) {}
    string code() const { return code_; }
    string name() const { return name_; }
    string coordinator() const { return coordinator_; }
private:
    string code_;
    string name_;
    string coordinator_;
};

class Stage1 : public Stage {
public:
    Stage1(string code, string name, string coordinator, vector<string> subjects) : Stage(code, name, coordinator), subjects_(subjects) {}
    vector<string> subjects() const { return subjects_; }
private:
    vector<string> subjects_;
};

class Stage2 : public Stage {
public:
    Stage2(string code, string name, string coordinator, vector<string> subjects) : Stage(code, name, coordinator), subjects_(subjects) {}
    vector<string> subjects() const { return subjects_; }
private:
    vector<string> subjects_;
};

class Stage3 : public Stage {
public:
    Stage3




