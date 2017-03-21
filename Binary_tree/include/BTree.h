#ifndef BTREE_H  
#define BTREE_H  

struct BTreeNode  
{  
	char data;  
	BTreeNode *lChild,*rChild;  
};  

class BTree  
{
	public:  
	void setRoot(BTreeNode* r){ root=r;}  
	BTreeNode* getRoot(){ return root;}  

	BTreeNode* createBTree();  

	void inOrder();  
	void NotReInOrder();  

	void preOrder();  
	void NotRePreOrder();  

	void postOrder();  

	void NotRePostOrder();  

	int BTreeSize();  
	int BTreeLeaves();  

	int BTreeHeight();  
	int layerHeight();  

	protected:  

	void inOrder(BTreeNode*);  
	void preOrder(BTreeNode*);  
	void postOrder(BTreeNode*);  

	int BTreeSize(BTreeNode*);  
	int BTreeLeaves(BTreeNode*);  

	int BTreeHeight(BTreeNode*);  
	private:  
	BTreeNode* root;  
};  

#endif 
