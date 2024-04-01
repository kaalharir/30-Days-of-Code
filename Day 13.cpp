#include <iiostream>
#include <string>

using namespace std;

class Book {
protected:
	string title;
	string auther;

public:
	Book(string t, string a) {
		title = t;
		auther = a;
	}
	virtual void display() = 0;
};
class MyBook : public Book {
private:
    int price;

public:
    MyBook(string title, string author, int price) : Book(title, author), price(price) {}

    // Overriding the display method
    void display() override {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
	string title, auther;
	int price;

	MyBook novel("The Alchemist", "Paul Coelho", 248);

	novel.display();

	return 0;
}