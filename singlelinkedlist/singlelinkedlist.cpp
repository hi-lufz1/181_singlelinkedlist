#include <iostream>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukikan NIM.";
	cin >> nim;
	cout << "Masukkan Nama : ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "NIM sudah ada " << endl;
			return;
		}

		Node* current = START;
		Node* previous = START;

		while ((current != NULL) && (nim >= current->noMhs))
		{
			if (nim == current->noMhs) {
				cout << "Nim sudah ada" << endl;
				return;
			}

			previous = current;
			current = current->next;
		}

		nodeBaru->next = current;
		previous->next = nodeBaru;
	}
}

bool searchNode(int nim, Node* current, Node* previous) {
	previous = START;
	current = START;

	while (current!=NULL && )


}


