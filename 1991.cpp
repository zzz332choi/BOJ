#include <iostream>

using namespace std;

#define endl '\n'

struct Node {
	char c;
	Node* left = nullptr, * right = nullptr;
};

void pre(Node* ptr);
void in(Node* ptr);
void post(Node* ptr);

int main() {
	int n;
	cin >> n;

	Node* arr[26] = { nullptr };
	for (int i = 0; i < n; i++) arr[i] = nullptr;

	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;

		if (!arr[a - 'A']) {
			arr[a - 'A'] = new Node;
			arr[a - 'A']->c = a;
		}

		if (b != '.') {
			if (!arr[b - 'A']) {
				arr[b - 'A'] = new Node;
				arr[b - 'A']->c = b;
			}

			arr[a - 'A']->left = arr[b - 'A'];
		}

		if (c != '.') {
			if (!arr[c - 'A']) {
				arr[c - 'A'] = new Node;
				arr[c - 'A']->c = c;
			}

			arr[a - 'A']->right = arr[c - 'A'];
		}

	}

	pre(arr[0]);
	cout << endl;
	in(arr[0]);
	cout << endl;
	post(arr[0]);


}

void pre(Node* ptr)
{
	if (ptr) {
		cout << ptr->c;
		pre(ptr->left);
		pre(ptr->right);
	}
}

void in(Node* ptr)
{
	if (ptr) {
		in(ptr->left);
		cout << ptr->c;
		in(ptr->right);
	}
}

void post(Node* ptr)
{
	if (ptr) {
		post(ptr->left);
		post(ptr->right);
		cout << ptr->c;
	}
}
