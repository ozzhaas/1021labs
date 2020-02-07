#ifndef FILEIO_H
#define FILEIO_H

#include "linkedlist.h"


/************************************************************************
void fileRead() Function:
    Parameters: No parameters
    Return: void
    Function creates a file pointer and opens the file input text using
	the file stream. It then checks to make sure the file opened properly
	and then proceeds to read all of the numbers from the file. Each time
	it reads a number from the file, it creates a new Node using that
	number as the data of the node. Then the function calls
	insertStrategic() to insert the new node into the list in ascending
	order. This process continues until all of the numbers are read
	from the file.
*************************************************************************/
void fileRead();




#endif
