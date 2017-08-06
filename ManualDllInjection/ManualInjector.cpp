
//Author: War_L0k_01
//Date: 30.07.17
//Organization: 
//   ________   _______      __       __ 	
//	/        | /       \    /  \     /  |
//  $$$$$$$$/  $$$$$$$  |   $$  \   /$$ |
//     $$ |    $$ |  $$ |   $$$  \ /$$$ |
//     $$ |    $$ |  $$ |   $$$$  /$$$$ | 
//     $$ |    $$ |  $$ |   $$ $$ $$/$$ |
//     $$ | __ $$ |__$$ |__ $$ |$$$/ $$ |
//     $$ |/  |$$    $$//  |$$ | $/  $$ |
//     $$/ $$/ $$$$$$$/ $$/ $$/      $$/ 
//
// We are not responsible for what you do
//  with this program.
//  If you try to blame me or this organization.
//  Fuck You.
//_________________________________________________

#include <iostream>
#include <string>

using namespace std;

// This will be our xor encryption/decryption function
string XOR(string data, char key[])
{
	string xorstring = data; //initialize new variable for our xordata
	for(int i = 0; i < xorstring.size(); i++) // for loop scrambling bits in the string
	{
		xorstring[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))];// scrambling the string
	}
	return xorstring;
}
//XOR FUNCTION WORKS BOTH WAYS
int main()
{
	
	cout << "			    TDM" << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "			De/Encryptor" << endl;
	cout << "			     V1" << endl;
	cout << "_____________________________________________________________________________________" << endl;
	
	char key[3] = { 'K', 'E', 'Y' };
	cout << XOR("V0¥?08á", key);
	getchar();
	return 0;
}