#include <iostream>
#include <map>

enum class Color { Red, Green, Blue, Orange };

std::string toString(Color);
Color toEnum(const std::string &);

int main()
{
	std::cout << static_cast<int> (toEnum("Green")) << std::endl;
	std::cout << toString(Color::Blue) << std::endl;

}
std::string toString(Color col)
{
	std::map <Color, std::string> mp;
        mp[Color::Red] = "Red";
        mp[Color::Green] = "Green";
        mp[Color::Blue] = "Blue";
        mp[Color::Orange] = "Orange";

	return mp[col];  

}
Color toEnum(const std::string & str)
{
	std::map<std::string, Color> sp;
	sp["Red"] = Color::Red;
	sp["Green"] = Color::Green;
	sp["Blue"] = Color::Blue;
	sp["Orange"] = Color::Orange;

	return sp[str];
}
