// splite_a_string_dynamically.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

char** splite_str(char *s) {
	int idx = 0;
	int n = 1;
	int cnt = 0;

	char* t = s;
	char** arr = (char**)malloc((n)*sizeof(char *));

	while(strstr(t, " ")) {
		arr = (char**)realloc(arr, (++n)*sizeof(char *) );
		idx = strstr(t, " ") - t;
		t[idx] = '\0';
		arr[cnt++] = t;
		t = (t + idx) + 1;
	}
	arr[cnt++] = t;
	arr[cnt] = nullptr;
	return arr;
}

int main()
{
	char s[1000] = "realloc deallocates the old object";

	cout << s << endl;

	char **arr = splite_str(s);
	int cnt = 0;
	while (arr[cnt])
		cout << arr[cnt++] << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
