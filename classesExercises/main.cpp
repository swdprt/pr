//https://pynative.com/cpp-oop-exercises/

import std;

//TASK 1
class Rectangle {
private:
	int _length;
	int _width;
public:
	Rectangle(int length, int width): _length(length), _width(width) {}

	int calculate_area() const {
		return _length * _width;
	}

	int calculate_perimeter() const {
		return 2 * (_length + _width);
	}
};

//TASK 2
class Car {
public:
	std::string _make;
	std::string _model;
	int _year;

	Car(std::string make, std::string model, int year): _make(make), _model(model), _year(year) {}

	void start_engine() {
		std::println("The {} {} {} engine started!", _year, _make, _model);
	}
};

//TASK 3
class Book {
private:
	std::string _title; 
	std::string _author;
	std::string _isbn;
public:
	Book(std::string title, std::string author, std::string isbn):
		_title(title), _author(author), _isbn(isbn) { }

	std::string get_details() const {
		return "Title: " + _title + " | Author: " + _author + " | ISBN: " + _isbn;
	}
};

//TASK 4
class Circle {
private:
	double _radius;
	const double pi = 3.14159;
public:
	Circle(double radius): _radius(radius) {}

	double get_area() const {
		return pi * _radius * _radius;
	}

	double getRadius() const {
		return _radius;
	}
};

//TASK 5
class Rectangle2 {
private:
	int _length;
	int _width;
public:
	Rectangle2() : _length(1), _width(1) {}
	Rectangle2(int length, int width) : _length(length), _width(width) {}

	int calculate_area() const {
		return _length * _width;
	}

	int calculate_perimeter() const {
		return 2 * (_length + _width);
	}

	int getLength() const {
		return _length;
	}

	int getWidth() const {
		return _width;
	}
};

//TASK 6
class Resource {
private:
	std::string _id;
public:
	Resource(std::string id): _id(id) {
		std::println("Resource {} acquired", _id);
	}

	~Resource() {
		std::println("Resource {} released", _id);
	}
};

//TASK 7
class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y): _x(x), _y(y) {}
	Point(const Point& p): _x(p._x), _y(p._y) {}

	void printPoint() const {
		std::println("({}, {})", _x, _y);
	}

	void move(int dx, int dy) {
		_x += dx;
		_y += dy;
	}
};

//TASK 8
class Date {
private:
	int _day;
	int _month;
	int _year;
public:
	Date(int day, int month, int year) : _day(day), _month(month), _year(year) {
		if (_day < 1 || _day > 31) {
			std::println("Invalid day. Setting to 1.");
			_day = 1;
		};
		if (_month < 1 || _month > 12) {
			std::println("Invalid month. Setting to 1.");
			_month = 1;
		};
		if (_year < 1 || _year > 2026) {
			std::println("Invalid year. Setting to 1.");
			_year = 1;
		};
	}

	void printDate() {
		std::println("{}-{}-{}", _day, _month, _year);
	}
};

//TASK 9
class Student {
private:
	const std::string _name;
	int _roll_number;
	double _score;
public:
	Student(const std::string& name, int roll_number, double score): _name(name), _roll_number(roll_number), _score(score) {}

	void displayData() const {
		std::println("Student name: {} | Roll number: {} | Score: {}", _name, _roll_number, _score);
	}
};

int main() {
	int task = 0;
	std::println("Enter task number: ");
	std::cin >> task;

	switch (task) {
	case 1: {
		std::println("TASK 1");
		Rectangle r(10, 5);
		std::println("Area = {}", r.calculate_area());
		std::println("Perimeter = {}", r.calculate_perimeter());
		break;
	}
	case 2: {
		std::println("TASK 2");
		Car c("Toyota", "Corolla", 2020);
		c.start_engine();
		break;
	}
	case 3: {
		std::println("TASK 3");
		Book b("The C++ Programming Language", "Bjarne Stroustrup", "0321563840");
		std::println("Book Record: \n{}", b.get_details());
		break;
	}
	case 4: {
		std::println("TASK 4");
		Circle c(5.0);
		std::println("Circle with radius {} has an area of: {}", c.getRadius(), c.get_area());
		break;
	}
	case 5: {
		std::println("TASK 5");
		Rectangle2 r1(12, 4);
		Rectangle2 r2;
		std::println("Custom Rectangle created ({}x{}). \nR1 Area : {}", r1.getLength(), r1.getWidth(), r1.calculate_area());
		std::println("Custom Rectangle created ({}x{}). \nR2 Area : {}", r2.getLength(), r2.getWidth(), r2.calculate_area());
		break;
	}
	case 6: {
		std::println("TASK 6");
		Resource r("080707");
		break;
	}
	case 7: {
		std::println("TASK 7");
		Point p1(10, 20);
		Point p2 = p1;
		p1.printPoint();
		p2.printPoint();

		p2.move(5, 5);
		p1.printPoint();
		p2.printPoint();
		break;
	}
	case 8: {
		std::println("TASK 8");
		Date d1(29, 7, 2026);
		std::println("Date 1: ");
		d1.printDate();
		Date d2(29, 14, 2026);
		std::println("Date 2: ");
		d2.printDate();
		break;
	}
	case 9: {
		std::println("TASK 9");
		Student s("Clara B.", 101, 78.9);
		s.displayData();
		break;
	}
	default: 
		std::println("Invalid task number");
	}
	
	return 0;
}