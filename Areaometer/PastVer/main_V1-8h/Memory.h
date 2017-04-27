#ifndef MEMORY_H
#define MEMORY_H

/****************************************************************************************************************
NOTES:

ios::in		| Open for input operations.  *Defined by default for ifstream
ios::out	| Open for output operations. *Defined by default for ofstream
ios::binary	| Open in binary mode.
ios::ate	| Set the initial position at the end of the file.
			| If this flag is not set, the initial position is the beginning of the file.
ios::app	| All output operations are performed at the end of the file, appending the content to the current content of the file.
ios::trunc	| If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one.

*****************************************************************************************************************/

void Memory()
{
	out.close();
	
	if (ROMmode == "OFF")
	{
		// Counts the number of lines in the RAM text file AND sets each unique number line to string array RAM[]
		in.open("RAM.txt");
			while (!in.eof())
			{
				while (getline(in, RAM[NumLin]))
				{
					++NumLin;
				}
			}
			in.close();

		//Does not utilize ROM - pure RAM rewrite only
		in.open("RAM.txt");
		while (!in.eof())
		{
			for (count = 0; count <= NumLin; count++)
			{
				while (getline(in, RAM[count]))
				{
					cout << RAM[count] << endl;
				}
			}
		}
		in.close();

	}// ROMmode == "OFF"
	
	else if (ROMmode == "ON")
	{
		// Counts the number of lines in the RAM text file AND sets each unique number line to string array RAM[]
		in.open("RAM.txt");
		while (!in.eof())
		{
			while (getline(in, RAM[NumLin]))
			{
				++NumLin;
			}
		}
		in.close();
		
		// Sends all current RAM into ROM.txt
		in.open("RAM.txt");
		outR.open("ROM.txt", ios::app);
		while (!in.eof())
		{
			for (count = 0; count <= NumLin; count++)
			{
				while (getline(in, RAM[count]))
				{
					outR << RAM[count] << endl;
				}
			}
		}
		in.close();
		outR.close();

		//Count the num of lines in ROM.txt
		inR.open("ROM.txt");
		while (!inR.eof())
		{
			while (getline(inR, ROM[countROM]))
			{
				++countROM;
			}
		}
		inR.close();
		
		// Outputs evrything from ROM.txt
		inR.open("ROM.txt");
		while (!inR.eof())
		{
			for (count = 0; count <= countROM; count++)
			{
				while (getline(inR, ROM[count]))
				{
					cout << ROM[count] << endl;
				}
			}
		}
		inR.close();
	}// ROMmode == "ON"

	else
	{
		cout << "ERROR[3::FATAL]: Memory corrupt!" << endl;
	}// This should never occur, just incase [ET]

	out.open("RAM.txt");
}


#endif /* MEMORY_H */