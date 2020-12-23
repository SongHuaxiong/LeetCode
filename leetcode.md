
# LEETCODE

## 链表

### [206.反转链表](https://leetcode-cn.com/problems/reverse-linked-list/)
1. **递归**
```C++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* last = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return last;
    }
};
```
2. **迭代**
```C++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        auto cur = head;
        while(cur != nullptr)
        {
            auto temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};
```
**反转链表前N个节点**
https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247484467&idx=1&sn=beb3ae89993b812eeaa6bbdeda63c494&chksm=9bd7fa3baca0732dc3f9ae9202ecaf5c925b4048514eeca6ac81bc340930a82fc62bb67681fa&scene=21#wechat_redirect

---
### []()
* 判断长度**小于k**
* **反转前k个节点**
* 反转后续节点，并把前一段链表的**尾部连上**
1. 用**迭代**方法反转**任意区间**的链表
```C++
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return head;
        ListNode* m = head;
        ListNode* n = head;
        for(int i = 0; i < k; ++i)
        {
            if(n == nullptr) return head;
            n = n->next;
        }
        ListNode* newHead = reversemn(m, n);
        m->next = reverseKGroup(n, k);//！注意：此处是“m”，因为此时“m”节点是上一段反转结果的尾节点
        return newHead;
    }
    ListNode* reversemn(ListNode* m, ListNode* n)
    {
        ListNode* pre = nullptr;
        ListNode* cur = m;
        while(cur != n)
        {
            auto nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        return pre;
    }
};
```
---
### [234.回文链表](https://leetcode-cn.com/problems/palindrome-linked-list/)
1. **反转**得到新的链表之后**逐个比较**
```C++
class Solution {
public:
    ListNode* originList;//保存原来的链表
    bool isPalindrome(ListNode* head) {
        originList = head;
        return compare(head);
    }
    bool compare(ListNode* head)//边判断边递归
    {
        if(head ==nullptr) return true;
        bool res = compare(head->next);
        res = res && (head->val == originList->val);
        originList = originList->next;
        return res; 
    }
};
```
2. 反转**后半部分**
   * **快慢指针**找到**中点**，反转后半部分
```C++
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next ==nullptr) return true;
        ListNode* centerNode = findCenter(head);
        auto reverseFromCenter = reverseList(centerNode);

        auto p = head;
        auto q = reverseFromCenter;
        while(q != nullptr && p != nullptr)
        {
            if(q->val != p->val)
                return false;
            p = p->next;
            q = q->next;
        }
        centerNode->next = reverseList(reverseFromCenter);//还原
        return true;
    }
    ListNode* findCenter(ListNode* head)//快慢指针找中点
    {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr)//链表长度为奇数：fast->next != nullptr；为偶数：fast->next->next != nullptr
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head)//反转
    {
        ListNode* cur = head;
        ListNode* pre = nullptr;
        while(cur != nullptr)
        {
            ListNode* temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};
```
---
### [21.合并两个有序链表](https://leetcode-cn.com/problems/merge-two-sorted-lists/)
1. **递归**
```C++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        if(l1->val < l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;     
        }     
    }
};
```
2. **迭代**
```C++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* presumHead = new ListNode(-99);//此节点标记为链表和的前一个节点，易于带入迭代计算
        ListNode* temp = presumHead;
        while(l1 != nullptr && l2 != nullptr)
        {
            if(l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        temp->next = l1 == nullptr ? l2 : l1;
        return presumHead->next;
    }
};
```
---
### []()
* 
```C++

```
---
### [141.环形链表](https://leetcode-cn.com/problems/linked-list-cycle/)
1. **快慢指针**有循环必定会相遇
   * 快慢指针相遇后**继续移动**，直到第二次相遇。**两次相遇间的移动次数即为环的长度。**
```C++
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        auto fast = head;
        auto slow = head;
        while(fast != nullptr && fast->next != nullptr)//为空说明链表可以走到头，必定不是循环链表
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return true;
        }
        return false;
    }
};
```
2. hash
```C++
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        unordered_set<ListNode*> set;//unorder记录重复元素，可以用map之类的用int记录出现次数
        while(head != nullptr)
        {
            if(set.count(head)) return true;
            set.insert(head);
            head = head->next;
        }
        return false;
    }
};
```
---
### [160.相交链表](https://leetcode-cn.com/problems/intersection-of-two-linked-lists/)
1. 暴力求解
   * 两层循环逐一比较
```C++
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        auto temp = headB;
        while(headA != nullptr)
        {
            while(temp != nullptr)
            {
                if(temp == headA)
                    return temp;
                temp = temp->next;
            }
            headA = headA->next;
            temp = headB;//内层一次遍历结束后要返回初始位置再次进行下一轮比较
        }
        return nullptr;
    }
};
```
2. 哈希
   * 保存A的所有信息，检查B
```C++
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        unordered_set<ListNode*> set;
        while(headA)
        {
            set.insert(headA);
            headA = headA->next;
        }
        while(headB)
        {
            if(set.count(headB))
                return headB;
            headB = headB->next;
        }
        return nullptr;
    }
};
```
3. 双指针（妙啊！）
    * A和B两个链表长度可能不同，但是**A+B**和**B+A**的长度是相同的，所以遍历A+B和遍历B+A一定是同时结束。 如果A,B相交的话A和B有一段尾巴是相同的，所以两个遍历的指针一定会同时到达交点 如果A,B不相交的话两个指针就会同时到达A+B（B+A）的尾节点
```C++
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        auto A = headA;
        auto B = headB;
        while(A != B)
        {
            A = A == nullptr ? headB : A->next;
            B = B == nullptr ? headA : B->next;
        }
        return A;
    }
};
```
---
### [19.删除链表的倒数第N个节点](https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/)
1. 快慢指针（官方）
   * **快指针先走n**，**走到尾**时，**慢指针**自然就到**倒数第n个**了
```C++
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);//指向head的上一节点！！
        ListNode* first = head;
        ListNode* second = dummy;
        for (int i = 0; i < n; ++i) {
            first = first->next;
        }
        while (first) {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};

```
2. 快慢指针
```C++
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return nullptr;
        auto pFirst = head;
        auto pSecond = head;
        while(n--)
        {
            pFirst = pFirst->next;
        }
        if(pFirst == nullptr) return head->next;//head自己可能会被删掉！！！
        while(pFirst->next != nullptr)
        {
            pFirst = pFirst->next;
            pSecond = pSecond->next;
        }
        pSecond->next = pSecond->next->next;
        return head;
    }
};
```
3. **两次遍历**(官方)
   * 第一次求**长度L**，第二次删除**L-n+1**处的节点
