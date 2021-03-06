#include "constants.h"
#include <cstring>
/*
 * Class that represents a memory bank.
 * The class MemoryBankController handles the various memory banks of the gameboy.
 */

class MemoryBank {

public:
	MemoryBank();
	~MemoryBank();

	char readByte(int address);
	void setByte(int address, char value);

	void fillBank(char* data);

private:
	char _memory[BANK_LENGTH];
};
