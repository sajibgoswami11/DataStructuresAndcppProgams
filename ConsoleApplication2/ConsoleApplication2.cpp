// operator precedence * , %, /, +, - operator precedence
//

// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
//
using namespace std;

#pragma region heapsort

#define pii pair<int,int> 
#define vi vector<int> 
#define repeat (i,a,b) for(int i=a;a<b;a++)
#define vii vector<pii>
#define setBits(x) builtin_popcount(x)
//
//void heapify(vi &a, int n, int i)
//{
//		int maxIdx = i; //maxidx ko intialize kiya i se ,hence start point se 
//		int l = 2 * i + 1;//left element of a parent node ,exists at 2i+1 th index
//		int r = 2 * i + 2;//right exists at 2i+2 nd node 
//
//		if (l<n && a[l] > a[maxIdx]) {//ahar left child , upar wale se bada hai toh update kar denge 
//			maxIdx = l;
//		}
//		if (r<n && a[r] > a[maxIdx]) {//same goes for right too 
//			maxIdx = r;
//		}
//		if (maxIdx != i) {    //upar wali iterattions khatam hone ke baad agar maxidx i ke baharbar nahi hai ,toh swap karenge 
//			swap(a[i], a[maxIdx]);
//
//			heapify(a, n, maxIdx);//phir naye mile tree pe vapis heapify laga denge
//		}
//}
//
//void heapsort(vi &a)
//{
//	int n = a.size();
//	for (int i = n / 2; i >= 0; i--) {
//		heapify(a, n, i);
//	}
//	for (int i = n - 1; i > 0; i--) {
//		swap(a[0], a[i]);
//		heapify(a, i, 0);
//	}
//}
//int main(){
//	int n; cin >> n;
//	vi a(n);
//	for (int i = 0; i < n; i++) 
//		cin >> a[i];
//	heapsort(a);
//
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	return 0;
//    
//
//}

#pragma endregion

# pragma region permute
//
//void permute(string a, int l, int r) {
//	if (l == r) {
//		cout << a << endl;
//	}
//	else {
//		for (int i = l; i <= r; i++) {
//			swap(a[l], a[i]);
//			i, l;
//			permute(a, l + 1, r);
//			swap(a[l], a[i]);
//		}
//	}
//}
//int main() {
//	string str = "ABC";
//	int n = str.size();
//	permute(str, 0, n - 1);
//	return 0;
//}

# pragma endregion

#pragma region quicksort
//
//
//void swap(int arr[], int i, int j)
//{
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//
//int partition(int arr[], int l, int r)
//{
//	int pivot = arr[r];
//	int i = l - 1;
//	for (int j = l; j < r; j++)
//	{
//		if (arr[j] < pivot)
//		{
//			i++;
//			swap(arr, i, j);
//		}
//
//	}
//	swap(arr, i + 1, r);
//	return i + 1;
//}
//
//void quicksort(int arr[], int l, int r)
//{
//	if (l < r)
//	{
//		int pi = partition(arr, l, r);
//		quicksort(arr, l, pi - 1);
//		quicksort(arr, pi + 1, r);
//	}
//}
//
//int main()
//{
//	int arr[5] = { 5,4,6,2,1 };
//	quicksort(arr, 0, 4);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}cout << endl;
//
//	return 0;
//}


#pragma endregion

#pragma region  DFS traversal of the graph


//class Solution {
//public:
//    // Function to return a list containing the DFS traversal of the graph.
//    void solve(int V, vector<int> adj[], vector<int>& ans, vector<int>& vis, int i)
//    {
//        if (vis[i] == 1)
//        {
//            return;
//        }
//        vis[i] = 1;
//        ans.push_back(i);
//        for (int j = 0;j < adj[i].size();j++)
//        {
//            if (vis[adj[i][j]] != 1)
//            {
//                solve(V, adj, ans, vis, adj[i][j]);
//            }
//        }
//    }
//    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//        vector<int> ans;
//        vector<int> vis(V, 0);
//        solve(V, adj, ans, vis, 0);
//        return ans;
//    }
//};
//
//int main() {
//    int tc;
//    cin >> tc;
//    while (tc--) {
//        int V, E;
//
//        cin >> V >> E;
//
//        vector<int> adj[5];
//
//        for (int i = 0; i < E; i++) {
//            int u, v;
//            cin >> u >> v;
//            adj[u].push_back(v);
//            adj[v].push_back(u);
//        }
//        // string s1;
//        // cin>>s1;
//        Solution obj;
//        vector<int> ans = obj.dfsOfGraph(V, adj);
//        for (int i = 0; i < ans.size(); i++) {
//            cout << ans[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//} 

#pragma endregion

