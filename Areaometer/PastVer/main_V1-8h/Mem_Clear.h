#ifndef CLEAR_MEM_H
#define CLEAR_MEM_H

// Clears old ROM.txt and RAM.txt
void MemClear(void)
{
	out.open("RAM.txt", ios::trunc);
	out.close();
	out.open("ROM.txt", ios::trunc);
	out.close();
}

#endif /* CLEAR_MEM_H */