#include<iostream>
#include<string>
#include<memory>

std::string* getf(std::string&& r){
	return new std::string(std::move(r));
}
int main()
{
	using namespace std;
	string s("OPAQUE");
	string* ps(getf(std::move(s)));
	cout<<*ps<<endl;
	delete ps;
	return EXIT_SUCCESS;
}
