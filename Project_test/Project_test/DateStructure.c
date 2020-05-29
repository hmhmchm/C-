#include <stdio.h>
//int tree[i] = {'\0\, ... '\0'};
//Ãß°¡ 

void preorder(int i) {
	if (i > 0 && tree[i] != '\0') {
		printf(" %c ", tree[i]);
		preorder(get_left_child(i));
		preorder(get_right_child(i));
	}
}

void postorder(int i) {
	if (i > 0 && tree[i] != '\0') {
		postorder(get_left_child[i]);
		postorder(get_right_child(i));
		printf(" %c ", tree[i]);
	}

}

void inorder(int i) {
	if (i > 0 && tree[i] != '\0') {
		inorder(get_left_child[i]);
		printf(" %c ", tree[i]);
		inorder(get_right_child(i));
	}
}

int main() {
	//preorder();
	//postorder();
	//inoreder();;
}