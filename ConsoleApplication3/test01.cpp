#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
class TypeAndSize {
	const char* 型名  ;
	int         サイズ;
public:
	//コンストラクタ (constructor)
	TypeAndSize
	( const char* 型名  
	, int         サイズ
	)
		: 型名  (型名  )
		, サイズ(サイズ)
	{
	}

	bool 型名一致確認(const char* 型名引き数) const
	{
		return strcmp(型名引き数, 型名) == 0;
	}
	int サイズを得る() const
	{
		return サイズ;
	}

} 型名とサイズ[] =
{ {"int"   , (int)sizeof(int)	}
, {"char"  , (int)sizeof(char)	}
, {"short" , (int)sizeof(short)	}
, {"long"  , (int)sizeof(long)	}
, {"float" , (int)sizeof(float)	}
, {"double", (int)sizeof(double)}
};
bool 型名に対応するサイズを得る(const char* 型名, int* サイズ)
{
	for (int i = 0; i < _countof(型名とサイズ); ++i) {
		if (型名とサイズ[i].型名一致確認(型名)) {
			*サイズ = 型名とサイズ[i].サイズを得る();
			return true;
		}
	}
	return false;
}
int main()
{
	char 型名[32];
	if (scanf("%s", 型名) == 1) {
		int サイズ;
		if (型名に対応するサイズを得る(型名, &サイズ))
			printf("%s 型は %d バイトです。\n", 型名, サイズ);
		else
			printf("不明な型が入力されました。\n");
	}
}
