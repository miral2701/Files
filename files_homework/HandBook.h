#pragma once
class HandBook
{
	char* firmName;
	char* owner;
	long long number;
	char* adress;
	char* nishe;
public:
	HandBook();
	HandBook( char* a,  char* b,  char* c,  char* d, long long n);
	void SetFirm( char* a);
	void SetOwner( char* a);
	void SetNumber(long long n);
	void SetAdress( char* a);
	void SetNishe(char* a);

	 char*  GetFirm();
	 char*  GetOwner();
	long long GetNumber();
	 char*  GetAdress();
	 char*  GetNishe();

};

