#include <bits/stdc++.h>
using namespace std;
// ban co co 8*8
int u, v, s, t, n;
int a[10][10];
int d[100][100];
int dx[4] = {-1, -0, 0, 1};
int dy[4] = {-0, -1, -1, 0};
vector<pair<int, int>> res;
void bfs(int i, int j)
{
	queue<pair<int, int>> q;
	q.push({i, j});
	res.push_back({i, j});
	a[i][j] = 1;
	// danh dau de khong di vao nx
	while (!q.empty())
	{
		pair<int, int> top = q.front();
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if (i1 >= 1 && i1 <= n && j1 <= n && j1 >= 1 && a[i1][j1] == 0)
			{
				cout << i1 << " " << j1 << endl;
				// d[i1][j1]=d[top.first][top.second]+1;
				a[i1][j1] = 1;
				res.push_back({i1, j1});
				if (i1 == s && j1 == t)
					return;
				q.push({i1, j1});
			}
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> n >> u >> v >> s >> t;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];

	bfs(u, v);
	// 	if(a[s][t]==0)
	// 		cout<<"-1";
	// 	else{
	// 		for(auto it:res)
	// 			cout<<it.first<<" "<<it.second<<endl;
	// 	}
	// 	return 0;
}
