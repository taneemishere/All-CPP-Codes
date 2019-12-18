#include <iostream>
#include <stdlib.h>
using namespace std;

template <class Object>

class TreeNode{
	
	private:
		Object *object;
		TreeNode *left;
		TreeNode *right;
	
	
	public: 
	TreeNode(){
		this->object = NULL;
		this->left = this->right = NULL;
	}
	
	TreeNode(Object *object){
		this->object = object;
		this->left = this->right = NULL;
	}
	
	Object *getInfo(){
		return this->object;
	}
	
	void setInfo(Object *object){
		this->object = object;
	}
	
	TreeNode *getLeft(){
		return left;
	}
	
	void setLeft(TreeNode *left){
		this->left = left;
	}
	
	TreeNode *getRight(){
		return right;
	}
	
	void setRight(TreeNode *right){
		this->right = right;
	}	
	
	int isLeaf(){
		if(this->left == NULL && this->right == NULL){
			return 1;
		}
		return 0;
	}
	
};
void insert(TreeNode <int> *root, int *info){
	TreeNode <int> * node = new TreeNode <int> (info);
	TreeNode <int> * p, * q;
	p = q = root;
	
	while(*info != *(p->getInfo()) && q != NULL){
		p = q;
		if( *info < *(p->getInfo()) )
			q = p->getLeft();
		else
			q = p->getRight();
	}
	
	if(*info == *( p->getInfo() )){
		cout << "Attempt to insert duplicate: " << *info << endl;
		delete node;
	} 
	else if( *info < *(p->getInfo()) ){
		p->setLeft( node ); 
	}
	else{
		p->setRight( node );
	}
}

int main(){
	int i;
	int x[] = {14,15,4,9,7,18,3,5,16,4,20,17,9,14,5,-1};
	TreeNode <int> *root = new TreeNode<int>();
	root->setInfo(&x[0]);
	for(i = 1; x[i]>0; i++){
		insert(root, &x[i]);
	}
	return 0;
}


