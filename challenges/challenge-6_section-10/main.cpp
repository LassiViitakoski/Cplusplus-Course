#include <iostream>
#include <string>

using namespace std;

string crypt(string text, string alphabet, string encrypt_keys) {
  size_t position{};

  for (size_t i{0}; i < text.length(); i++) {
    position = alphabet.find(text.at(i));
    text.at(i) = position == -1  ? text.at(i) : encrypt_keys.at(position);
  }

  return text;
}

int main() {
  string alphabet {"abcdefghiklmnopqrstvxyzABCDEFGHIKLMNOPQRSTVXYZ "};
  string key {"1QAZqaz2WSXwsx3EDCedc4RFVrfv5TGBtgb6YHNyhn7UJM "};
  string input{};

  cout << "Enter your secret message: ";
  getline(cin, input);
  cout << endl;
  cout << "Encrypting message..." << endl;

  string encrypted = crypt(input, alphabet, key);

  cout << "Encrypted message: " << encrypted << endl;
  cout << "Decrypting message...";

  string decrypted = crypt(encrypted, key, alphabet);

  cout << "Decrypting message: " << decrypted << endl;

  return 0;
}