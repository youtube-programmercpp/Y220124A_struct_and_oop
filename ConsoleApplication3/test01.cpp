#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
class TypeAndSize {
	const char* �^��  ;
	int         �T�C�Y;
public:
	//�R���X�g���N�^ (constructor)
	TypeAndSize
	( const char* �^��  
	, int         �T�C�Y
	)
		: �^��  (�^��  )
		, �T�C�Y(�T�C�Y)
	{
	}

	bool �^����v�m�F(const char* �^��������) const
	{
		return strcmp(�^��������, �^��) == 0;
	}
	int �T�C�Y�𓾂�() const
	{
		return �T�C�Y;
	}

} �^���ƃT�C�Y[] =
{ {"int"   , (int)sizeof(int)	}
, {"char"  , (int)sizeof(char)	}
, {"short" , (int)sizeof(short)	}
, {"long"  , (int)sizeof(long)	}
, {"float" , (int)sizeof(float)	}
, {"double", (int)sizeof(double)}
};
bool �^���ɑΉ�����T�C�Y�𓾂�(const char* �^��, int* �T�C�Y)
{
	for (int i = 0; i < _countof(�^���ƃT�C�Y); ++i) {
		if (�^���ƃT�C�Y[i].�^����v�m�F(�^��)) {
			*�T�C�Y = �^���ƃT�C�Y[i].�T�C�Y�𓾂�();
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
