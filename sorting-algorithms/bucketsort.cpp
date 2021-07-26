#include<iostream>
#include<vector>
using namespace std;
class Student
{
	public:
	char name[30];
	int marks;
};
void bucket_sort(Student S[], int n)
{
	vector<Student> v[101];
	for(int i = 0;i<n;i++)
	{
		int m = S[i].marks;
		v[m].push_back(S[i]);
	}
	
	for(int i=100;i>=0;i--)
	{
		for(vector<Student>::iterator it = v[i].begin();it!=v[i].end();it++)
		{
			cout<<(*it)<<endl;
		}
	}
}	
int main()
{
	int n;
	cout<<"Total entries:";
	cin>>n;
	Student S[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter name:";
		cin>>S[i].name;
		cout<<"Enter marks:";
		cin>>S[i].marks;
	}
	
	bucket_sort(S,n);
	return 0;
}
