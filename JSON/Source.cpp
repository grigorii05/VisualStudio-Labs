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
		// ... ����� ���, ������� ������ ��� ��������� ���� <����:��������>
		_data = object;
	}

	any& operator[](const string& key)
	{
		if (is_object() )
		{
			// ����� ���, ������� �������� _data � map<string, any> � ���������� map[key]
		}
		else 
		{
			throw std::logic_error("is not an object");
		}
	}
};

void main()
{
	// �������� ������ Json (����������� ��� map<string, any>)
	"key1" : { // ��������� ������ Json (����������� ��� map<string, any>)
		"key11" : true,
			"key12" : [ // ��������� ������ Json (����������� ��� vector<any>)
				1,
					true,
				{ // ��������� ������ Json (����������� ��� map<string, any>)
				}
			]
	}
}