#include<bits/stdc++.h>
using namespace std;
int main() {
string paragraph;
cout << "Enter a paragraph: ";
getline(cin, paragraph);
stringstream ss(paragraph);
string word;
map<string, int> wordCount;
while (ss >> word) {
++wordCount[word];
}
cout << "\nWord Frequencies:\n";
for (const auto& pair : wordCount) {
cout << pair.first << ": " << pair.second << endl;
}
return 0;

}