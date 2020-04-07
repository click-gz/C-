class Student {
	int id;
	char name[16];
public:
	Student();
	Student(int, char[]);
	Student operator =(Student&);
	void show();
};