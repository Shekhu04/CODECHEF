#include <iostream>
using namespace std;

int main() {
	int t;
	int x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>x;
	    if(x>=67&&x<=45000)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
