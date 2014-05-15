   #include <iostream>
   #include <cstring>
   using namespace std;
   
   int reverse(char*, char*);
   
   int main() {
           char * string1;
           char * string2;
          cout << "Enter string to reverse: ";
          cin >> string1;
          cout << "Number of character: ";
          cout << reverse(string1, string2) << endl;
  //      cout << "Number of character: " << size << "\n";
          //cout << reverse(string1, string2) << endl;
          return 0;
  }
  
  int reverse(char * string1, char * string2) {
          int count = 0;
          while (*(string1 + count) != '\0') {
                  count++;
          }
          string2 = new char[count];
          // reverse the string
          for (int i = 0; i < count; i++) {
                  *(string2 +i)= *(string1 + count - i - 1);
          }
  //      cout << "Reverse string: " << string2 << "\n";
          delete[] string2;
          return count;
  
  }
