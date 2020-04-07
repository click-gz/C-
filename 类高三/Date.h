class Date {
	int d, m, y;
public:
	Date(int, int, int);
	Date(Date&);
	void show();
	Date operator ++();
	Date operator ++(int);
};
