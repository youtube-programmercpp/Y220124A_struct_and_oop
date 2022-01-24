#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct {
	const char*  型名 ;
	int         サイズ;
} 型名とサイズ[] = 
{ "int"   , (int)sizeof(int   )
, "char"  , (int)sizeof(char  )
, "short" , (int)sizeof(short )
, "long"  , (int)sizeof(long  )
, "float" , (int)sizeof(float )
, "double", (int)sizeof(double)
};
#include <stdbool.h>
bool 型名に対応するサイズを得る(const char* 型名, int* サイズ)
{
	for (int i = 0;i < _countof(型名とサイズ);++i) {
		if (strcmp(型名, 型名とサイズ[i].型名) == 0) {
			*サイズ = 型名とサイズ[i].サイズ;
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
