#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
private:
    stack<char> s;
    queue<char> q;

public:
    void pushCharacter(char ch) {
        s.push(ch);
    }

    void enqueueCharacter(char ch) {
        q.push(ch);
    }

    char popCharacter() {
        char ch = s.top();
        s.pop();
        return ch;
    }

    char dequeueCharacter() {
        char ch = q.front();
        q.pop();
        return ch;
    }
};

int main() {
    string s;
    getline(cin, s);

    Solution obj;

    for (char c : s) {
        obj.pushCharacter(c);
        obj.enqueueCharacter(c);
    }

    bool isPalindrome = true;
    for (int i = 0; i < s.size() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome." << endl;
    } else {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }

    return 0;
}
