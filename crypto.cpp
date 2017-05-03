#include <iostream>
#include <string>

using namespace std;


int main()
{
	
	cout << "My name is Joel and this is a encrypt/decrypt Cryptography self-lesson using the Caesar Cipher in c++ \n" << endl;
	string msg = "Hello this my first encrytption program";
	int key = // No la puedes ver jij; 
	string inp;

	for(int i=0; i < msg.length(); i++) 
	{

          msg[i] += key;


         }

    cout << "Encrypetd code: \n" << msg << endl;
    cout << "\n" << endl;



    for(int i=0; i < msg.length(); i++) 
    {

          msg[i] -= key;    
          

         }


    cout << "Decrypted code: \n" << msg << endl;
    cin >> inp;


	return 0;
}