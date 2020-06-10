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
    int t, n, input;
    map<int, int> have;// Creates a map of key integer and value integer
    bool flag;
    cin >> t;
    while(t--)
    {
        have[5] = have[10] = have[15] = 0;
        flag = true;
        cin >> n; 
        while(n--)
        {
        		cin >> input;
        		have[input]++;
        		if(input == 10)
        		{
        			if(have[5] > 0)
        			{
        				have[5]--;
					}
					else
					{
						cout << "NO";
						flag = false;
						break;
						
					}
				}
		}
				/*if(input == 15)
					{
						have[2]++;
						if(have[1] > 0)
							have[1]--;
						else
						if(have[0] > 1)
						{
							have[0] = have[0] - 2;
						}
						else
						{
							cout << "NO";
    						flag = false;
    						break;
						}
					}*/
    	if(flag == true)
		{
			cout << "YES";	
		}	
		cout << endl;
	}
    return 0;
}
