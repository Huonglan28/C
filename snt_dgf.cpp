#include <iostream>
using namespace std;
int snt(int n)
{
	if (n < 2) 
		return 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) 
			return 0;
	}
	return 1;
}
void docfile(int A[], int& n)
{
	FILE* f = fopen("INPUT.txt", "rt");
	fscanf(f, "%d", &n);
	int i = 0;
	while (!feof(f))
	{
		fscanf(f, "%d", &A[i]);
		i++;
	}
	fclose(f);
}
void demsont(int A[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (snt(i) == 1)
		{
			dem++;
		}
	}
	FILE* f = fopen("OUTPUT.txt", "a");
	{
		fprintf(f, "%d", dem);
		fprintf(f, "%c", '\0');
	}
	fclose(f);
}
int xapxep(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] > A[j])
			{
				int t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
}
int ghifile(int A[], int n)
{
	FILE* f = fopen("OUTPUT.txt", "a");
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%d", A[i]);
		fprintf(f, "%c", ' ');
	}
	fclose(f);
}
int main()
{
	int A[100];
	int n;
	docfile(A, n);
	xapxep(A, n);
	ghifile(A, n);
	return 0;
}