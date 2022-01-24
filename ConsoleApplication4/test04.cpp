class sample_1;
class sample_2;
bool operator==(const sample_1& lhs, const sample_2& rhs);//êÈåæ

class sample_1 {
	friend bool operator==(const sample_1& lhs, const sample_2& rhs);
	float value;
public:
	sample_1(float value)
		: value(value)
	{
	}
	bool operator==(const sample_2& rhs) const;
};
class sample_2 {
	friend bool operator==(const sample_1& lhs, const sample_2& rhs);
	int value;
public:
	sample_2(int value)
		: value(value)
	{
	}
};

//íËã`
bool operator==(const sample_1& lhs, const sample_2& rhs)
{
	return lhs.value == rhs.value;
}


#include <iostream>
int main()
{
	sample_1 a(123.f);
	sample_2 b(123 );
	if (a == b)
		std::cout << "a Ç∆ b ÇÕìôÇµÇ¢\n";
	else
		std::cout << "a Ç∆ b ÇÕìôÇµÇ≠Ç»Ç¢\n";


}
