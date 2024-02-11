#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

const long long mod = 1e9 + 7;
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
const long long maxN = 2e5 + 5;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<long long int, long long int>

#define ALL(s) (s).begin(), (s).end()
#define rALL(s) (s).rbegin(), (s).rend()
#define show(x) cout << #x << " : " << x << endl

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *ArrayToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);

    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *cur = new Node(arr[i]);
        mover->next = cur;

        mover = cur;
    }

    return head;
}

int LengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

void TravarseLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {2, 5, 8, 9};

    // // Node y = Node(arr[0], nullptr);
    // Node *x = new Node(arr[0], nullptr);
    // // cout << y.data << endl;
    // cout << x->data << endl;

    Node *head = ArrayToLL(arr);

    TravarseLL(head);
    cout << endl;
    cout << "total length : " << LengthOfLL(head) << endl;
}