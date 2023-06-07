#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "20230607_Q4.h"

/*
Q4. p.140 �ǽ� 4-1�� ��� ������ �����Ͽ� p.148 �ǽ� 4-3�� �ڵ尡 �۵��ϵ��� ���α׷��� �ۼ��϶�.
	p.148 �������� 1���� ����ó��. 
	�����ϴ� ��� �Լ��� ����ϵ��� ���α׷��� �����϶�. (clear, search)
*/

using namespace std;

int main()
{
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		puts("���� ������ �����߽��ϴ�.");
		return 1;
	}

	while (1)
	{
		int menu, x;
		//printf("���� �����ͼ� : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)Ǫ�� (2)�� (3)��ũ (4)Ŭ���� (5)��ġ (6)��� (0)���� : ");
		scanf("%d", &menu);

		if (menu == 0) break;
		switch (menu)
		{
		case 1: //Ǫ��
			printf("������: ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a����: Ǫ�ÿ� �����߽��ϴ�.");
			break;

		case 2: // ��
			if (Pop(&s, &x) == -1)
				puts("\a����: �˿� �����߽��ϴ�.");
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3: // ��ũ
			if (Peek(&s, &x) == -1)
				puts("\a����: ��ũ�� �����߽��ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
			break;
		
		case 4: // Ŭ����
			
			break;
		case 5: // ��ġ
			
			break;
		case 6: // ���
			Print(&s);
			break;
		}
	}

	Terminate(&s);
	return 0;
}