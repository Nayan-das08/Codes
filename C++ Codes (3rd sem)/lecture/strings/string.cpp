using namespace std;
# include <iostream>
# include <string.h>

void show(char a[], char b[])
{
	cout << "a = " << a << endl;
	cout << "b = " << b << "\n\n";
}

int main()
{
	char a[50]="hello", b[50]={0};
	
/*	show(a,b);

	strcpy(b, "ping pong");	
	show(a,b);

	strcpy(a,b);
	show(a,b);

	strcpy(a, "hello");
	show(a,b);

	cout << "size of a : " << strlen(a) << endl;
	cout << "size of b : " << strlen(b) << "\n\n";

	cout << "upper case a : " << strupr(a);
	strcpy(b,strupr(b));
	show(a,b);

	cout << "reverse of b : " << strrev(b) << endl;

	//---------------------------------------
	
	int i, j, k, l;
	i = strcmp("hello", "hello");
	j = strcmp("hello", "HELLo");
	k = strcmp("heLO", "hElO");

	cout << "i : " << i << endl;
	cout << "j : " << j << endl;
	cout << "k : " << k << endl;
	cout << "A = " << (int)'A' << endl;
	cout << "a = " << (int)'a' << endl;
	
	//--------------------------------------
	memset(b, '*', 20);
	cout << "b = " << b << endl;
	cout << "strlen(b) = " << strlen(b) << endl;
	
	memset(b+6, '+', 12);
	cout << "b = " << b << endl;
	cout << "strlen(b) = " << strlen(b) << endl;
	memset(b+12, 'a', 20);
	cout << "b = " << b << endl;
	cout << "strlen(b) = " << strlen(b) << endl;

	cout << "sizeof(b) = " << sizeof(b);

	//---------------------------------------
	strcpy(b, "central processing unit");
	cout << "x = " << strstr(b, "unit") << endl;
	cout << "y = " << strstr(b, "boy") << endl;
*/

	//-------------------------------------
	strcpy(a, "hello.my.name.is.nayan");
	cout << "a = " << a << endl;

	char *token;
	char delim[2] = ".";
	token = strtok(a, delim);
	while (token != NULL)
	{
		cout << "token = " << token << endl;	
		token = strtok(NULL, delim);
	}
	

}