#include <iostream>

using namespace std;

#define endl '\n'

struct Node {
	int num = 0;
	Node* left = nullptr, * right = nullptr;
};

void post(Node* ptr);

int main() {

	Node* head = nullptr;

	while (1) {
		Node* ptr = new Node;

		cin >> ptr->num;

		if (!cin.eof()) {

			if (head) {
				Node* wal = head;

				while (1) {
					if (ptr->num > wal->num) {
						if (wal->right) wal = wal->right;
						else {
							wal->right = ptr;
							break;
						}
					}
					else {
						if (wal->left) wal = wal->left;
						else {
							wal->left = ptr;
							break;
						}
					}
				}
			}
			else head = ptr;
		}

		else break;

	}

	post(head);
}

void post(Node* ptr)
{
	if (ptr) {
		post(ptr->left);
		post(ptr->right);
		cout << ptr->num << endl;
	}
}
