#include keyboard.h


private char keysNormal [104];
private char keysShift [104];

keysNormal = {
	0x0, 0x0, 0x0, 0x0, 'a', 'b', 'c', 'd',
	 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	 'u', 'v', 'w', 'x', 'y', 'z', '1', '2',
	'3', '4', '5', '6', '7', '8', '9', '0',
	'\n', 0x0, '\b', '\t', ' ', '-', '=', '[',
	 ']', '\\', '#', ';', '\'', '`', ',', '.',
	 '/', 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	 0x0, 0x0, 0x0, 0x0, '/', '*', '-', '+',
	 '\n', '1', '2', '3', '4', '5', '6', '7',
	 '8', '9', '0', '.', '\\', 0x0, 0x0, '='
};

keysShift = {
	 0x0, 0x0, 0x0, 0x0, 'A', 'B', 'C', 'D',
	 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
	 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	 'U', 'V', 'W', 'X', 'Y', 'Z', '!', '"',
	 '£', '$', '%', '^', '&', '*', '(', ')',
	 '\n', 0x0, '\b', '\t', ' ', '_', '+', '{',
	 '}', '|', '~', ':', '@', '¬', '<', '>',
	 '?', 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	 0x0, 0x0, 0x0, 0x0, '/', '*', '-', '+',
	 '\n', '1', '2', '3', '4', '5', '6', '7',
	 '8', '9', '0', '.', '|', 0x0, 0x0, '='
};

void start_driver(){


}
