#include <iostream>
using namespace std;
int n;

//참조
// https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
// (struct 구현 및 입력 부분만) https://velog.io/@hyez_dev/%EB%B0%B1%EC%A4%80-1991-%ED%8A%B8%EB%A6%AC-%EC%88%9C%ED%9A%8C-C 
struct node{ //따로 노드 구현하는 법을 몰라 풀이 참고
    char left;
    char right;
};

node c[28];

void PreOrder(char node){

    if (node == '.'){
        return ;
    }

    cout << node;
    PreOrder(c[node].left); //node? node - 'A'?
    PreOrder(c[node].right);
}

void InOrder(char node){

    if (node == '.'){
        return;
    }

    InOrder(c[node].left);
    cout << node;
    InOrder(c[node].right);

}

void PostOrder(char node){

    if (node == '.'){
        return;
    }
    PostOrder(c[node].left);
    PostOrder(c[node].right);
    cout << node;
}

int main(){

    cin >> n;
    char nod, lft, rht;
    for (int i = 0; i < n; i++){ //1 인덱싱 하면 에러... 질문...

        cin >> nod >> lft >> rht;
        c[nod].left = lft;
        c[nod].right = rht;
    }

    PreOrder('A'); //언제 single quote, 언제 double quote in C++?
    printf("\n");

    InOrder('A');
    printf("\n");

    PostOrder('A');
    printf("\n");
}