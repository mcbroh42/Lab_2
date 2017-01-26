#if !defined READ_CLASS
#define READ_CLASS

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	private:
	   ifstream input_file;
	   bool _eof;
	   bool closed;
	public:
		ReadFile(const char* file_name);
		~ReadFile();
		String readLine();
		bool eof();
		void close();
};



#endif
