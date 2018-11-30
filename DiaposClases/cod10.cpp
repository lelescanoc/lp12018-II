class Year
{
	static const int min=1800;
	static const int max=2200;
	public:
		class Invalid{};
		Year(int x): y(X)
		{
			if(x<min || max<x) throw Invalid();
		}
		int year()
		{
			return y;
		}
		private:
			int y:
};
