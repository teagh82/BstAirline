#include "BinSrchTree.h"
#include <conio.h>

void main()
{
	BinSrchTree tree;
	int a; //�����û
	int k; //�����ð�
	char command;
	printf("�����Ϸ��� q�� �Է��ϼ���\n");

	printf("�����ð� (��) : ");
		scanf("%d",&k);

	while(true) {
		scanf("%c",&command);
		if(command == 'q')
			break;

		else{
			printf("������û (��) : ");
			scanf("%d",&a);
			tree.insert( new BinaryNode(a), k);
		}	
	}
}

