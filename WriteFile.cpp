#include "WriteFile.h"
#include <sstream>


WriteFile::WriteFile()
{
   output_file.open(file_name);
   closed = false;
}
	
WriteFile::~WriteFile()
{
	close();
	bool closed;
}


void WriteFile::close()
{
   if (!this->closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      this->output_file << line->getText() << endl;
   }
}

