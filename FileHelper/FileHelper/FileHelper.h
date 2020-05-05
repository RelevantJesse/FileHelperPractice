#pragma once
#include <iostream>
#include <fstream>
#include <vector>

class FileHelper
{
private:
	std::fstream _file;
	std::string _path;
public:
	std::string FilePath;

	FileHelper(std::string path);
	~FileHelper();

	std::vector<std::string> GetAllLines();
	void WriteFile(std::vector<std::string>* pData);
};

