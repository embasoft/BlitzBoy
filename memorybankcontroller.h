#include "memorybank.h"

/*
 * Class that handles the various memory banks.
 */

class MemoryBankController {

public:
	MemoryBankController();
	~MemoryBankController();

	void initialize();

	// bank index getter and setter
	int memoryBankIndex();
	bool setMemoryBankIndex(int index);

	// memory bank getter and setter
	MemoryBank * memoryBank(int index);
	void setMemoryBank(int index, MemoryBank *memoryBank);

	int createMemoryBank();

private:
	// temporary solution for the bank handling
	// later I want to use vector arrays for a more elegant way :)
	int _memoryBankIndex;
	MemoryBank * _memoryBanks[0x100];
};
