#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define HASHSIZE 12
#define NULLKEY -32768

class Hash
{
	public:
		Hash();
		int hash_key(int key);
		void insert_hash(int key);
		bool search_hash(int key, int &addr);
		void show_hash();

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

void Hash::show_hash()
{
	for(int i = 0; i < HASHSIZE; i++)
		cout << i << "-> " << elem[i] << endl;
}

int Hash::hash_key(int key)
{
	return key % M;
}

void Hash::insert_hash(int key)
{
	int addr = hash_key(key);
	while(elem[addr] != NULLKEY)
		addr = (addr+1) % M;

	elem[addr] = key;
}

bool Hash::search_hash(int key, int &addr)
{
	addr = hash_key(key);
	while(elem[addr] != key)
	{
		addr = (addr + 1) % M;

		if(elem[addr] == NULLKEY || addr == hash_key(key))
			return false;
	}

	return true;
}

int main(int argc, char **argv)
{
	Hash *hs = new Hash;

	srand(unsigned(time(0)));

	for(int i = 0; i < HASHSIZE; i++)
		hs->insert_hash(rand() % 20);

	hs->show_hash();

	int addr;
	int key = 10;

	if( hs->search_hash(key, addr) )
	{
		cout << "The key " << key << " is in: " << addr << endl;
	}

	delete hs;
	hs = NULL;
}
