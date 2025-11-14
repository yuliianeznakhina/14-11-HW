#include<iostream>
using namespace std;

class Transport
{
protected:
	string name;
	int year;
	double speed;
	double weight;
	int numOfPassengers;
public:
	Transport() {}
	Transport(string n, int y, double s, double w, int p)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
	}
	string GetName() { return name; }
	void SetName(string n) { name = n; }

	int GetYear() { return year; }
	void SetYear(int y) { year = y; }

	double GetSpeed() { return speed; }
	void SetSpeed(double s) { speed = s; }

	double GetWeight() { return weight; }
	void SetWeight(double s) { weight = s; }

	int GetNumOfPassengers() { return numOfPassengers; }
	void SetNumOfPassengers(int s) { numOfPassengers = s; }

	void Print()
	{
		cout << "\nName: " << name << "\nYear: " << year << "\nSpeed: " << speed << "\nWeight: " << weight << "\nNumber of passengers: " << numOfPassengers << endl;
	}
};

class Truck :public Transport
{
	double wheelSize;
	double volume;
public:
	Truck() {}
	Truck(string n, int y, double s, double w, int p, double ws, double v)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
		wheelSize = ws;
		volume = v;
	}

	double GetWheelSize() { return wheelSize; }
	void SetWheelSize(double w) { wheelSize = w; }

	double GetVolume() { return volume; }
	void SetVolume(double v) { volume = v; }

	void Print()
	{
		Transport::Print();
		cout << "Wheel Size: " << wheelSize << "\nEngine volume: " << volume << endl;
	}
};

class Plane :public Transport
{
	double wingspan;
	double enginePower;
public:
	Plane() {}
	Plane(string n, int y, double s, double w, int p, double ws, double ep)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
		wingspan = ws;
		enginePower = ep;
	}

	double GetWingspan() { return wingspan; }
	void SetWingspan(double w) { wingspan = w; }

	double GetEnginePower() { return enginePower; }
	void SetEnginePower(double e) { enginePower = e; }

	void Print()
	{
		Transport::Print();
		cout << "Wingspan: " << wingspan << "\nEngine power: " << enginePower << endl;
	}

};

class Vessel :public Transport
{
	double length;
	int numOfScrews;
	double waterline;
public:
	Vessel() {}
	Vessel(string n, int y, double s, double w, int p, double l, int ns, double wl)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
		length = l;
		numOfScrews = ns;
		waterline = wl;
	}

	double GetLength() { return length; }
	void SetLength(double l) { length = l; }

	int GetNumOfScrews() { return numOfScrews; }
	void SetNumOfScrews(int e) { numOfScrews = e; }

	double GetWaterline() { return waterline; }
	void SetWaterline(double l) { waterline = l; }

	void Print()
	{
		Transport::Print();
		cout << "Length: " << length << "\nNumber of screws: " << numOfScrews << "\nWaterline: " << waterline << endl;
	}

};

class Car :public Transport
{
	string a;
	string b;
public:
	Car() {}
	Car(string n, int y, double s, double w, int p, string _a, string _b)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
		a = _a;
		b = _b;
	}

	string GetA() { return a; }
	void SetA(string _a) { a = _a; }

	string GetB() { return b; }
	void SetB(string _b) { b = _b; }

	void Print()
	{
		Transport::Print();
		cout << "A: " << a << "B: " << b << endl;
	}
};

class Bicycle :public Transport
{
	string type;
public:
	Bicycle() {}
	Bicycle(string n, int y, double s, double w, int p, string t)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
		type = t;
	}

	string GetType() { return type; }
	void SetType(string t) { type = t; }

	void Print()
	{
		Transport::Print();
		cout << "Type: " << type << endl;
	}
};

class Tank :public Transport
{
	string a;
	string b;
public:
	Tank() {}
	Tank(string n, int y, double s, double w, int p, string _a, string _b)
	{
		name = n;
		year = y;
		speed = s;
		weight = w;
		numOfPassengers = p;
		a = _a;
		b = _b;
	}

	string GetA() { return a; }
	void SetA(string _a) { a = _a; }

	string GetB() { return b; }
	void SetB(string _b) { b = _b; }

	void Print()
	{
		Transport::Print();
		cout << "A: " << a << "B: " << b << endl;
	}
	void Shoot()
	{
		cout << "pew pew ";
	}
};

int main()
{
	Car obj1("MyCar", 2008, 300, 200, 2, "a", "b");
	Bicycle obj2("MyBicycle", 2009, 1000, 300, 1, "bicycle");
	Tank obj3("MyTank", 2010, 500, 400, 4,"a","b");
	obj1.Print();
	obj2.Print();
	obj3.Print();
	obj3.Shoot();
}