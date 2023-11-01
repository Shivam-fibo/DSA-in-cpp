#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// inseting element in the tree
Node *buildTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data to insert in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data to insert in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTravesal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
 
        q.pop();

        if (temp = NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
                   cout << temp->data << " ";
           if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    levelOrderTravesal(root);
    return 0;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}