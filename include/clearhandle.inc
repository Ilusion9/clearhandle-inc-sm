#if defined _clearhandle_included
 #endinput
#endif
#define _clearhandle_included

stock void ClearArrayList(ArrayList &array)
{
	int blockSize = array.BlockSize;
	delete array;
	array = new ArrayList(blockSize);
}

stock void ClearArrayStack(ArrayStack &array)
{
	int blockSize = array.BlockSize;
	delete array;
	array = new ArrayStack(blockSize);
}

stock void ClearStringMap(StringMap &map)
{
	delete map;
	map = new StringMap();
}