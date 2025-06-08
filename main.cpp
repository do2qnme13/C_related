#include <iostream>
#include <string>
using namespace std;


struct Person
  {
    string name;
    int age;
    string gender;

    void introduce() {
      cout << "My name is "<<name<<". I am "<<age<<" years old"<<endl;
    }

    void getGender() {
      cout << name << " is " << gender <<endl;
    }
  };
  

int main() {

  Person person1 = {"Mg Mg",12,"Male"};

  person1.introduce();
  person1.getGender();

  return 0;
}