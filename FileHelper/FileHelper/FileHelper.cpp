#include "FileHelper.h"
#include <string>

FileHelper::FileHelper(std::string path)
{
	// set _path member variable
	// open file using the 'out' flag
	// close the file

	// (this is a wierd way of doing things. Kind of forced to do it this way
	// if we want to use the same object for both file read and write)
	// Basically the goal here is to have this constructor create the file if it doesn't exist
}

FileHelper::~FileHelper()
{
	// If the file is open, close the file
	// Let the user know that the file is now closed
}

std::vector<std::string> FileHelper::GetAllLines()
{
	// open the file using the 'in' flag
	// read file and load into a string vector
	// close the file
	// return the filled vector
}

void FileHelper::WriteFile(std::vector<std::string>* pData)
{
	// open the file using the 'out' flag
	// clear the file
	// loop through the vector in the input parameter (hint: remember the input parameter is a pointer)
	// write each element in the vector to the file (you can use the vector's 'at' function to do this)
	// close the file
}