// BiTree.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


void Create_BiTree(int* bTree, int* node, int len) 
{
	int i = 0;
	int level = 0;
	bTree[1] = node[1];

	for (i = 2; i < len; ++i)
	{
		level = 1;
		while (bTree[level] != 0)
		{
			if (node[i] < bTree[level])
				level = 2 * level;
			else
				level = 2 * level + 1;
		}
		bTree[level] = node[i];
	}
}

int main()
{
	////int node[] = {0,1,3,5,2,4,6};
	//int bTree[64] = { 0 };
	//Create_BiTree(bTree, node, 7);

	size_t NumByte = sizeof(bool);

    return 0;
}

