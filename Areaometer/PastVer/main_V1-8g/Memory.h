#ifndef MEMORY_H
#define MEMORY_H

void Memory()
{
	out.close();
	//int counter = 0;
	
	in.open("PrimMem.txt");
	while (!in.eof())
	{
		while (getline(in, Mem[MemLin]))
		{
			++MemLin;
		}
	}// Counts the number of lines in the text file AND sets each unique number line to string array Mem
	in.close();

	//Saves current RAM into ROM [CNF]
	/*
	in.open("PrimMem.txt");
	outROM.open("ROM.txt");
	int total = MemLin + countROM;
	while (!in.eof())
	{
		if (countROM == 0)
		{
			for (countROM = countROM; countROM <= total; countROM++)
			{
				while (getline(in, Mem[countROM]))
				{
					outROM << Mem[countROM] << endl;
				}
			}
			countROM = countROM + 1;
		}
		else
		{
			int totalinc = total;
			int countROMh = countROM;
			for (countROM = countROM; countROM <= total + 1; countROM++)
			{
				Mem[totalinc - total] = ROM[countROM];
				++totalinc;
			}
			outROM.close();

			outROM.open("ROM.txt");
			for (countROMh = countROMh; countROMh <= total + 1; countROMh++)
			{
				while (getline(in, ROM[countROMh]))
				{
					outROM << ROM[countROMh] << endl;
				}
			}
			outROM.close();
		}
	}
	in.close();
	*/

	in.open("PrimMem.txt");
	while (!in.eof())
	{
		for (count = 0; count <= MemLin; count++)
		{
			while (getline(in, Mem[count]))
			{
				cout << Mem[count] << endl;
			}// Print all, whole, individual line(s) that are stored in the array
		}// For all the counted lines in PrimMem.txt file
	}// Prints all the lines in PrimMem.txt
	in.close();


	out.open("PrimMem.txt");
}


#endif /* MEMORY_H */