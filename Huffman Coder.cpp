#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

string compress(string uncomp) {
	// Count the number of times each character occurs, storing it in an array, and store the character in a secondary, matched array

	char qualit[sizeof(uncomp)];
	int quanti[sizeof(uncomp)];
	bool dupsaver = false;

	printf("\n\n");
	for (int i = 0; i < sizeof(qualit) / sizeof(char); i++) {
		printf("%c,", qualit[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(quanti) / sizeof(int); i++) {
		printf("%d", quanti[i]);
	}
	printf("\n");

	// THIS SECTION OF CODE IS NOT CORRECTLY COPYING THE STRING (and count) TO AN ARRAY... PERHAPS REFACTOR THIS METHODOLOGY, CHOOSE NEW ANGLE OF ATTACK
	for (int i = 0; i <= sizeof(uncomp); i++) {
		for (int j = 0; j <= sizeof(uncomp); j++) {
			if (qualit[j] == uncomp[i]) {
				if (i != sizeof(uncomp)) {
					i++;
				}
				else {
					dupsaver = true;
				}
				break;
			}
		}
		if (dupsaver == true) {
			break;
		}
		qualit[i] = uncomp[i];
		quanti[i] = count(uncomp.begin(), uncomp.end(), qualit[i]);
	}

	printf("\n\n");
	for (int i = 0; i < sizeof(qualit) / sizeof(char); i++) {
		printf("%c,", qualit[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(quanti) / sizeof(int); i++) {
		printf("%d", quanti[i]);
	}
	printf("\n");
	
	// Sort the array in ascending order of frequency, matching the character storage array in tandem



	/* Repeat the following for all characters and their frequencies, note that an odd number of characters will cause an node to be by itself. Does this need fixing? */
	// Store each character and their respective frequency in a node, retaining the ascending order
		 
		 

	// All characters have now been stored in nodes with their matched frequencies
	// Now add the frequencies of the two lowest frequency nodes, store the result in a third node. Then add this third nodes frequency to the next least frequent character, storing it
	// in a 4th node, and so on until all characters have been assigned to a frequency node.



	// Continue the process of adding two frequencies and storing them in a 3rd (root) node, until a penultimate root has been reached. A binary tree now exists.
	 
	

	// Crawl through the binary tree until you have touched all characters,
	// Creating a node for each character which stores the character as well as the moves required to arrive at it (0 for left, 1 for right, the moves are stored in binary)
	// link these nodes together to create a linked list, this list will be created most -> least frequent
	// utilize the linked list to translate the source data into a series of 1s and 0s



	// Store the linked list, binary tree, and compressed data somehow

	return "";
}

string decompress(string comp) {
	// takes in a compressed data as binary (stored in an array), and the linked list



	// at the first occurance of a matched character / binary value, store the appropriate decompressed character



	// store decompressed thing
	return "";
}

int main(int argc, char *argv[]) {
	char quit = 'n';
	string input;
	int readcount = 0;

	input = argv[1];

	if (input.empty()) {
		printf("No input provided, crashing\n");
		return -1;
	}
	
	while (quit != 'Y' || quit != 'y') {
		char choice = 'a';

		printf("Would you like to compress (C), or decompress (D)?\n");
		cin >> choice;
		
		if (choice == 'C' || choice == 'c') {
			compress(input);
		}
		else if (choice == 'D' || choice == 'd'){
			decompress(input /* linked list, binary tree*/);
		}
		else {
			printf("Invalid choice, returning to operation\n");
		}

		printf("Would you like to quit? (Y/N)\n");
		cin >> quit;
		
		if (quit == 'y' || quit == 'Y') {
			break;
		}
	}

	return 0;
}