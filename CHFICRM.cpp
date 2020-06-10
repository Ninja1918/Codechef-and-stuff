#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
#define llint long long int
#define vint vector<int>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, input, fiv, ten, fif;
    map<int, int> have;// Creates a map of key integer and value integer
    bool flag;
    cin >> t;
    while(t--)
    {
        fiv = ten = fif = 0;
        flag = true;
        cin >> n; 
        while(n--)
        {
        	cin >> input;
        	if(input == 5)
        	{
        		fiv++;
			}
        	if(input == 10)
        	{
        		ten++;
				if(fiv > 0)
        		{
        			fiv--;
				}
				else
				{
					cout << "NO";
					flag = false;
					break;
					
				}
			}
		}
			if(input == 15)
				{
					fif++;
					if(ten > 0)
						ten--;
					else
					if(fiv > 1)
					{
						fiv = fiv - 2;
					}
					else
					{
						cout << "NO";
    					flag = false;
    					break;
					}
				}
    	if(flag == true)
		{
			cout << "YES";	
		}	
		cout << endl;
	}
    return 0;
}