#pragma region output program

//
//int incr(int i) {
//    static int count = 0;
//    count = count + i;
//    return (count);
//}
//int main()
//{
//    int i, j;
//    for (i = 0; i <= 4; i++) {
//        j = incr(i);
//    }
//    printf("%d", j); 
//   
//    return 0;
//}
///////////////////
//
//int fun(int x, int y) {
//	if (x > 0)
//		return ((x % y) + fun(x / y, y));
//	else
//		return 0;
//}
//void main() {
//
//	printf("%d", fun(525,25));
//}


//int fun(int x, int y) {
//	if (x == 0) {
//		return y;
//	}
//	return fun(x - 1, x + y);
//}
//int main() {
//
//	int x =  (7 * 3) % 4 / 2 ; 
//	/// -> 2+ 7 *0  
//	int r = 7 * 3 % 4 /2 ; // r = 3
//    //	7 * 3 / 2  -> 7 * 0 -> 
//	cout << x << r; ;
//	//printf("%d", fun(4,3));
//}

////////////////////
//int y = 0;
//
//int fun(int x) {
//	static int i = 0;
//	if (x <= 0) {
//		return 1;
//	}
//	else if (x > 5)
//	{
//		i = x;
//		y = fun(x - 3) + 2;
//		return y;
//	}
//    y = fun(x - 2) + i;
//	return y;
//	
//}
//int main() {
//	cout << fun(7);
//}
/////////////////////
//
//int F(int x,int *py, int **pz) {
//     int y ,z;
//	 **pz+=1;
//	 z = **pz;
//	 *py += 2;
//	 y = *py;
//	 x = y + 3;
//	 return x + y + z;
//}
//
// int main() {
//	 int c, * b, ** a;
//	 c = 4;
//	 b = &c;
//	 a = &b;
//	 printf("%d", F(c, b, a));
//}
//////////////////////////
//
//int str_to_int(string str1) {
//	int val = 0;
//	for (int i = 0;i < str1.length(); i++)
//	{
//		val *= 10;
//		val += str1[i] -'0';
//	}
//	return val;
//}
//int main() {
//	cout << "converted "<< str_to_int("abc");
//}



//int main() {
//	int i = 1, j = 1, k = 1;
//	cout << ++i || j++ && ++k;
//	cout << i << j << k;
//
//	/*int i = -20, j = -1, k = 2;double m;
//	m = ++i && ++j && ++k;*/ 
//	cout << i << " " << j << " " << k << endl ; 
//	//printf("%-3.2lf", m);
//	return 0;
//}

#pragma endregion

#pragma region circular linked list cpp

class node {
public:
	int data;
	node* next;
	node(int val) {
		data = val;
		next = NULL;
	}
};
void insAtHead(node* &head, int val) {
	node* n = new node(val);
	if (head == NULL) {
		n->next = n;head=n; return;
	}
	node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = n;
	n->next = head; head = n;
}
void insAtTail(node*  &head, int val) {
	if (head == NULL)
	{
		insAtHead(head, val);
		return;
	}
	node* n = new node(val);
	node* temp = head;

	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;

}
void display(node* head) {
	node* temp = head;
	do{
		cout << temp->data << " ";
		temp = temp->next;
	} while (temp != head);



}

int main() {

	node* head = NULL;
	insAtTail(head, 1);
	insAtTail(head, 2);
	insAtTail(head, 3);
	insAtTail(head, 4);
	display(head);
	insAtHead(head, 5);
	display(head);

	return 0;
}

// ----------end circular link list ============================
#pragma endregion

#pragma region dijkstra
//
////
//int main() {
//	const int inf = 1e7;
//
//	int n, m; cin >> n >> m;
//	vector<int> dist(n + 1, inf);
//	vector<vector<pair<int, int>>> graph(n + 1);
//	for (int i = 0; i < m; i++) {
//		int u, v, w; cin >> u >> v >> w;
//		graph[u].push_back({ v,w });
//		graph[v].push_back({ u,w });
//	}
//	int source; cin >> source;
//	dist[source] = 0;
//	set < pair<int, int>> s1;
//	s1.insert({ 0,source });
//	while (!s1.empty()) {
//		auto x = *(s1.begin());
//		s1.erase(x);
//		for (auto it : graph[x.second]) {
//			if (dist[it.first] > dist[x.second] + it.second) {
//				s1.erase({ dist[it.first],it.first });
//				dist[it.first] = dist[x.second] + it.second;
//				s1.insert({ dist[it.first],it.first });
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (dist[i] < inf)
//			cout << dist[i] << " ";
//		else
//			cout << -1 << " ";
//	}
//	
//	return 0;
//
//}

#pragma endregion
