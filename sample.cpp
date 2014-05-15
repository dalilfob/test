  1 #include <iostream>
  2 #include <cstring>
  3 using namespace std;
  4 
  5 int reverse(char*, char*);
  6 
  7 int main() {
  8         char * string1;
  9         char * string2;
 10         cout << "Enter string to reverse: ";
 11         cin >> string1;
 12         cout << "Number of character: ";
 13         cout << reverse(string1, string2) << endl;
 14 //      cout << "Number of character: " << size << "\n";
 15         //cout << reverse(string1, string2) << endl;
 16         return 0;
 17 }
 18 
 19 int reverse(char * string1, char * string2) {
 20         int count = 0;
 21         while (*(string1 + count) != '\0') {
 22                 count++;
 23         }
 24         string2 = new char[count];
 25         // reverse the string
 26         for (int i = 0; i < count; i++) {
 27                 *(string2 +i)= *(string1 + count - i - 1);
 28         }
 29 //      cout << "Reverse string: " << string2 << "\n";
 30         delete[] string2;
 31         return count;
 32 
 33 }
