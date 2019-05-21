#include <malloc.h>
#include "bit_tree.h"
#include "stdio.h"

SeqStaticStackForBiTree *createStaticStackForBiTree() {

    SeqStaticStackForBiTree *stack = (SeqStaticStackForBiTree *) malloc(sizeof(SeqStaticStackForBiTree));
    return stack;
}

void initSeqStaticStackForBiTree(SeqStaticStackForBiTree *stack) {
    stack->top = -1;
}

void pushSeqStaticStackForBiTree(SeqStaticStackForBiTree *stack, BiTNode node) {
    //判断栈是否满
    if (stack->top == 99) {
        printf("stack full\n");
        return;
    }

    stack->datas[++stack->top] = node;
}

BiTNode *popSeqStaticStackForBiTree(SeqStaticStackForBiTree *stack) {

    if (checkSeqStaticStackEmptyForBiTree(stack) == 1) {
        printf("empty stack");
        return NULL;
    }

    return &stack->datas[stack->top--];

}

int seqStaticStackSizeForBiTree(SeqStaticStackForBiTree *stack) {

    return -1;

}

BiTNode getSeqStaticStackTopElemForBiTree(SeqStaticStackForBiTree *stack) {

}

int checkSeqStaticStackEmptyForBiTree(SeqStaticStackForBiTree *stack) {
    return stack->top == -1 ? 1 : 0;
}

BiTree genTestTree() {

    BiTNode *nodes[6];
    for (int i = 0; i < 6; i++) {
        nodes[i] = (BiTNode *) malloc(sizeof(BiTNode));
        nodes[i]->data = i;
        nodes[i]->rchild = NULL;
        nodes[i]->lchild = NULL;
    }

    nodes[0]->lchild = nodes[1];
    nodes[0]->rchild = nodes[2];

    nodes[1]->lchild = nodes[3];
    nodes[1]->rchild = nodes[4];

    nodes[2]->rchild = nodes[5];

    return nodes[0];
}

//访问节点方法
void visitNode(BiTree tree) {
    if (tree != NULL) {
        printf("%d ", tree->data);
    }

}

//先序遍历
void preOrder(BiTree tree) {
    if (tree != NULL) {

        visitNode(tree);

        preOrder(tree->lchild);

        preOrder(tree->rchild);
    }
}

//中序遍历
void inOrder(BiTree tree) {
    if (tree != NULL) {

        inOrder(tree->lchild);

        visitNode(tree);

        inOrder(tree->rchild);
    }
}

//后序遍历
void postOrder(BiTree tree) {
    if (tree != NULL) {

        postOrder(tree->lchild);

        postOrder(tree->rchild);

        visitNode(tree);
    }
}

//中序遍历非递归
void inOrder1(BiTNode node) {

    //初始化栈
    SeqStaticStackForBiTree *stack = createStaticStackForBiTree();
    initSeqStaticStackForBiTree(stack);

    BiTNode *p = &node;

    while (p != NULL || checkSeqStaticStackEmptyForBiTree(stack)) {

        //所有左节点一一进栈
        if (p != NULL) {

            //左节点进栈
            pushSeqStaticStackForBiTree(stack, *p);
            p = p->lchild;

        } else {
            //退栈 此节点要么没有左节点 要么已经被访问过了
            p = popSeqStaticStackForBiTree(stack);

            //访问这个节点
            visitNode(p);

            //遍历右子树
            p = p->rchild;

        }

    }

}

SeqQueueForBiTree *createSeqQueueForBiTree() {

    SeqQueueForBiTree *queue = (SeqQueueForBiTree *) malloc(sizeof(SeqQueueForBiTree));
    queue->rear = queue->front = 0;

    return queue;
}

void enSeqQueueForBiTree(SeqQueueForBiTree *queue,BiTNode node){
    if(queueIsFullForBiTree(queue) == 1){
        printf("queue full\n");
        return;
    }

    queue->data[queue->rear] = node;
    queue->rear = (queue->rear+1)%10;
}

BiTNode deSeqQueueForBiTree(SeqQueueForBiTree *queue){
    if(queueIsEmptyForBiTree(queue) == 1){
        printf("queue empty");
    }

    BiTNode elem = queue->data[queue->front];

    queue->front = (queue->front+1)%10;

    return elem;
}

//判断队空
int queueIsEmptyForBiTree(SeqQueueForBiTree* queue){
    if(queue->front == queue->rear){
        return 1;
    }
    return 0;
}

//判断队满
int queueIsFullForBiTree(SeqQueueForBiTree* queue){
    if((queue->rear+1)%10 == queue->front){
        return 1;
    }

    return 0;
}

void levelOrder(BiTree tree){

    //初始化队列
    SeqQueueForBiTree *queue = createSeqQueueForBiTree();

    //将根节点入队
    BiTNode node = *tree;
    enSeqQueueForBiTree(queue,node);

    //队列不为空时循环
    while(!queueIsEmptyForBiTree(queue)){

        BiTNode deNode = deSeqQueueForBiTree(queue);

        //访问节点
        printf("%d ",deNode.data);

        //左子树不空,左子树入队
        if(deNode.lchild != NULL){
            enSeqQueueForBiTree(queue,*(deNode.lchild));
        }

        //右子树不空,右子树入队
        if(deNode.rchild != NULL){
            enSeqQueueForBiTree(queue,*(deNode.rchild));
        }

    }
}