#include <iostream>
#include <any>
#include <map>
#include <string>
#include <type_traits>
using namespace std;

class Json
{
private: any _data;
public:
	void parse_object()
	{
		map<string, any> object;
		// ... здесь код, который парсит все вложенные пары <ключ:значение>
		_data = object;
	}

	any& operator[](const string& key)
	{
		if (is_object() )
		{
			// здесь код, который приводит _data к map<string, any> и возвращает map[key]
		}
		else 
		{
			throw std::logic_error("is not an object");
		}
	}
};

void main()
{
	// корневой объект Json (реализуется как map<string, any>)
	"key1" : { // вложенный объект Json (реализуется как map<string, any>)
		"key11" : true,
			"key12" : [ // вложенный массив Json (реализуется как vector<any>)
				1,
					true,
				{ // вложенный объект Json (реализуется как map<string, any>)
				}
			]
	}
}