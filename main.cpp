#include "BinSrchTree.h"
#include <conio.h>

void main()
{
	BinSrchTree tree;
	int a; //예약요청
	int k; //여유시간
	char command;
	printf("종료하려면 q를 입력하세요\n");

	printf("여유시간 (분) : ");
		scanf("%d",&k);

	while(true) {
		scanf("%c",&command);
		if(command == 'q')
			break;

		else{
			printf("착륙요청 (분) : ");
			scanf("%d",&a);
			tree.insert( new BinaryNode(a), k);
		}	
	}
}

