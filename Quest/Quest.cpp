
#include <iostream>
using namespace std;


class Person
{
protected:
	string name;
	int age;
	string gender;
	int weight;
public:

	Person()
		: name(name), age(age), gender(gender), weight(weight)
	{}

	Person(string name, int age, string gender, int weight)
	{
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->weight = weight;
	}

	void printf()
	{
		cout << "Name: " << name << endl << "Age: " << age << endl << "Gender: " << gender << endl << "Weight: " << weight << endl;
	}
};


class Student : public Person
{
protected:
	int year_of_study;
public:
	Student(string name, int age, string gender, int weight, int year_of_study) :
		Person (name, age, gender, weight)
	{
		this->year_of_study = year_of_study;
		
	
	}

	void printYear()
	{
		cout << "Year of study: " << year_of_study << endl << endl;
	}
	
	

};


class Fruit
{
protected:
	string Name;
	string Color;
public:



	void setName(string Name)
	{
		this->Name = Name;
	}

	void setColor(string Color)
	{
		this->Color = Color;
	}

	string getName()
	{
		return Name;
	}
	string getColor()
	{
		return Color;
	}
};


class Apple : public Fruit
{
public:
	Apple(string Color)
	{
		this->Color = Color;
		Color = "green";
		setName("apple");
		getColor();
	}

	


};

class GrannySmith : public Apple
{
public:
	
	GrannySmith() : Apple("green")
	{
		setName("Granny Smith " + Apple::getName());
	}


};

class Banana : public Fruit
{
public:
	
	Banana()
	{
		Color = "yellow";
		setName("banana");
		getColor();
	}

};


int main()
{
	Student s00("Leo", 16, "Male", 69, 2013);
	Student s01("Piter", 17, "Male", 78, 2012);
	Student s02("Lera", 21, "Female", 48, 2014);

	Person* Stud[] = { &s00,&s01,&s02 };
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << ". ";
		Stud[i]->printf();
		((Student *)Stud[i])->printYear();
	}



	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	return 0;
};