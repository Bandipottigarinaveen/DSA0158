#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 1000
typedef struct {
    int start;
    int end;
} Pair;
typedef struct Node {
    int value;
    struct Node* next;
} Node;
typedef struct {
    Node* head;
} AdjList;
void addEdge(AdjList* adj, int u, int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = v;
    newNode->next = adj[u].head;
    adj[u].head = newNode;
}
void removeEdge(AdjList* adj, int u) {
    if (adj[u].head != NULL) {
        Node* temp = adj[u].head;
        adj[u].head = adj[u].head->next;
        free(temp);
    }
}
int findStartNode(int outDegree[], int inDegree[], int n) {
    for (int i = 0; i < n; i++) {
        if (outDegree[i] > inDegree[i]) {
            return i;
        }
    }
    return -1;
}
void eulerianPath(AdjList* adj, int start, int path[], int* index) {
    static int stack[MAX_NODES];
    int top = -1;
    stack[++top] = start;
    while (top >= 0) {
        int u = stack[top];
        if (adj[u].head != NULL) {
            stack[++top] = adj[u].head->value;
            removeEdge(adj, u);
        } else {
            path[(*index)++] = u;
            top--;
        }
    }
}
int main() {
    Pair pairs[] = {{5, 1}, {4, 5}, {11, 9}, {9, 4}};
    int numPairs = sizeof(pairs) / sizeof(pairs[0]);
    int maxNode = 0;

    for (int i = 0; i < numPairs; i++) {
        if (pairs[i].start > maxNode) maxNode = pairs[i].start;
        if (pairs[i].end > maxNode) maxNode = pairs[i].end;
    }
    maxNode++;
    AdjList adj[MAX_NODES] = {0};
    int inDegree[MAX_NODES] = {0};
    int outDegree[MAX_NODES] = {0};
    for (int i = 0; i < numPairs; i++) {
        addEdge(adj, pairs[i].start, pairs[i].end);
        outDegree[pairs[i].start]++;
        inDegree[pairs[i].end]++;
    }
    int startNode = findStartNode(outDegree, inDegree, maxNode);
    if (startNode == -1) {
        startNode = pairs[0].start;
    }
    int path[MAX_NODES] = {0};
    int pathIndex = 0;
    eulerianPath(adj, startNode, path, &pathIndex);
    printf("Valid arrangement of pairs:\n");
    for (int i = pathIndex - 1; i > 0; i--) {
        printf("[%d, %d]\n", path[i], path[i - 1]);
    }
    return 0;
}

