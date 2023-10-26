#include "HandBook.h"

HandBook::HandBook()
{
	firmName = nullptr;
	owner = nullptr;
	number = 0;
	nishe = nullptr;
	adress = nullptr;
}

HandBook::HandBook( char* a, char* b,  char* c,  char* d, long long n)
{
	firmName = a;
	owner = b;
	number = n;
	nishe = c;
	adress = d;
}



void HandBook::SetFirm( char* a)
{
	firmName = a;
}

void HandBook::SetOwner( char* a)
{
	owner = a;
}

void HandBook::SetNumber(long long n)
{
	number = n;
}

void HandBook::SetAdress( char* a)
{
	adress = a;
}

void HandBook::SetNishe( char* a)
{
	nishe = a;
}

 char* HandBook::GetFirm()
{
	return firmName;
}

 char* HandBook::GetOwner()
{
	return owner;
}

long long HandBook::GetNumber()
{
	return number;
}

 char* HandBook::GetAdress()
{
	return adress;
}

 char* HandBook::GetNishe()
{
	return nishe;
}
