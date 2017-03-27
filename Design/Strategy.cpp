/*Strategy Mode*/

class ReplaceAlgorithm
{
	public:
		virtual void replace() = 0;
};

class ReplaceA: public ReplaceAlgorithm
{
	public:
		virtual void replace() {cout << "A" << endl;}
};

class ReplaceB: public ReplaceAlgorithm
{
	public:
		virtual void replace() {cout << "B" << endl;}
};

class ReplaceC: public ReplaceAlgorithm
{
	public:
		virtual void replace() {cout << "C" << endl;}
};

class Cache
{
	public:
		Cache(ReplaceAlgorithm* ra){m_ra = ra;}
		~Cache() {delete m_ra;}
	private:
		ReplaceAlgorithm* m_ra;
};

enum RA {A, B, C};
class Cache
{
	public:
		Cache(enum RA ra)
		{
			if(ra == A)
				m_ra = new ReplaceA();
			else if(ra == B)
				m_ra = new ReplaceB();
			else if(ra == C)
				m_ra = new ReplaceC();
			else
				m_ra = NULL;
		}

		~Cache() {delete m_ra;}
		void Replace() {m_ra->Replace();}
	private:
		ReplaceAlgorithm* m_ra;
};

int main()
{
	Cache cache(A);
	cache.Replace();

	return 0;
}

template <class RA> 
class Cache
{
	public:
		Cache() {};
		~Cache() {};
		void Replace() {m_ra.Replace();}
	private:
		RA m_ra;
};
