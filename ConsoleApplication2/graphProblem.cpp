

//#include "ConsoleApplication2.cpp"
//
//#define N 10005
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct graph {
//    struct ListNode* head[N];
//};
//
//struct edges {
//    int src, dest;
//};
//
//void show_graph(struct graph* g, int n, int m) {
//    for (int i = 0; i < n; i++) {
//        struct ListNode* graph_ptr = g->head[i];
//        if (graph_ptr != NULL) {
//            printf("%d-->", i);
//        }
//        while (graph_ptr != NULL) {
//            printf("%d ", graph_ptr->data);
//            graph_ptr = graph_ptr->next;
//        }
//        printf("\n");
//    }
//}
//
//struct graph* create_graph(struct edges arr_edges[], int n, int m) {
//    struct graph* g = (struct graph*)malloc(sizeof(struct graph));
//
//    for (int i = 0; i < n; i++) {
//        g->head[i] = NULL;
//    }
//
//    for (int i = m - 1; i >= 0; i--) {
//        int u = arr_edges[i].src, v = arr_edges[i].dest;
//
//        // edge from u->v
//        struct ListNode* newNode =
//            (struct ListNode*)malloc(sizeof(struct ListNode));
//
//        newNode->data = v;
//        newNode->next = g->head[u];
//        g->head[u] = newNode;
//
//        // edge from v->u
//        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//        newNode->data = u;
//        newNode->next = g->head[v];
//        g->head[v] = newNode;
//    }
//
//    return g;
//}
//
//
//// } Driver Code Ends
//// User function Template for C
//
//void dfs2(int n, int vis[], struct graph* g) {
//    vis[n] = 1;
//    printf("%d ", n);
//    struct ListNode* cur = g->head[n];
//    while (cur != NULL)
//    {
//        // printf("%d ",cur->data);
//        if (vis[cur->data] == 0) {
//
//            dfs2(cur->data, vis, g);
//        }
//        cur = cur->next;
//    }
//}
//void dfs(struct graph* g, int n, int m) {
//    // your code goes here.
//    int vis[ + 1];
//    memset(vis, 0, sizeof(vis));
//    dfs2(0, vis, g);
//}
//
//// { Driver Code Starts.
//
//int main() {
//    int t = 1;
//
//    while (t--) {
//        int queries;
//        cin >>queries ;
//        while (queries--) {
//            int n=5, m=4;
//            struct edges arr_edges[4];
//            for (int i = 0; i < m; i++) {
//                int u, v;
//                cin  >> u >> v;
//                arr_edges[i].src = u;
//                arr_edges[i].dest = v;
//            }
//
//            struct graph* g = create_graph(arr_edges, n, m);
//
//            dfs(g, n, m);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//// } Driver Code Ends