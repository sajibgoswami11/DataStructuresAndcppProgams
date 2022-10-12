// create a c program for adding items into linked list
//
#include "ConsoleApplication2.cpp"

#pragma region doubly linkedlist with c 

//int main()
//
//{
//    struct node
//    {
//        int data;
//        struct node* next;
//    };
//
//    struct node* head = NULL;
//    struct node* temp = NULL;
//    struct node* new_node = NULL;
//
//    int i = -1;
//    int n = -1;
//
//    printf("Enter the number of elements: ");
//    cin >> n;
//    for (i = 0; i < n; i++)
//    {
//        new_node = (struct node*)malloc(sizeof(struct node));
//        printf("Enter the data: ");
//        cin >> new_node->data;
//        new_node->next = NULL;
//
//        if (head == NULL)
//        {
//            head = new_node;
//        }
//        else
//        {
//            temp->next = new_node;
//        }
//
//        temp = new_node;
//    }
//
//    temp = head;
//    while (temp != NULL)
//    {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//
//    return -1;
//}

#pragma endregion



#pragma region double linked list cpp
//
//class node {
//public:
//	int data;
//	node* next; node* prev;
//	node(int val) {
//		data = val;
//		next = NULL;
//		prev = NULL;
//	}
//};
//void insAtHead(node* &head, int val) {
//	node* n = new node(val);
//	n->next = head;
//	if (head != NULL) {
//		head->prev = n;  
//	}
//	head = n;
//
//}
//void insAtTail(node* &head, int val) {
//	if (head == NULL) {
//		insAtHead(head, val);
//		return;
//	}
//	node* n = new node(val);
//	node* temp = head;
//
//	while (temp->next != NULL)
//	{
//		temp = temp->next;
//	}
//	// temp ka jo last position pe  n dala jo ki insert position 
//	temp->next = n;
//	n->prev = temp;
//}
//void display(node* head) {
//	node* temp = head;
//	do {
//		cout << temp->data;
//		temp = temp->next;
//	} while (temp != NULL);
//	cout << endl;
//}
//int main() {
//	node* head = NULL;
//	insAtTail(head, 1);
//	insAtTail(head, 2);
//	insAtTail(head, 3);
//	insAtTail(head, 4);
//	display(head); insAtTail(head, 5);
//	display(head);
//	return 0;
//}
//


#pragma endregion


#pragma region binary tree count and sum of nodes

//
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//    Node(int value)
//    {
//        data = value;
//    }
//
//};
//
//int countnodes(Node* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    return countnodes(root->left) + countnodes(root->right) + 1;
//}
//
//int sumOfnodes(Node* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    return sumOfnodes(root->left) + sumOfnodes(root->right) + root->data;
//}
//int main() {
//    Node* root = new Node(5);
//    root->left = new Node(6);
//    root->right = new Node(3);
//    root->left->left = new Node(9);
//    root->left->right = new Node(1);
//    root->left->right->left = new Node(2);
//    root->left->right->left->left = new Node(3);
//    root->left->right->left->right = new Node(5);
//    root->right->left = new Node(2);
//    root->right->right = new Node(1);
//    root->right->left->right = new Node(6);
//    root->right->left->right->right = new Node(7);
//    cout << countnodes(root) << endl;
//    cout << sumOfnodes(root) << endl;
//
//    return 0;
//}

#pragma endregion
