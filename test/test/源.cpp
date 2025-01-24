#include<stdio.h>
#include<windows.h>

typedef int(__cdecl *xxx)(int a, int b);

typedef struct k
{
	int x;
	int y;
}*a;

union u
{
	int n;
	float f;
	double d;
	long l;
	long long ll;
};


enum en
{
	TYPE_INT,
    TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPT_LONG,
	TYPE_LONGLONG
};

int foo(int n)
{
	u uu;
	uu.n = 5;
	en e;
	e = TYPE_FLOAT;
	
	if (n == 1)
	{
		return 1;
	}
	
	return foo(n - 1)+n;
}

int main(int argc, char* argv[])
{
	int m = foo(5);
	printf("%d\r\n", m);
	int n[3][4];
	int(*p)[4] = n;
	system("pause");
	return 0;

}