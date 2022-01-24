#include <vector>
#include <string>
#include <iostream>
template<class T>void show_all_elements(const T& r)
{
	const auto n = r.size();
	for (size_t i = 0; i < n; ++i)
		std::cout << r[i] << '\n';
}
int main()
{
	const std::string s1 = "ABC";
	const std::vector<char> s2{ 'A', 'B', 'C' };
	show_all_elements(s1);
	show_all_elements(s2);
}
