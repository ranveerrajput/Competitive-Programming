#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Node {
public:
	char ch;
	bool isTerminal;
	unordered_map<char, Node*> children;
	Node(char ch) {
		this->ch = ch;
		this->isTerminal = false;
	}
};

class Trie {
public:
	Node *root;

	Trie() {
		this->root = new Node('\0');
	}

	void insert(string str) {
		Node *temp = root;
		for (int i = 0; i < str.size(); i++) {
			char ch = str[i];
			if (temp->children.count(ch)) {
				//element is present in that level
				temp = temp->children[ch];
			}
			else {
				//element is not present , so we have to crate a node at at position
				Node *n = new Node(ch);
				temp->children[ch] = n;
				temp = n;
			}
		}
		temp->isTerminal = true;
		return;
	}

	bool seacrh(string str) {
		Node *temp = root;
		for (int i = 0; i < str.size(); i++) {
			char ch = str[i];
			if (temp->children.count(ch)) {
				//child found
				temp = temp->children[ch];
			}
			else {
				//child not found
				return false;
			}
		}
		return temp->isTerminal ;

	}

	void dfs(Node *root, string pre, string output) {
		if (root == NULL) return ;
		if (root->isTerminal) cout << pre + output << endl;
		for (auto ch : root->children) {
			dfs(ch.second, pre, output + ch.first);
		}



	}


	void print_string_with_prefix(string pre) {
		Node *temp = root;
		for (int i = 0; i < pre.size(); i++) {
			char ch = pre[i];
			if (temp->children.count(ch)) {
				//eleemnt present
				temp = temp->children[ch];
			}
			else {
				return;
			}
		}

		dfs(temp, pre, "");

	}

};




int main() {

	int t;
	cin >> t;
	Trie tr;
	while (t--) {
		string s;
		cin >> s;
		tr.insert(s);

	}
	// int q;
	// cin >> q;
	// while (q--) {
	// 	string qs;
	// 	cin >> qs;
	// 	cout << "String " << qs << " is " << (tr.seacrh(qs) ? "Present" : "Not Preent") << endl;
	// }

	string pre;
	cin >> pre;
	tr.print_string_with_prefix(pre);


	return 0;
}
