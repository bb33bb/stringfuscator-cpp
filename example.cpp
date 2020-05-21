#include <iostream>
#include "src/obfuscator.h"

int main() {
	// init class object
	obfuscator obf;

	// create variable with encrypted type we created in obfuscator.h
	encrypted encryption;

	encryption = obf.stringEncrypt("Hello world!");

	std::string decryption = obf.stringDecrypt(encryption);

	std::cout << "decrypted string: " + decryption;

	Sleep(30000000);

	return 0;
}