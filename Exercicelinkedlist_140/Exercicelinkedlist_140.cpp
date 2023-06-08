#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};
class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** Widianto, Node** Angga);
	bool listEmpty();
	bool delNode();
	void traverse();
};
void CircularLinkedList::addNode(int rollno, Node** Widianto, Node** Angga) { //write your answer here
}
while (Angga->next != NULL && Angga->next->no < nim){
	Widianto = Angga;
	Angga = Angga->next;
}

if (Angga->next != NULL && nim == Angga->next->rollNo) {
	cout << "\nDuplicate roll numbers not allowed" << endl;
	return;
}

newNode->next = Angga->next;
newNode->prev = Angga;
if (Angga->next != NULL)
	Angga->next->prev = newNode;
Angga->next = newNode;
};

bool CircularLinkedList::search(int rollno, Node** Widianto, Node** Angga) {
	*Widianto = LAST->next;
	*Angga = LAST->next;
	while (*Angga != LAST) {
		if (rollno == (*Angga)->rollNumber) {
			return true;
		}
		*Widianto = *Angga;
		*Angga = (*Angga)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
bool CircularLinkedList::delNode(int rollno, Node** Widianto, Node** Angga) { //write your answe
}
	Node* Widianto, * Angga;
	Widianto = Angga = NULL;
	if (search(rollNo, &Widianto, &Angga) == false)
		return false;
	if (Angga->next != NULL)
		Angga->next->prev = Widianto;
	if (Widianto != NULL)
Widianto->next = Angga>next;
	while (true)
	{

	}
LAST = Angga->next;

delete Angga;
return true;

void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* currentNode = LAST->next;
		while (currentNode != LAST) {
			cout << currentNode->rollNumber << " " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}