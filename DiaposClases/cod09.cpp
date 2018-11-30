class Vector{};
Vector operator+(const Vector&, const Vector &);
Vector operator+=(const Vector&, int);
int main()
{
	Month m=sep;
	++m;
	++m;
	++m;
	++m;
	cout<<m<<endl;
	return 0;
}
