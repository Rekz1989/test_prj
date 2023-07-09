#include <iostream>
class Node {
public:
    int key;
    double data;
    Node* left;
    Node* right;
    Node* parent;
    Node(int inkey = 0, double indata = 0) : key(inkey), data(indata), left(nullptr), right(nullptr), parent(nullptr) {}
};
class BTree {
private:
    Node* root;

public:
    BTree() : root(nullptr) {}
    void Add(int key, double data);//����������
    Node* find(int inkey); //�����
    void order(); //����� � ������� �����������
    void order2(Node* node);
    Node* min(); //�������
    Node* max(); //��������
    Node* remove(int key); //��������
    double summm(); //�����
    double summ(Node* node, int* i);
    void inorder(); //��� �������� ������
    void inorderTraversal(Node* node);
    void printNodeInfo(Node* node); //����� ������
};