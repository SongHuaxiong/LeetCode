
# LEETCODE

## 链表

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

### [105. 从前序与中序遍历序列构造二叉树](https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)




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