```C++
class Solution {
public:
    int getLength(ListNode* head) {
        int length = 0;
        while (head) {
            ++length;
            head = head->next;
        }
        return length;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        int length = getLength(head);
        ListNode* cur = dummy;
        for (int i = 1; i < length - n + 1; ++i) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
```
4. **栈**(官方)
   * 利用栈**先进后出**的特点
```C++
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        stack<ListNode*> stk;
        ListNode* cur = dummy;
        while (cur) {
            stk.push(cur);
            cur = cur->next;
        }
        for (int i = 0; i < n; ++i) {
            stk.pop();
        }
        ListNode* prev = stk.top();
        prev->next = prev->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
```
---
### [142.环形链表II](https://leetcode-cn.com/problems/linked-list-cycle-ii/)
1. 哈希
```C++
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return nullptr;
        auto temp = head;
        unordered_map<ListNode*, bool> map;
        while(temp != nullptr)
        {
            if(map[temp])
                return temp;
            map[temp] = true;
            temp = temp->next;
        }
        return nullptr;
    }


};
```
2. 快慢指针暴力求解
* 可以考虑一个问题：只要存在环，环节点走过环的长度后一定会**再次回到自身**
* 想到这里，只要遍历每一个节点，判断是否满足以上条件即可
* 耗时，但是满足空间复杂度O(1)
```C++
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return nullptr;
        auto fast = head;
        auto slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                break;
        }
        int ans = 0;//环的长度

        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            ans++;
            if(fast == slow)
                break;
        }

        auto temp1 = head;
        while(ans)
        {
            int length = ans;
            auto temp2 = temp1;
            while(length--)
            {
                temp2 = temp2->next;
            }
            if(temp2 == temp1)
                return temp1;
            temp1 = temp1->next;
        }
        return nullptr;
    }
};
```
3. 快慢指针
* 官方题解讲的很详细，移步[官方题解](https://leetcode-cn.com/problems/linked-list-cycle-ii/solution/huan-xing-lian-biao-ii-by-leetcode-solution/);
> 这里解释一下官方题解到的 a = c + (n - 1)(b + c);
> fast和slow相遇时，slow位于**a + b**处，此时slow只要移动c或者**c + m(b + c)**(b+c刚好是一圈)的距离都可以回到入环点，而a刚好满足c + m(b + c) 的关系。
```C++
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return nullptr;
        auto fast = head;
        auto slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            {
                auto ptr = head;
                while(ptr != slow)
                {
                    ptr = ptr->next;
                    slow = slow->next;
                       
                }
                return ptr;
            }
        }
        return nullptr;
    }
};
```
---
### [23.合并K个升序链表](https://leetcode-cn.com/problems/merge-k-sorted-lists/)

```C++

```
---
### []()

```C++

```
---
### []()

```C++

```
---
### []()

```C++

```
---
---
---
## 树

>**树的遍历框架***
```C++
/* 二叉树遍历框架 */
void traverse(TreeNode root) {
    // 前序遍历
    traverse(root.left)
    // 中序遍历
    traverse(root.right)
    // 后序遍历
}
```

### [101.对称二叉树](https://leetcode-cn.com/problems/symmetric-tree/)

1. **递归**
```C++
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }
    bool check(TreeNode* Node1, TreeNode* Node2)
    {
        if (Node1 == nullptr && Node2 == nullptr) return true;
        if (Node1 == nullptr || Node2 == nullptr) return false;
        return (Node1->val == Node2->val) && check(Node1->left, Node2->right) && check(Node1->right, Node2->left);
    }
};
```

2. **迭代**
> **一层一层**地放入**队列**
> 终止迭代：**continue**
```C++
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }
    bool check(TreeNode* Node1, TreeNode* Node2)
    {
        queue<TreeNode*> myQue;
        myQue.push(Node1);
        myQue.push(Node2);

        while (!myQue.empty())
        {
            auto temp1 = myQue.front();
            myQue.pop();
            auto temp2 = myQue.front();
            myQue.pop();   

            if (!temp1 && !temp2) continue;//终止当前迭代
            if (!temp1 || !temp2) return false;
            if (temp1->val != temp2->val) return false;

            myQue.push(temp1->right);
            myQue.push(temp2->left);
            myQue.push(temp1->left);
            myQue.push(temp2->right);      
        }
        return true;
    }
};
```
---
### [104.二叉树的最大深度](https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/)

1. 递归
> 父树深度 = 子树深度 + 1

```C++
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
```

1. 迭代
> **一层一层**地放入**队列**
> **用size作为标记**，标记每层是否**遍历完毕**
```C++
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int count = 0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            for (int i = que.size() - 1; i >= 0; i--)
            {
                auto node = que.front();
                que.pop();
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
            count++;
        }
        return count;
    }
};
```
---
### [226.翻转二叉树](https://leetcode-cn.com/problems/invert-binary-tree/)

* 写法1
```C++
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }   
};
```
* 写法2
```C++
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;
        TreeNode* r = invertTree(root->right);
        TreeNode* l = invertTree(root->left);
        root->left = r;
        root->right = l; 
        return root;
    }
};
```
---
### [543.二叉树的直径](https://leetcode-cn.com/problems/diameter-of-binary-tree/)
* 递归
```C++
class Solution {
public:
    int res = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        depth (root);
        return res;
    }
    int depth(TreeNode* root)
    {
        if (root == nullptr) return 0;
        int L = depth(root->left);
        int R = depth(root->right);
        res = max(L + R, res);//比较当前子树的深度和此前的最大深度，取其大者
        return max(L, R) + 1;//返回深度
    }
};
```
---
### [617.合并二叉树](https://leetcode-cn.com/problems/merge-two-binary-trees/)
```C++
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (!t1) return t2;
        if (!t2) return t1;
        TreeNode* sumTree = new TreeNode(t1->val + t2->val);
        sumTree->left = mergeTrees(t1->left, t2->left);
        sumTree->right = mergeTrees(t1->right, t2->right);
        return sumTree;
    }
};
```
---
### [98.验证二叉搜索树](https://leetcode-cn.com/problems/validate-binary-search-tree/)
1. **递归**
* 利用不等关系，递归判断
* root的**整个左子树**都要小于root.val，**整个右子树**都要大于root.val
* 使用辅助函数，增加函数参数列表，在参数中**携带额外信息（root信息）**，将这种**约束传递**给子树的所有节点
```C++
class Solution {
public:
    bool isValidBST(TreeNode* root) {  
        return isValid(root, nullptr, nullptr);
    }
    bool isValid(TreeNode* root, TreeNode* minNode, TreeNode* maxNode)
    {
        if (root == nullptr) return true;
        if (minNode != nullptr && root->val <= minNode->val) return false;
        if (maxNode != nullptr && root->val >= maxNode->val) return false;
        return isValid(root->left, minNode, root) && isValid(root->right, root, maxNode);//此处的root是关键。
    }
};
```

2. **中序遍历**
* 根据二叉搜索树的定义，不难知道，树的**中序遍历**是**升序**排列的
* 首先中序遍历输出数组，在判断数组是否是升序即可
>```C++ 
> 操作(root->left)
> 操作(root)
> 操作(root->right)
>```
```C++
class Solution {
public:
    bool isValidBST(TreeNode* root) {  
        if (root == nullptr) return true;
        vector<TreeNode*> res;//直接存数也可以
        inorder(root, res);
        for (int i = 1; i < res.size(); ++i)
        {
            if (res.at(i - 1)->val >= res.at(i)->val)
                return false;
        }
        return true;
    }
    void inorder(TreeNode* root, vector<TreeNode*>& res)
    { 
        if (root == nullptr) return;
        inorder(root->left, res);//左
        res.push_back(root);//存
        inorder(root->right,res);//右
    }
};
```
---
### [114.二叉树展开为链表](https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/)
```C++
class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == nullptr) return;
        flatten(root->left);//拉平左侧
        flatten(root->right);//拉平右侧
        auto rightTemp = root->right; 
        root->right = root->left;//把左侧复制到根节点右边
        root->left = nullptr;//原本左侧置空
        auto cur = root;
        while (cur->right)
        {
            cur = cur->right;
        }
        cur->right = rightTemp;//把原本拉平的右侧接到末尾      
    }
};
```

### [116.填充每个节点的下一个右侧节点指针](https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node/)

```C++
class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) return nullptr;
        makeConnect(root->left, root->right);
        return root;
    }
    void makeConnect(Node* N1, Node* N2)
    {
        if (N1 == nullptr || N2 == nullptr) return;
        N1->next = N2;
        makeConnect(N1->left, N1->right);//左子树的左节点连接左子树的右节点
        makeConnect(N1->right, N2->left);//左子树的右节点连接右子树的左节点
        makeConnect(N2->left, N2->right);//右子树的左节点连接右子树的右节点
    }
};
```
---
### [654.最大二叉树](https://leetcode-cn.com/problems/maximum-binary-tree/)

```C++
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty()) return  nullptr;
        return construct(nums, 0, nums.size() - 1);
    }
    TreeNode* construct(vector<int>& nums, int lo, int hi)
    {
        if (lo > hi) return nullptr;
        int maxValue = INT_MIN;
        int index = -1;
        for (int i = lo; i <= hi; ++i)
        {
            if (nums[i] > maxValue)
            {
                maxValue = nums[i];
                index = i;
            }
        }
        TreeNode* root = new TreeNode(maxValue);
        root->left = construct(nums, lo, index - 1);
        root->right = construct(nums, index + 1, hi);
        return root;
    }
};
```

### [105.从前序与中序遍历序列构造二叉树](https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)
* 画图找出规律
* **前序遍历**的**第一个数**一定是**根节点**
* **中序遍历根节点**的**左侧一定是左子树**、**右侧一定是右子树**
* 递归停止条件：上下标**越界**
```C++
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return rebuild(preorder, 0, preorder.size() - 1,
                        inorder, 0, inorder.size() - 1);
    }
    TreeNode* rebuild(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& inorder, int inStart, int inEnd)
    {
        if (preStart > preEnd || inStart > inEnd)
        {
            return nullptr;
        }
        int rootVal = preorder[preStart];
        int index = -1;
        for (int i = inStart; i <= inEnd; ++i)
        {
            if (inorder[i] == rootVal)
            {
                index = i;
                break;
            }
        }
        int leftSize = index - inStart;
        TreeNode* root = new TreeNode(rootVal);

        root->left = rebuild(preorder, preStart + 1, preStart + leftSize,
                            inorder, inStart, index-1);
        root->right = rebuild(preorder, preStart + leftSize + 1, preEnd,
                            inorder, index + 1, inEnd);       
        return root;
    }
};
```
### [106.从中序与后序遍历序列构造二叉树](https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)
* 同105题，不过是规律有所改变
```C++
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.empty() || postorder.empty()) return nullptr;
        return rebuild(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
    }
    TreeNode* rebuild(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int postStart, int postEnd)
    {
        if (inStart > inEnd || postStart > postEnd) return nullptr;

        int index;
        int value = postorder[postEnd];

        for (int i = inStart; i <= inEnd; ++i)
        {
            if (value == inorder[i])
            {
                index = i;
                break;
            }
        }
        int leftSize = index - inStart;
        TreeNode* root = new TreeNode(value);
        root->left = rebuild(inorder, inStart, index - 1, postorder, postStart, postStart + leftSize - 1);
        root->right = rebuild(inorder, index + 1, inEnd, postorder, postStart + leftSize, postEnd - 1);
        return root;
    }
};
```
### [652.寻找重复的子树](https://leetcode-cn.com/problems/find-duplicate-subtrees/)

* **后序遍历**，是否重复的前提是->对比自身和其他树，因此要知道自己**树的全貌**
* 先将树**序列化**，转换为易于比较的形式
* 用**map**记录序列出现的次数，当次数等于2时，保存该子树（序列）
```C++
class Solution {
public:
    vector<TreeNode*> res;
    unordered_map<string, int> map;
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        traverse(root);
        return res;
    }
    string traverse(TreeNode* root)
    {
        if (root == nullptr) return "#";
        string subTree = traverse(root->left) + "," + traverse(root->right) + "," + to_string(root->val);
        if (++map[subTree] == 2) res.push_back(root);// == 1->出现1次，不存入结果；== 2->出现2次，存入； > 2,避免重复，不再存入
        return subTree;
    }
};
```
---

### [230.二叉搜索树中第K小的元素](https://leetcode-cn.com/problems/kth-smallest-element-in-a-bst/)

1. **中序遍历**有序，生成递增数组，取第k个数即可
```C++
class Solution {
public:
    vector<int> res;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return res.at(k - 1);      
    }
    void inorder(TreeNode* root)
    {
        if (root == nullptr) return;

        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
};
```
2. 不用完全遍历，只需要在遍历过程中**找出即停止**
```C++
class Solution {
public:
    int res;
    int rank = 0;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return res;      
    }
    void inorder(TreeNode* root, int k)
    {
        if (root == nullptr) return;
        inorder(root->left, k);
        rank++;
        if (rank == k)
        {
            res = root->val;
            return;//立即退出
        }    
        inorder(root->right, k);
    }
};
```
---
### [538/1038.把二叉搜索树转换为累加树](https://leetcode-cn.com/problems/convert-bst-to-greater-tree/)
* **反向**中序遍历，累加求解
```C++
class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr) return nullptr;
        convertBST(root->right);//先遍历右侧
        sum += root->val;
        root->val = sum;
        convertBST(root->left);//再遍历左侧
        return root;
        
    }
};
```
---
### [700.二叉搜索树中的搜索](https://leetcode-cn.com/problems/search-in-a-binary-search-tree/)
```C++
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) return root;//注意次序
        return (root->val > val) ? searchBST(root->left, val) : searchBST(root->right, val);
    }
};
```
---
### [701.二叉搜索树中的插入操作](https://leetcode-cn.com/problems/insert-into-a-binary-search-tree/)

```C++
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr) return new TreeNode(val);
        if (root->val > val)
            root->left = insertIntoBST(root->left, val);
        if (root->val < val)
            root->right = insertIntoBST(root->right, val);
        return root;         
    }
};
```
---
### [450.删除二叉搜索树中的节点](https://leetcode-cn.com/problems/delete-node-in-a-bst/)
* 删除节点时有三种情况
  1. 节点下无子节点：直接删除即可；
  2. 节点下有单侧节点：令节点 = 单侧节点即可；
  3. 节点下有双侧节点：令节点 = 右节点中最小的节点/左节点中最大的节点
```C++
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;
        if (root->val == key)
        {
            if (root->left == nullptr) return root->right;
            if (root->right == nullptr) return root->left;
            //包含了1-2两种情况
            root->val = minNode(root->right)->val;//改变root的值
            root->right = deleteNode(root->right, root->val);//删除转移的节点
        }
        if (root->val > key)
            root->left = deleteNode(root->left, key);
        if (root->val < key)
            root->right = deleteNode(root->right, key);    
        return root;   
    }
    TreeNode* minNode(TreeNode* node)
    {
        while (node->left != nullptr)
        {
            node = node->left;
        }
        return node;
    }
};
```
---
### [222.完全二叉树的节点个数](https://leetcode-cn.com/problems/count-complete-tree-nodes/)
1. 通用解法：**直接求解**
```C++
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
```
2. 考虑完全二叉树性质：一定含有**满二叉树！**（2^n - 1个节点）
```C++
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;

        auto lnode = root;
        auto rnode = root;
        int l = 0, r = 0;
        while (lnode != nullptr)
        {
            lnode = lnode->left;
            l++;
        }
        while (rnode != nullptr)
        {
            rnode = rnode->right;
            r++;
        }
        if (l == r)
        {
            return pow(2, l) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
```
---
### [235.二叉搜索树的最近公共祖先](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/solution/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-26/)
1. 利用搜索树性质9直接解）
* 如果p、q都比当前节点小，那么pq公共祖先节点位于当前节点的左侧；
* 反之位于右侧
* 如果pq其中一个比节点值大，另一个小，则当前节点就是所求节点
```C++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while ((root->val - q->val) * (root->val - p->val) > 0)
        {
            if (p->val < root->val)
                root = root->left;
            else
                root = root->right;
        }
        return root;
    }
};
```
2. 递归（原理同方法1.）
```C++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ((q->val - root->val) * (p->val - root->val) <= 0)
            return root;
        return lowestCommonAncestor(p->val < root->val ? root->left : root->right, p, q);
    }
};
```
3. 同下[236题]
---
### [236.二叉树的最近公共祖先](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/)

1. [labuladong](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247485561&idx=1&sn=a394ba978283819da1eb34a256f6915b&chksm=9bd7f671aca07f6722f0bc1e946ca771a0a40fd8173cc1227a7e0eabfe4e2fcc57b9ba464547&scene=21#wechat_redirect)
```C++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return nullptr;
        if (p == root || q == root) return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left == nullptr && right == nullptr) return nullptr;
        if (left != nullptr && right != nullptr) return root;
        return (left == nullptr) ? right : left;    
    }
};
```
2. 存储**父节点**
    1. 从根节点开始遍历整棵二叉树，用哈希表记录每个节点的父节点指针。
    2. 从 p 节点开始不断往它的祖先移动，并用数据结构记录已经访问过的祖先节点。
    3. 同样，我们再从 q 节点开始不断往它的祖先移动，如果有祖先已经被访问过，即意味着这是 p 和 q 的深度最深的公共祖先，即 LCA 节点。

```C++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        findFather[root->val] = nullptr;
        dfs(root);
        while (p != nullptr)
        {
            isIn[p->val] = true;
            p = findFather[p->val];
        }

        while (q != nullptr)
        {
            if (isIn[q->val])
                return q;
            q = findFather[q->val];
        }
        return nullptr;
    }

    unordered_map<int, TreeNode*> findFather;
    unordered_map<int, bool> isIn;
    void dfs(TreeNode* root)
    {
        if (root->left != nullptr)
        {
            findFather[root->left->val] = root;
            dfs(root->left);
        }
        if (root->right != nullptr)
        {
            findFather[root->right->val] = root;
            dfs(root->right);
        }
    }
};
```
3. 递归
* (inleft && inright) || (incur && (inleft || inright))条件的理解：
  1. 一个在左一个在右
  2. 一个在当前节点，一个在左或右
```C++
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        findNode(root, p, q);
        return ans;
    }
    TreeNode* ans;
    bool findNode(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == nullptr) return false;

        bool inleft = findNode(root->left, p, q);
        bool inright = findNode(root->right, p, q);
        bool incur = (root->val == q->val)||(root->val == p->val);

        if ((inleft && inright) || (incur && (inleft || inright)))
        //if ((inleft && inright) || (incur))
            ans = root;
        
        return inleft || inright || incur;
    }
};
```
---
### [297.二叉树的序列化与反序列化](https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree/)
1. **前序遍历**
   * **strtok**函数分割字符串
   * string流 **istringstream**分割
```C++
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {  
        if (root == nullptr)
        {
            return "#,";
        }
        string s;
        s += to_string(root->val);
        s += ",";
        s += serialize(root->left);
        s += serialize(root->right);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> myvector = split(data, ','/*","*/);
        int index = 0;
        return deserializeHelper(myvector, index);
    }
    TreeNode* deserializeHelper(vector<string>& myvector, int& index)
    {
        const string& s = myvector[index];
        ++index;
        if (s == "#")
        {
            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(s));
        root->left = deserializeHelper(myvector, index);
        root->right = deserializeHelper(myvector, index);
        return root;
    }
   /* vector<string> split(string& data,  const char* delim)
    {
        vector<string> res;
        char* temp = strtok((char*)data.c_str(), delim);
        while (temp != nullptr)
        {
            res.push_back(temp);
            temp = strtok(NULL, delim);
        }
        return res;
    }*/
    vector<string> split(string& data,  char delim)
    {
        vector<string> res;
        istringstream iss(data);
        string temp;
        while (getline(iss, temp, delim))
        {
            res.push_back(temp);
        }
        return res;
    }
};
```
2. **后序遍历**
   * 同1分割
```C++
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr)
        {
            return "#,";
        }  
        string s;
        s += serialize(root->left);
        s += serialize(root->right);
        s += to_string(root->val);
        s += ",";
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> vec = split(data, ",");
        int index = vec.size() - 1;
        return deserializeHelper(vec, index);
    }
    TreeNode* deserializeHelper(vector<string>& vec, int& index)
    {
        const string& s = vec.at(index);
        --index;
        if (s == "#")
        {
            return nullptr;
        }
        TreeNode* root = new TreeNode(stoi(s));
        root->right = deserializeHelper(vec, index);
        root->left = deserializeHelper(vec, index);
        
        return root;
    }
};
```
3. 层序遍历
```C++
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr)
        {
            //return "";
            return "#,";
        }
        string s;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode* cur = q.front();
            q.pop();

            if (cur == nullptr)
            {
                s += "#,";
                continue;
            }
            else 
            {
                s += to_string(cur->val);
                s += ",";
            }

            q.push(cur->left);
            q.push(cur->right);
        }
        return s;  
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        //if (data.empty()) return nullptr;//对应serialize中的return "";
        auto myvector = split(data, ",");
        if (myvector[0] == "#") return nullptr;
        TreeNode* root = new TreeNode(stoi(myvector.at(0)));
        queue<TreeNode*> q;
        q.push(root);
        for(int i = 1; i < myvector.size();)
        {
            TreeNode* node = q.front();
            q.pop();
            string left = myvector.at(i++);//左节点就是下一个
            if (left == "#")
            {
                node->left = nullptr;
            }
            else
            {
                node->left = new TreeNode(stoi(left));
                q.push(node->left);
            }
            string right = myvector.at(i++);//在下一个就是右节点
            if (right == "#")
            {
                node->right = nullptr;
            }
            else
            {
                node->right = new TreeNode(stoi(right));
                q.push(node->right);
            }
        }
        return root;
    }
    vector<string> split(string& s, const char* delim)
    {
        vector<string> myvector;
        char* str = strtok((char*)s.c_str(), delim);
        while(str)
        {
            myvector.push_back(str);
            str = strtok(NULL, delim);
        }
        return myvector;
    }
};
```
---
### [341. 扁平化嵌套列表迭代器](https://leetcode-cn.com/problems/flatten-nested-list-iterator/)
* 这种解嵌套的问题，实际都可以通过类似`树遍历`的方式解决。
>* 首先要读懂本题需要实现的目标：
    1. 设计一个**迭代器**；
    2. 迭代器具有next()，即**指向下一数据**的功能；
    3. 在调用next()之前，首先**要确保下一个数据**存在，只有存在才能指向下一数据，因此还需要设计**hasnext()**;

>* 实现过程：
    1. 通过遍历的方式，把所有数据存在一个容器中(不局限于我用的vector)；
    2. 有了这样一个存放所有integer的容器，判断hasnext就很简单了，只需要判断下一数据是否还在容器中就行，我们借助**下标变量index**进行判断；
    3. 剩下的next实现也很简单，对下标index进行运算即可；

* 仔细理解题目之后，本题其实不难
```C++
class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for (auto item : nestedList)//直接用遍历的方式将全部integer保存在迭代器内部的res数组中，树遍历左右子树，而对应NestedInteger则是遍历所有的“子树”，相当于是遍历**N叉树**；C++11的新方法遍历，在这里更好理解
            traversing(item);
    }
    
    void traversing(NestedInteger item)
    {
        if (item.isInteger()) res.push_back(item.getInteger());//当子项是integer，直接放入res
        else//当父项中的子项不是一个integer时，接着往里层遍历；
        {
            auto subItem = item.getList();
            for (auto sSubItem : subItem)
                traversing(sSubItem);
        }
    }
    
    int next() {
        return res.at(index++);//指向下一数字；
    }
    
    bool hasNext() {
        return index < res.size();//只要在数组内，hasNext就一定为true；
    }
    
private:

    vector<int> res;//用于保存展开的的扁平化数组；
    int index = 0;//标记位置
};
```
---
### [96.不同的二叉搜索树](https://leetcode-cn.com/problems/unique-binary-search-trees/)
* **动态规划**
* 找规律
```C++
class Solution {
public:
    int numTrees(int n) {
        vector<int>G(n + 1, 0);
        G[0] = 1;
        G[1] = 1;
        for (int i = 2; i <= n; ++i)
            for (int j = 1; j <= i; ++j)
                G[i] += G[i - j] * G[j - 1];
        return G[n];
    }
};
```
---
### [437.路径总和III](https://leetcode-cn.com/problems/path-sum-iii/)
* 双递归
```C++
class Solution {
public:
    int res = 0;
    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr) return 0;
        calPath(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return res;
    }
    int calPath(TreeNode* root, int sum)
    {
        if (root == nullptr) return 0;
        sum -= root->val;
        if (sum == 0)
            res++;
        calPath(root->left, sum);
        calPath(root->right, sum);
        return res;
    }
};
```
### [337.打家劫舍III](https://leetcode-cn.com/problems/house-robber-iii/)
* **动态规划**
  1. **选择**当前节点，则**不能选择**当前节点的**相邻**节点｛左右节点｝
  2. **不选择**当前节点，则可以**选择/不选择**相邻节点
  3. 设计**state**这个结构来**保存选择/不选择两种状态**
```C++
class Solution {
public:
    struct state
    {
        int isSelected;
        int isNotSelected;
    };
    int rob(TreeNode* root) {
        auto res = dfs(root);
        return max(res.isSelected, res.isNotSelected);
    }
    state dfs(TreeNode* root)
    {
        if(root == nullptr)
            return {0, 0};
        auto L = dfs(root->left);
        auto R = dfs(root->right);

        int isSelected = root->val + L.isNotSelected + R.isNotSelected;
        int isNotSelected = max(L.isSelected, L.isNotSelected) + max(R.isSelected, R.isNotSelected);
        return {isSelected, isNotSelected};
    }
};
```
### [102.二叉树的层序遍历](https://leetcode-cn.com/problems/binary-tree-level-order-traversal/)
* 层序遍历的框架：利用**queue**、**size**
```C++
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};//此条件可以保证ans.push_back不放入空的数据、避免出错
        vector<vector<int>> res;
        queue<TreeNode*> myque;
        myque.push(root);
        while(!myque.empty())
        {
            int size = myque.size();
            vector<int> ans = {};
            for(int i = 0; i < size; ++i)
            {
                auto node = myque.front();
                myque.pop();
                ans.push_back(node->val);
                if(node->left != nullptr) myque.push(node->left);
                if(node->right != nullptr) myque.push(node->right);
            }
            res.push_back(ans);
        }
        return res;
    }
};
```
---
### [94.二叉树的中序遍历](https://leetcode-cn.com/problems/binary-tree-inorder-traversal/)
```C++
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
        return ans;
    }
};
```
---
### [124.二叉树中的最大路径和](https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/)

```C++
class Solution {
public:
    int maxSum = INT_MIN;
    int maxPathSum(TreeNode* root) {
        calculate(root);
        return maxSum;
    }
    int calculate(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int lVal = max(calculate(root->left), 0);//负数就不加入到路径中，相当于+0，即从除和为负的节点之外开始计算路径
        int rVal = max(calculate(root->right), 0);
        int sum = lVal + root->val + rVal;
        maxSum = max(sum, maxSum);
        return root->val + max(lVal, rVal);
    }
};
```
---


---
---
---
---
---
## 回溯

### [78.子集](https://leetcode-cn.com/problems/subsets/)

1. **回溯算法**，前序遍历

* 子集问题可以利用数学归纳思想，假设已知一个规模较小的问题的结果，思考如何推导出原问题的结果。也可以用回溯算法，要用 **start**参数排除已选择的数字。

```C++
class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> track;
        getSubsets(nums, 0, track);
        return res;
    }
    void getSubsets(vector<int>& nums, int start, vector<int>& track)
    {
        res.push_back(track);
        for(int i = start; i < nums.size(); ++i)
        {
            track.push_back(nums[i]);
            getSubsets(nums, i + 1, track);
            track.pop_back();
        }
    }
};
```

2. **数学归纳**

* 后一个数可以在此前数组成的集合基础上，**加上这个数**，组成新的集合

```C++
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if (nums.empty()) return {{}};
        int end = nums.back();
        nums.pop_back();
        vector<vector<int>> res = subsets(nums);
        const int size = res.size();
        for (int i = 0; i < size; ++i)
        {
            res.push_back(res[i]);
            res.back().push_back(end);
        }
        return res;
    }
};
```
---
### [90.子集2](https://leetcode-cn.com/problems/subsets-ii/)

* 子集2，与子集1相比，含有重复元素，关键在于**去重**
* 在**sort**排序的基础上，用**start**标记已经用过的元素

```C++
class Solution {
public:
    vector<int> track;
    vector<vector<int>> res;    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        dfs(nums, 0);
        return res;
    }
    void dfs(vector<int>& nums, int start)
    {
        res.push_back(track);
        for (int i = start; i < nums.size(); ++i)
        {
            if (i != start && nums[i] == nums[i - 1])
                continue;
            track.push_back(nums[i]);
            dfs(nums, i + 1);
            track.pop_back();
        }
    }
};
```
---
### [77.组合](https://leetcode-cn.com/problems/combinations/)

* 组合问题利用的是回溯思想，结果可以表示成树结构，我们只要套用回溯算法模板即可，关键点在于要用一个 **start** 排除已经选择过的数字。
```C++
class Solution {
public:
    vector<vector<int>> res;
    vector<int> track;
    vector<vector<int>> combine(int n, int k) {
        backtrack(n, k, 1);
        return res;
    }
    void backtrack(int n, int k, int start)
    {
        if (track.size() == k)
        {
            res.push_back(track);
            return;
        }
        for (int i = start; i <= n; ++i)
        {
            track.push_back(i);
            backtrack(n, k, i + 1);
            track.pop_back();
        }
    }
};
```
---
### [46.全排列](https://leetcode-cn.com/problems/permutations/)

* 排列问题是回溯思想，也可以表示成树结构套用算法模板，不同之处在于使用 **contains**方法排除已经选择的数字，前文有详细分析，这里主要是和组合问题作对比。**<used、 map>**
1. map
```C++
class Solution {
public:
    vector<int>track;
    vector<vector<int>>res;
    unordered_map<int, bool>map;
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums);
        return res;
    }
    void backtrack(vector<int>& nums)
    {
        if (track.size() == nums.size())
        {
            res.push_back(track);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (map[nums[i]])
                continue;
            map[nums[i]] = true;
            track.push_back(nums[i]);
            backtrack(nums);
            map[nums[i]] = false;
            track.pop_back();
        }
    }
};
```

2. 数组
```C++
class Solution {
public:
    vector<vector<int>> res;
    vector<int> track;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>used(nums.size(), false);
        dfs(nums, used);
        return res;
    }
    void dfs(vector<int>& nums, vector<bool>& used)
    {
        if (track.size() == nums.size())
        {
            res.push_back(track);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (used[i] == true)
                continue;
            used[i] = true;
            track.push_back(nums[i]);
            dfs(nums, used);
            used[i] = false;
            track.pop_back();
        }
    }
};
```
---
### [47.全排列2](https://leetcode-cn.com/problems/permutations-ii/)

* 相比*全排列*，多了重复的数，关键是**去重**
* 排序，**uesd**数组判断状态，**used[i - 1] == false/true**;
```C++
class Solution {
public:
    vector<vector<int>> res;
    vector<int> track;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size(), false);
        backtrack(nums, used);
        return res;
    }
    void backtrack(vector<int>& nums, vector<bool>& used)
    {
        if (track.size() == nums.size())
        {
            res.push_back(track);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (used[i] == true ||(i != 0 && nums[i] == nums[i - 1] && used[i - 1] == false))
                continue;
            
            used[i] = true;
            track.push_back(nums[i]);
            backtrack(nums, used);
            track.pop_back();
            used[i] = false;
        }
    }
};
```
---
### [51.N皇后](https://leetcode-cn.com/problems/n-queens/)

* 类似全排列，关键在于条件的判断
* **isOK函数**

```C++
class Solution {
public:
    vector<vector<string>>res;
    vector<vector<string>> solveNQueens(int n) {
        vector<string>track(n, string(n, '.'));
        backtrack(track, 0);
        return res;
    }

    void backtrack(vector<string>& track, int row)
    {
        if (row == track.size())
        {
            res.push_back(track);
            return;
        }
        for (int col = 0; col < track[row].size(); ++col)
        {
            if (!isOk(track, row, col))
                continue;
            track[row][col] = 'Q';
            backtrack(track, row + 1);
            track[row][col] = '.';
        }
    }

    bool isOk(vector<string>& track, int row, int col)
    {
        for (int i = 0; i < track.size(); ++i)
        {
            if (track[i][col] == 'Q')
                return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < track.size(); --i, ++j)
        {
            if (track[i][j] == 'Q')
                return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        {
            if (track[i][j] == 'Q')
                return false;  
        }
        return true;
    }
};

```
---
### [52.N皇后II](https://leetcode-cn.com/problems/n-queens-ii/)

```C++
class Solution {
public:
    int count = 0;
    int totalNQueens(int n) {
        vector<string> track(n, string(n, '.'));
        backtrack(track, 0);
        return count;
    }
    void backtrack(vector<string>& track, int row)
    {
        if (row == track.size())
        {
            count++;
            return;
        }
        for (int col = 0; col < track[row].size(); ++col)
        {
            if (!isValid(track, row,col))
                continue;
            
            track[row][col] = 'Q';
            backtrack(track, row + 1);
            track[row][col] = '.';
        }
    }
    bool isValid(vector<string>& track, int row, int col)
    {
        for (int i = 0; i < track.size(); ++i)
        {
            if (track[i][col] == 'Q')
                return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j <= track[i].size(); --i, ++j)
        {
            if (track[i][j] == 'Q')
                return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        {
            if (track[i][j] == 'Q')
                return false;
        }
        return true;
    }
};
```
---
### [36.有效的数独](https://leetcode-cn.com/problems/valid-sudoku/)

1. 暴力求解
* 直接遍历比较
* [(row/3)\*3 + i/3][(col/3)*3 + i%3]
```C++
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; ++row)
        {
            for (int col = 0; col < 9; ++col)
            {
                if (board[row][col] == '.') continue;
                if (isValid(board, row, col) == false)
                    return false;         
            }            
        }
        return true;
    }
    bool isValid(vector<vector<char>>& board, int row, int col)
    {
        for (int i = 0; i < 9; ++i)
        {
            if (board[i][col] == board[row][col] && i != row)
                return false;
            if (board[row][i] == board[row][col] && i != col)
                return false;
            if (board[(row/3)*3 + i/3][(col/3)*3 + i%3] == board[row][col] && (((row/3)*3 + i/3) != row || ((col/3)*3 + i%3) != col))
                return false;
        }
        return true;
    }
};
```
2. 做标记
* 取行、列、方格三个数组
* **j / 3 + (i / 3) * 3**
```C++
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector(10,0));
        vector<vector<int>> col(9, vector(10,0));
        vector<vector<int>> box(9, vector(10,0));
        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] == '.') continue;
                int num = board[i][j] - '0';
                if (row[i][num] || col[j][num] || box[j / 3 + (i / 3) * 3][num]) return false;
                row[i][num] = 1;
                col[j][num] = 1;
                box[j / 3 + (i / 3) * 3][num] = 1;
            }
        }
        return true;
    }
};
```
---
### [37.解数独](https://leetcode-cn.com/problems/sudoku-solver/)
> 思路

>```java
>boolean backtrack(char[][] board, int r, int c) {
>    int m = 9, n = 9;
>    if (c == n) {
>        // 穷举到最后一列的话就换到下一行重新开始。
>        return backtrack(board, r + 1, 0);
>    }
>    if (r == m) {
>        // 找到一个可行解，触发 base case
>        return true;
>    }
>    // 就是对每个位置进行穷举
>    for (int i = r; i < m; i++) {
>        for (int j = c; j < n; j++) {
>
>            if (board[i][j] != '.') {
>                // 如果有预设数字，不用我们穷举
>                return backtrack(board, i, j + 1);
>            } 
>
>            for (char ch = '1'; ch <= '9'; ch++) {
>                // 如果遇到不合法的数字，就跳过
>                if (!isValid(board, i, j, ch))
>                    continue;
>
>                board[i][j] = ch;
>                // 如果找到一个可行解，立即结束
>                if (backtrack(board, i, j + 1)) {
>                    return true;
>                }
>                board[i][j] = '.';
>            }
>            // 穷举完 1~9，依然没有找到可行解，此路不通
>            return false;
>        }
>    }
>    return false;
>}
>```

C++代码如下
```C++
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board, 0, 0);
    }
    bool backtrack (vector<vector<char>>& board, int row, int col)
    {
        int maxRow = 9;
        int maxCol = 9;
        if (col == maxCol)
        {
            return backtrack(board, row + 1, 0);
        }
        if (row == maxRow)
        {
            return true;
        }


        for (int i = row; i < maxRow; ++i)
        {
            for (int j = col; j < maxCol; ++j)
            {
                if (board[i][j] != '.')
                {
                   return backtrack(board, i, j + 1);
                }
                for (char ch = '1'; ch <= '9'; ++ch)
                {
                    if (isValid(board, i, j, ch) == false)
                        continue;                      
                    board[i][j] = ch;
                    if (backtrack(board, i, j + 1)) return true;
                    board[i][j] = '.';
                }
                return false;
            }
        }
        return false;
    }
    bool isValid(vector<vector<char>>& board, int row, int col, char ch)
    {
        for (int i = 0; i < 9; ++i)
        {
            if (board[i][col] == ch) return false;
            if (board[row][i] == ch) return false;
            if (board[(row/3)*3 + i/3][(col/3)*3 + i%3] == ch) return false;
        }
        return true;
    }
};
```
---
### [22.括号生成](https://leetcode-cn.com/problems/generate-parentheses/)
>思路
```C++
vector<string> generateParenthesis(int n) {
    if (n == 0) return {};
    // 记录所有合法的括号组合
    vector<string> res;
    // 回溯过程中的路径
    string track;
    // 可用的左括号和右括号数量初始化为 n
    backtrack(n, n, track, res);
    return res;
}

// 可用的左括号数量为 left 个，可用的右括号数量为 rgiht 个
void backtrack(int left, int right, 
            string& track, vector<string>& res) {
    // 若左括号剩下的多，说明不合法
    if (right < left) return;
    // 数量小于 0 肯定是不合法的
    if (left < 0 || right < 0) return;
    // 当所有括号都恰好用完时，得到一个合法的括号组合
    if (left == 0 && right == 0) {
        res.push_back(track);
        return;
    }

    // 尝试放一个左括号
    track.push_back('('); // 选择
    backtrack(left - 1, right, track, res);
    track.pop_back(); // 撤消选择

    // 尝试放一个右括号
    track.push_back(')'); // 选择
    backtrack(left, right - 1, track, res);
    track.pop_back(); ；// 撤消选择
}
```

C++完整代码如下
```C++
class Solution {
public:
    vector<string> res;
    string track;
    vector<string> generateParenthesis(int n) {
        backtrack(n, n);
        return res;
    }
    void backtrack(int leftValid, int rightValid)
    {
        if (leftValid > rightValid) return;
        if (leftValid < 0 || rightValid < 0) return;
        if (leftValid == 0 && rightValid == 0)
        {
            res.push_back(track);
            return;
        }
        ////////////////////////////////////////////////
        string temp = "()";
        for (auto s : temp)
        {
            if (s == '(')
            {
                track.push_back(s);
                backtrack(leftValid - 1, rightValid);
            }
            if (s == ')')
            {
                track.push_back(s);
                backtrack(leftValid, rightValid - 1);  
            }
            track.pop_back();
        }
        ///////////////////////////////////////////////
    }
};
```
```C++
///////

///////之间的部分代码可用下面代替，实质是一样的：
```
```C++
    track.push_back('('); 
    backtrack(leftValid - 1, rightValid);
    track.pop_back(); 

    track.push_back(')'); 
    backtrack(leftValid, right - 1);
    track.pop_back(); 
```
---
### [39.组合总和](https://leetcode-cn.com/problems/combination-sum/)
* 组合问题设置**start**
```C++
class Solution {
public:
    vector<vector<int>> res;
    vector<int> track;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates, target, 0, 0);
        return res;
    }

    void backtrack (vector<int>& candidates, int target, int sum, int start)
    {
        if (sum > target)
        {
            return;
        }
        
        if (sum == target)
        {
            res.push_back(track);
            return;
        }

        for (int i = start; i < candidates.size(); ++i)
        {

            track.push_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates, target, sum, i);//i表示可以选取自己（）
            track.pop_back();
            sum -= candidates[i];
        }
    }
};
```
>TIP

>i表示可以取自己，以[2,3,6,7]->7为例

>i = 2 时，下一次可以取 2367

>i =3时，下一次可以取 367

>以此类推
---
### [17.电话号码的字母组合](https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number/)
* 本身不涉及**重复**等问题，简单的**回溯**就可以解决了
```C++
class Solution {
public:
    unordered_map<char, string> map{
        {'2', "abc"}, 
        {'3', "def"}, 
        {'4', "ghi"}, 
        {'5', "jkl"}, 
        {'6', "mno"}, 
        {'7', "pqrs"}, 
        {'8', "tuv"}, 
        {'9', "wxyz"}
    };//建立数字和字母的对应关系
    vector<string> res;//保存结果，个人刷题习惯定义全局变量，函数更简洁易于理解
    string track;//保存一次遍历的结果
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        dfs (digits, 0);
        return res;
    }
    void dfs (string& digits, int start)
    {
        if (track.size() == digits.size())
        {
            res.push_back(track);
            return;
        }

        for (int i = start; i < digits.size(); ++i)
        {
            for (auto ch : map[digits[i]])
            {
                track.push_back(ch);
                dfs(digits, i + 1);
                track.pop_back(); 
            }     
        }
    }
};
```
---
### [79.单词搜索](https://leetcode-cn.com/problems/word-search/)

* 把握**回溯**和**重复**的关键
```C++
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int b_heigth = board.size();
        int b_length = board[0].size();
        vector<vector<bool>> used(b_heigth, vector<bool>(b_length, false));//建立一个和board尺寸一样的used数组，用于判断每个位置是否被使用过
        for (int row = 0; row < b_heigth; row++)
        {
            for (int col = 0; col < b_length; col++)//遍历board中的每个位置
            {
                if (dfs(board, word, used, row, col, 0))//遍历每个位置时，从word[0],也就是第一个字符开始对比
                    return true;//由于回溯，只要dfs(.......,0)true，说明 word[1]、word[2]...到最后都是true
            }
        }
        return false; 
    }

    bool dfs (vector<vector<char>>& board, string& word, vector<vector<bool>>& used, int row, int col, int index)
    {
        if (board[row][col] != word[index]) return false;//单个字符不匹配，单词肯定不匹配，直接返回false
        if (index == word.size() - 1) return true;//所有的单个字符都匹配的**前提**下，下标index已至word最后一位（说明word检查完了），返回结果true
// * ps：本人最初就是把上面两条语句写反了，导致出错.||

        vector<pair<int, int>> side{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};//上下左右四个方向
        used[row][col] = true;//占据board的row，col位置，则此处标记为**“被使用”**，即 true

        for (auto direction : side)
        {
            int curRow = row + direction.first;
            int curCol = col + direction.second;

            if ((curRow >= 0 && curRow < board.size() && curCol >= 0 && curCol < board[0].size()) && (used[curRow][curCol] == false))// 这里有可以理解为两个主要条件，一是col和row不能超出范围去寻找；二是要确保[row][col]的下一位置[curRow][curCol]是“未使用”的，才能确保不走“回头路”

            // used[][]数组要后判断，避免溢出错误！！！
            {
                if (dfs(board, word, used, curRow, curCol, index + 1))
                {
                    return true;
                }
            }
            
        }
        used[row][col] = false;//回溯完毕，退出该位置，标记为“未使用”，即false.

        return false;
    }
};
```
---








