#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct {
	const char*  �^�� ;
	int         �T�C�Y;
} �^���ƃT�C�Y[] = 
{ "int"   , (int)sizeof(int   )
, "char"  , (int)sizeof(char  )
, "short" , (int)sizeof(short )
, "long"  , (int)sizeof(long  )
, "float" , (int)sizeof(float )
, "double", (int)sizeof(double)
};
#include <stdbool.h>
bool �^���ɑΉ�����T�C�Y�𓾂�(const char* �^��, int* �T�C�Y)
{
	for (int i = 0;i < _countof(�^���ƃT�C�Y);++i) {
		if (strcmp(�^��, �^���ƃT�C�Y[i].�^��) == 0) {
			*�T�C�Y = �^���ƃT�C�Y[i].�T�C�Y;
			return true;
		}
	}
	return false;
}

int main()
{
	char �^��[32];
	if (scanf("%s", �^��) == 1) {
		int �T�C�Y;
		if (�^���ɑΉ�����T�C�Y�𓾂�(�^��, &�T�C�Y))
			printf("%s �^�� %d �o�C�g�ł��B\n", �^��, �T�C�Y);
		else 
			printf("�s���Ȍ^�����͂���܂����B\n");
	}
}
