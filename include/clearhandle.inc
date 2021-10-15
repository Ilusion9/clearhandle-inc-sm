#if defined _clearhandle_included
 #endinput
#endif
#define _clearhandle_included

stock void ClearArray_Ex(ArrayList &list)
{
	int blockSize = list.BlockSize;
	delete list;
	list = new ArrayList(blockSize);
}

stock void ClearStack_Ex(ArrayStack &stack)
{
	int blockSize = stack.BlockSize;
	delete stack;
	stack = new ArrayStack(blockSize);
}

stock void ClearTrie_Ex(StringMap &trie)
{
	delete trie;
	trie = new StringMap();
}
