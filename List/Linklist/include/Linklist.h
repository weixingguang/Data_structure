class Node
{
	public:
	Node(int init): data(init), next(NULL) {}

	int data;
	Node *next;

};

class Linklist
{
	public:
		// Constructor.
		Linklist();

		// Insert one Node to the Linklist.
		void Insert(int index, int value);

		// Remove one Node from the Linklist.
		void Remove(int value);

		// Get the length of Linklist.
		int Length();

		// Reverse the Linklist.
		void Reverse();

		// Find the Node with value.
		int Find(int value);

		// Print all the node of this Linklist.
		void Print();

		// Destructor
		~Linklist();
	private:
		Node * head;
		int length;
};


