#include <iostream>
#include <string>
#include <cstdio> // For printf
using namespace std;

int main() {
    string s = "Hello";
    string s2 = "World";

    // length() / size()
    cout << "length(): " << s.length() << endl;
    cout << "size(): " << s.size() << endl;

    // empty()
    string emptyStr = "";
    cout << "empty(): " << emptyStr.empty() << endl;

    // at()
    cout << "at(1): " << s.at(1) << endl;

    // front() and back()
    cout << "front(): " << s.front() << endl;
    cout << "back(): " << s.back() << endl;

    // append() and +=
    string temp = s;
    temp.append(" World");
    cout << "append(): " << temp << endl;
    temp = s;
    temp += " World";
    cout << "operator+=: " << temp << endl;

    // insert()
    string ins = "HelloWorld";
    ins.insert(5, " ");
    cout << "insert(): " << ins << endl;

    // erase()
    string er = "Hello World";
    er.erase(5, 1);
    cout << "erase(): " << er << endl;

    // replace()
    string rep = "Hello@World";
    rep.replace(5, 1, " ");
    cout << "replace(): " << rep << endl;

    // substr()
    cout << "substr(0, 5): " << s.substr(0, 5) << endl;

    // find() and rfind()
    string findStr = "Hello World";
    cout << "find(\"World\"): " << findStr.find("World") << endl;
    cout << "rfind('l'): " << findStr.rfind("l") << endl;

    // compare()
    cout << "compare(Hello vs World): " << s.compare(s2) << endl;

    // c_str()
    printf("c_str(): %s\n", s.c_str());

    // clear()
    string clr = "Hello";
    clr.clear();
    cout << "clear(): " << clr.empty() << endl;

    // swap()
    string a = "Hello", b = "World";
    a.swap(b);
    cout << "swap(): a = " << a << ", b = " << b << endl;

    return 0;
}
