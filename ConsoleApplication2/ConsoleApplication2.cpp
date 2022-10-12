// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
using namespace std;



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
//	printf("%d", fun(4,3));
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

//class node {
//public:
//	int data;
//	node* next;
//	node(int val) {
//		data = val;
//		next = NULL;
//	}
//};
//void insAtHead(node* &head, int val) {
//	node* n = new node(val);
//	if (head == NULL) {
//		n->next = n;head=n; return;
//	}
//	node* temp = head;
//	while (temp->next != head) {
//		temp = temp->next;
//	}
//	temp->next = n;
//	n->next = head; head = n;
//}
//void insAtTail(node*  &head, int val) {
//	if (head == NULL)
//	{
//		insAtHead(head, val);
//		return;
//	}
//	node* n = new node(val);
//	node* temp = head;
//
//	while (temp->next != head) {
//		temp = temp->next;
//	}
//	temp->next = n;
//	n->next = head;
//
//}
//void display(node* head) {
//	node* temp = head;
//	do{
//		cout << temp->data << " ";
//		temp = temp->next;
//	} while (temp != head);
//
//
//
//}
//
//int main() {
//
//	node* head = NULL;
//	insAtTail(head, 1);
//	insAtTail(head, 2);
//	insAtTail(head, 3);
//	insAtTail(head, 4);
//	display(head);
//	insAtHead(head, 5);
//	display(head);
//
//	return 0;
//}

// ----------end circular link list ============================
#pragma endregion

