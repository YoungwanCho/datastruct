//
//  BinaryTree2.h
//  BinaryTree2
//
//  Created by Youngwan Cho on 2018. 6. 14..
//  Copyright © 2018년 developer119. All rights reserved.
//

#ifndef BinaryTree2_h
#define BinaryTree2_h

typedef int BTData;

typedef struct _bTreeNode
{
    BTData data;
    struct _bTreeNode* left;
    struct _bTreeNode* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);

void MakeLeftSubTree(BTreeNode* main, BTreeNode* bt);
void MakeRightSubTree(BTreeNode* main, BTreeNode* bt);

typedef void VisitFuncPtr(BTData data);
typedef void DeleteFuncPrt(BTreeNode* bt);

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action);
void InorderTraverse(BTreeNode* bt, VisitFuncPtr action);
void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action);
void DeleteTree(BTreeNode* bt, DeleteFuncPrt action);

#endif /* BinaryTree2_h */
