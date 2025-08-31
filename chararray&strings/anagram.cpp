#include <iostream>
#include <unordered_map>
#include <string>

bool isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) return false;

    std::unordered_map<char, int> count;

    for (char c : s) count[c]++;
    for (char c : t) count[c]--;

    for (auto pair : count) {
        if (pair.second != 0) return false;
    }

    return true;
}

int main() {
    std::string s1 = "anagram", t1 = "nagaram";
    std::string s2 = "rat", t2 = "car";

    std::cout << std::boolalpha; // Print true/false instead of 1/0
    std::cout << "Example 1: " << isAnagram(s1, t1) << std::endl; // true
    std::cout << "Example 2: " << isAnagram(s2, t2) << std::endl; // false

    return 0;
}
