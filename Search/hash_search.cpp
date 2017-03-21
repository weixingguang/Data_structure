#include <iosream>
using namespace std;

#define HASHSIZE 12
#define NULLKEY -32768

class Hash
{
	public:
		bool Hash();
		int hash_key(int key);
		void insert_hash(int key);
		bool search_hash(int key);

	private:
		int *elem;
		int count;
		int M;
};

Hash::Hash()
{
	int i;
	M = HASHSIZE;
	elem = new int[HASHSIZE];

	for(i = 0; i < HASHSIZE; i++)
		elem[i] = NULLKEY;
}

int hash_key(int key)
{
	return key % M;
}


