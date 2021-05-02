
# LEETCODE OF SHX
<!-- TOC -->

- [LEETCODE OF SHX](#leetcode-of-shx)
    - [排序算法](#排序算法)
        - [冒泡排序](#冒泡排序)
        - [选择排序](#选择排序)
        - [插入排序](#插入排序)
        - [归并排序](#归并排序)
        - [快速排序](#快速排序)
        - [test main](#test-main)
        - [堆排序](#堆排序)
        - [快排非递归实现](#快排非递归实现)
        - [归并非递归实现](#归并非递归实现)
        - [用栈模拟递归](#用栈模拟递归)
    - [链表](#链表)
        - [[206.反转链表](https://leetcode-cn.com/problems/reverse-linked-list/)](#206反转链表httpsleetcode-cncomproblemsreverse-linked-list)
        - [[25.K个一组翻转链表](https://leetcode-cn.com/problems/reverse-nodes-in-k-group/)](#25k个一组翻转链表httpsleetcode-cncomproblemsreverse-nodes-in-k-group)
        - [[234.回文链表](https://leetcode-cn.com/problems/palindrome-linked-list/)](#234回文链表httpsleetcode-cncomproblemspalindrome-linked-list)
        - [[21.合并两个有序链表](https://leetcode-cn.com/problems/merge-two-sorted-lists/)](#21合并两个有序链表httpsleetcode-cncomproblemsmerge-two-sorted-lists)
        - [[141.环形链表](https://leetcode-cn.com/problems/linked-list-cycle/)](#141环形链表httpsleetcode-cncomproblemslinked-list-cycle)
        - [[160.相交链表](https://leetcode-cn.com/problems/intersection-of-two-linked-lists/)](#160相交链表httpsleetcode-cncomproblemsintersection-of-two-linked-lists)
        - [[19.删除链表的倒数第N个节点](https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/)](#19删除链表的倒数第n个节点httpsleetcode-cncomproblemsremove-nth-node-from-end-of-list)
        - [[142.环形链表II](https://leetcode-cn.com/problems/linked-list-cycle-ii/)](#142环形链表iihttpsleetcode-cncomproblemslinked-list-cycle-ii)
        - [[23.合并K个升序链表](https://leetcode-cn.com/problems/merge-k-sorted-lists/)](#23合并k个升序链表httpsleetcode-cncomproblemsmerge-k-sorted-lists)
    - [树](#树)
        - [144/145/94二叉树的前中后遍历](#14414594二叉树的前中后遍历)
        - [[101.对称二叉树](https://leetcode-cn.com/problems/symmetric-tree/)](#101对称二叉树httpsleetcode-cncomproblemssymmetric-tree)
        - [[104.二叉树的最大深度](https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/)](#104二叉树的最大深度httpsleetcode-cncomproblemsmaximum-depth-of-binary-tree)
        - [[226.翻转二叉树](https://leetcode-cn.com/problems/invert-binary-tree/)](#226翻转二叉树httpsleetcode-cncomproblemsinvert-binary-tree)
        - [[543.二叉树的直径](https://leetcode-cn.com/problems/diameter-of-binary-tree/)](#543二叉树的直径httpsleetcode-cncomproblemsdiameter-of-binary-tree)
        - [[617.合并二叉树](https://leetcode-cn.com/problems/merge-two-binary-trees/)](#617合并二叉树httpsleetcode-cncomproblemsmerge-two-binary-trees)
        - [[98.验证二叉搜索树](https://leetcode-cn.com/problems/validate-binary-search-tree/)](#98验证二叉搜索树httpsleetcode-cncomproblemsvalidate-binary-search-tree)
        - [[114.二叉树展开为链表](https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/)](#114二叉树展开为链表httpsleetcode-cncomproblemsflatten-binary-tree-to-linked-list)
        - [[116.填充每个节点的下一个右侧节点指针](https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node/)](#116填充每个节点的下一个右侧节点指针httpsleetcode-cncomproblemspopulating-next-right-pointers-in-each-node)
        - [[654.最大二叉树](https://leetcode-cn.com/problems/maximum-binary-tree/)](#654最大二叉树httpsleetcode-cncomproblemsmaximum-binary-tree)
        - [[105.从前序与中序遍历序列构造二叉树](https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)](#105从前序与中序遍历序列构造二叉树httpsleetcode-cncomproblemsconstruct-binary-tree-from-preorder-and-inorder-traversal)
        - [[106.从中序与后序遍历序列构造二叉树](https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)](#106从中序与后序遍历序列构造二叉树httpsleetcode-cncomproblemsconstruct-binary-tree-from-inorder-and-postorder-traversal)
        - [[652.寻找重复的子树](https://leetcode-cn.com/problems/find-duplicate-subtrees/)](#652寻找重复的子树httpsleetcode-cncomproblemsfind-duplicate-subtrees)
        - [[230.二叉搜索树中第K小的元素](https://leetcode-cn.com/problems/kth-smallest-element-in-a-bst/)](#230二叉搜索树中第k小的元素httpsleetcode-cncomproblemskth-smallest-element-in-a-bst)
        - [[538/1038.把二叉搜索树转换为累加树](https://leetcode-cn.com/problems/convert-bst-to-greater-tree/)](#5381038把二叉搜索树转换为累加树httpsleetcode-cncomproblemsconvert-bst-to-greater-tree)
        - [[700.二叉搜索树中的搜索](https://leetcode-cn.com/problems/search-in-a-binary-search-tree/)](#700二叉搜索树中的搜索httpsleetcode-cncomproblemssearch-in-a-binary-search-tree)
        - [[701.二叉搜索树中的插入操作](https://leetcode-cn.com/problems/insert-into-a-binary-search-tree/)](#701二叉搜索树中的插入操作httpsleetcode-cncomproblemsinsert-into-a-binary-search-tree)
        - [[450.删除二叉搜索树中的节点](https://leetcode-cn.com/problems/delete-node-in-a-bst/)](#450删除二叉搜索树中的节点httpsleetcode-cncomproblemsdelete-node-in-a-bst)
        - [[222.完全二叉树的节点个数](https://leetcode-cn.com/problems/count-complete-tree-nodes/)](#222完全二叉树的节点个数httpsleetcode-cncomproblemscount-complete-tree-nodes)
        - [[235.二叉搜索树的最近公共祖先](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/solution/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-26/)](#235二叉搜索树的最近公共祖先httpsleetcode-cncomproblemslowest-common-ancestor-of-a-binary-search-treesolutioner-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-26)
        - [[236.二叉树的最近公共祖先](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/)](#236二叉树的最近公共祖先httpsleetcode-cncomproblemslowest-common-ancestor-of-a-binary-tree)
        - [[297.二叉树的序列化与反序列化](https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree/)](#297二叉树的序列化与反序列化httpsleetcode-cncomproblemsserialize-and-deserialize-binary-tree)
        - [[341. 扁平化嵌套列表迭代器](https://leetcode-cn.com/problems/flatten-nested-list-iterator/)](#341-扁平化嵌套列表迭代器httpsleetcode-cncomproblemsflatten-nested-list-iterator)
        - [[96.不同的二叉搜索树](https://leetcode-cn.com/problems/unique-binary-search-trees/)](#96不同的二叉搜索树httpsleetcode-cncomproblemsunique-binary-search-trees)
        - [[437.路径总和III](https://leetcode-cn.com/problems/path-sum-iii/)](#437路径总和iiihttpsleetcode-cncomproblemspath-sum-iii)
        - [[337.打家劫舍III](https://leetcode-cn.com/problems/house-robber-iii/)](#337打家劫舍iiihttpsleetcode-cncomproblemshouse-robber-iii)
        - [[102.二叉树的层序遍历](https://leetcode-cn.com/problems/binary-tree-level-order-traversal/)](#102二叉树的层序遍历httpsleetcode-cncomproblemsbinary-tree-level-order-traversal)
        - [[94.二叉树的中序遍历](https://leetcode-cn.com/problems/binary-tree-inorder-traversal/)](#94二叉树的中序遍历httpsleetcode-cncomproblemsbinary-tree-inorder-traversal)
        - [[124.二叉树中的最大路径和](https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/)](#124二叉树中的最大路径和httpsleetcode-cncomproblemsbinary-tree-maximum-path-sum)
        - [[687.最长同值路径](https://leetcode-cn.com/problems/longest-univalue-path/)](#687最长同值路径httpsleetcode-cncomproblemslongest-univalue-path)
        - [[257.二叉树的所有路径](https://leetcode-cn.com/problems/binary-tree-paths/)](#257二叉树的所有路径httpsleetcode-cncomproblemsbinary-tree-paths)
    - [数据结构设计](#数据结构设计)
        - [[130.被围绕的区域](https://leetcode-cn.com/problems/surrounded-regions/)](#130被围绕的区域httpsleetcode-cncomproblemssurrounded-regions)
        - [[990.等式方程的可满足性](https://leetcode-cn.com/problems/satisfiability-of-equality-equations/)](#990等式方程的可满足性httpsleetcode-cncomproblemssatisfiability-of-equality-equations)
        - [[146.LRU缓存机制](https://leetcode-cn.com/problems/lru-cache/)](#146lru缓存机制httpsleetcode-cncomproblemslru-cache)
        - [[146.LFU缓存机制](https://leetcode-cn.com/problems/lfu-cache/)](#146lfu缓存机制httpsleetcode-cncomproblemslfu-cache)
        - [[295.数据流的中位数](https://leetcode-cn.com/problems/find-median-from-data-stream/)](#295数据流的中位数httpsleetcode-cncomproblemsfind-median-from-data-stream)
        - [[355.设计推特](https://leetcode-cn.com/problems/design-twitter/)](#355设计推特httpsleetcode-cncomproblemsdesign-twitter)
        - [[496.下一个更大元素I](https://leetcode-cn.com/problems/next-greater-element-i/)](#496下一个更大元素ihttpsleetcode-cncomproblemsnext-greater-element-i)
        - [[503.下一个更大元素II](https://leetcode-cn.com/problems/next-greater-element-ii/)](#503下一个更大元素iihttpsleetcode-cncomproblemsnext-greater-element-ii)
        - [[739.每日温度](https://leetcode-cn.com/problems/daily-temperatures/submissions/)](#739每日温度httpsleetcode-cncomproblemsdaily-temperaturessubmissions)
        - [[42.接雨水](https://leetcode-cn.com/problems/trapping-rain-water/solution/jie-yu-shui-by-leetcode/)](#42接雨水httpsleetcode-cncomproblemstrapping-rain-watersolutionjie-yu-shui-by-leetcode)
        - [[84.柱状图中最大的矩形](https://leetcode-cn.com/problems/largest-rectangle-in-histogram/)](#84柱状图中最大的矩形httpsleetcode-cncomproblemslargest-rectangle-in-histogram)
        - [[581.最短无序连续子数组](https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/submissions/)](#581最短无序连续子数组httpsleetcode-cncomproblemsshortest-unsorted-continuous-subarraysubmissions)
        - [[901.股票价格跨度](https://leetcode-cn.com/problems/online-stock-span/submissions/)](#901股票价格跨度httpsleetcode-cncomproblemsonline-stock-spansubmissions)
        - [[402.移掉K位数字](https://leetcode-cn.com/problems/remove-k-digits/)](#402移掉k位数字httpsleetcode-cncomproblemsremove-k-digits)
        - [[316.去除重复字母](https://leetcode-cn.com/problems/remove-duplicate-letters/solution/qu-chu-zhong-fu-zi-mu-by-leetcode-soluti-vuso/)](#316去除重复字母httpsleetcode-cncomproblemsremove-duplicate-letterssolutionqu-chu-zhong-fu-zi-mu-by-leetcode-soluti-vuso)
        - [[1081.不同字符的最小子序列](https://leetcode-cn.com/problems/smallest-subsequence-of-distinct-characters/)](#1081不同字符的最小子序列httpsleetcode-cncomproblemssmallest-subsequence-of-distinct-characters)
        - [[321.拼接最大数](https://leetcode-cn.com/problems/create-maximum-number/solution/c-dan-diao-zhan-pin-jie-tiao-li-qing-xi-nrnu1/)](#321拼接最大数httpsleetcode-cncomproblemscreate-maximum-numbersolutionc-dan-diao-zhan-pin-jie-tiao-li-qing-xi-nrnu1)
        - [[239.滑动窗口最大值](https://leetcode-cn.com/problems/sliding-window-maximum/)](#239滑动窗口最大值httpsleetcode-cncomproblemssliding-window-maximum)
        - [[剑指Offer09.用两个栈实现队列](https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/)](#剑指offer09用两个栈实现队列httpsleetcode-cncomproblemsyong-liang-ge-zhan-shi-xian-dui-lie-lcof)
        - [[706.设计哈希映射](https://leetcode-cn.com/problems/design-hashmap/)](#706设计哈希映射httpsleetcode-cncomproblemsdesign-hashmap)
    - [数组](#数组)
        - [[875.爱吃香蕉的珂珂](https://leetcode-cn.com/problems/koko-eating-bananas/)](#875爱吃香蕉的珂珂httpsleetcode-cncomproblemskoko-eating-bananas)
        - [[1011.在D天内送达包裹的能力](https://leetcode-cn.com/problems/capacity-to-ship-packages-within-d-days/)](#1011在d天内送达包裹的能力httpsleetcode-cncomproblemscapacity-to-ship-packages-within-d-days)
        - [[76.最小覆盖子串](https://leetcode-cn.com/problems/minimum-window-substring/submissions/)](#76最小覆盖子串httpsleetcode-cncomproblemsminimum-window-substringsubmissions)
        - [[567.字符串的排列](https://leetcode-cn.com/problems/permutation-in-string/)](#567字符串的排列httpsleetcode-cncomproblemspermutation-in-string)
        - [[438.找到字符串中所有字母异位词](https://leetcode-cn.com/problems/find-all-anagrams-in-a-string/)](#438找到字符串中所有字母异位词httpsleetcode-cncomproblemsfind-all-anagrams-in-a-string)
        - [[3.无重复字符的最长子串](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/)](#3无重复字符的最长子串httpsleetcode-cncomproblemslongest-substring-without-repeating-characters)
        - [[30.串联所有单词的子串](https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/)](#30串联所有单词的子串httpsleetcode-cncomproblemssubstring-with-concatenation-of-all-words)
        - [[209.长度最小的子数组](https://leetcode-cn.com/problems/minimum-size-subarray-sum/)](#209长度最小的子数组httpsleetcode-cncomproblemsminimum-size-subarray-sum)
        - [[632.最小区间](https://leetcode-cn.com/problems/smallest-range-covering-elements-from-k-lists/)](#632最小区间httpsleetcode-cncomproblemssmallest-range-covering-elements-from-k-lists)
        - [[380.常数时间插入、删除和获取随机元素](https://leetcode-cn.com/problems/insert-delete-getrandom-o1/)](#380常数时间插入删除和获取随机元素httpsleetcode-cncomproblemsinsert-delete-getrandom-o1)
        - [[710.黑名单中的随机数](https://leetcode-cn.com/problems/random-pick-with-blacklist/)](#710黑名单中的随机数httpsleetcode-cncomproblemsrandom-pick-with-blacklist)
        - [[26.删除排序数组中的重复项](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions/)](#26删除排序数组中的重复项httpsleetcode-cncomproblemsremove-duplicates-from-sorted-arraysubmissions)
        - [[83.删除排序链表中的重复元素]()](#83删除排序链表中的重复元素)
        - [[27.移除元素](https://leetcode-cn.com/problems/remove-element/)](#27移除元素httpsleetcode-cncomproblemsremove-element)
        - [[283.移动零](https://leetcode-cn.com/problems/move-zeroes/)](#283移动零httpsleetcode-cncomproblemsmove-zeroes)
        - [[1.两数之和](https://leetcode-cn.com/problems/two-sum/)](#1两数之和httpsleetcode-cncomproblemstwo-sum)
        - [[167.两数之和II-输入有序数组](https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/)](#167两数之和ii-输入有序数组httpsleetcode-cncomproblemstwo-sum-ii-input-array-is-sorted)
        - [[653.两数之和IV-输入BST](https://leetcode-cn.com/problems/two-sum-iv-input-is-a-bst/)](#653两数之和iv-输入bsthttpsleetcode-cncomproblemstwo-sum-iv-input-is-a-bst)
        - [[15.三数之和](https://leetcode-cn.com/problems/3sum/submissions/)](#15三数之和httpsleetcode-cncomproblems3sumsubmissions)
        - [[18.四数之和](https://leetcode-cn.com/problems/4sum/)](#18四数之和httpsleetcode-cncomproblems4sum)
        - [[2.两数相加](https://leetcode-cn.com/problems/add-two-numbers/)](#2两数相加httpsleetcode-cncomproblemsadd-two-numbers)
        - [[445.两数相加II](https://leetcode-cn.com/problems/add-two-numbers-ii/)](#445两数相加iihttpsleetcode-cncomproblemsadd-two-numbers-ii)
    - [回溯](#回溯)
        - [[78.子集](https://leetcode-cn.com/problems/subsets/)](#78子集httpsleetcode-cncomproblemssubsets)
        - [[90.子集2](https://leetcode-cn.com/problems/subsets-ii/)](#90子集2httpsleetcode-cncomproblemssubsets-ii)
        - [[77.组合](https://leetcode-cn.com/problems/combinations/)](#77组合httpsleetcode-cncomproblemscombinations)
        - [[46.全排列](https://leetcode-cn.com/problems/permutations/)](#46全排列httpsleetcode-cncomproblemspermutations)
        - [[47.全排列2](https://leetcode-cn.com/problems/permutations-ii/)](#47全排列2httpsleetcode-cncomproblemspermutations-ii)
        - [[51.N皇后](https://leetcode-cn.com/problems/n-queens/)](#51n皇后httpsleetcode-cncomproblemsn-queens)
        - [[52.N皇后II](https://leetcode-cn.com/problems/n-queens-ii/)](#52n皇后iihttpsleetcode-cncomproblemsn-queens-ii)
        - [[36.有效的数独](https://leetcode-cn.com/problems/valid-sudoku/)](#36有效的数独httpsleetcode-cncomproblemsvalid-sudoku)
        - [[37.解数独](https://leetcode-cn.com/problems/sudoku-solver/)](#37解数独httpsleetcode-cncomproblemssudoku-solver)
        - [[22.括号生成](https://leetcode-cn.com/problems/generate-parentheses/)](#22括号生成httpsleetcode-cncomproblemsgenerate-parentheses)
        - [[39.组合总和](https://leetcode-cn.com/problems/combination-sum/)](#39组合总和httpsleetcode-cncomproblemscombination-sum)
        - [[17.电话号码的字母组合](https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number/)](#17电话号码的字母组合httpsleetcode-cncomproblemsletter-combinations-of-a-phone-number)
        - [[79.单词搜索](https://leetcode-cn.com/problems/word-search/)](#79单词搜索httpsleetcode-cncomproblemsword-search)
    - [动态规划](#动态规划)
        - [[322.零钱兑换](https://leetcode-cn.com/problems/coin-change/)](#322零钱兑换httpsleetcode-cncomproblemscoin-change)
        - [[1143.最长公共子序列](https://leetcode-cn.com/problems/longest-common-subsequence/)](#1143最长公共子序列httpsleetcode-cncomproblemslongest-common-subsequence)
        - [[583.两个字符串的删除操作](https://leetcode-cn.com/problems/delete-operation-for-two-strings/)](#583两个字符串的删除操作httpsleetcode-cncomproblemsdelete-operation-for-two-strings)
        - [[712.两个字符串的最小ASCII删除和](https://leetcode-cn.com/problems/minimum-ascii-delete-sum-for-two-strings/)](#712两个字符串的最小ascii删除和httpsleetcode-cncomproblemsminimum-ascii-delete-sum-for-two-strings)
        - [[72.编辑距离](https://leetcode-cn.com/problems/edit-distance/)](#72编辑距离httpsleetcode-cncomproblemsedit-distance)
        - [[300.最长递增子序列](https://leetcode-cn.com/problems/longest-increasing-subsequence/)](#300最长递增子序列httpsleetcode-cncomproblemslongest-increasing-subsequence)
        - [[354.俄罗斯套娃信封问题](https://leetcode-cn.com/problems/russian-doll-envelopes/)](#354俄罗斯套娃信封问题httpsleetcode-cncomproblemsrussian-doll-envelopes)
        - [[53.最大子序和](https://leetcode-cn.com/problems/maximum-subarray/)](#53最大子序和httpsleetcode-cncomproblemsmaximum-subarray)
        - [[516.最长回文子序列](https://leetcode-cn.com/problems/longest-palindromic-subsequence/)](#516最长回文子序列httpsleetcode-cncomproblemslongest-palindromic-subsequence)
        - [[416.分割等和子集](https://leetcode-cn.com/problems/partition-equal-subset-sum/)](#416分割等和子集httpsleetcode-cncomproblemspartition-equal-subset-sum)
        - [[474.一和零](https://leetcode-cn.com/problems/ones-and-zeroes/)](#474一和零httpsleetcode-cncomproblemsones-and-zeroes)
        - [[494.目标和](https://leetcode-cn.com/problems/target-sum/)](#494目标和httpsleetcode-cncomproblemstarget-sum)
        - [[879.盈利计划](https://leetcode-cn.com/problems/profitable-schemes/)](#879盈利计划httpsleetcode-cncomproblemsprofitable-schemes)
        - [[518.零钱兑换II](https://leetcode-cn.com/problems/coin-change-2/)](#518零钱兑换iihttpsleetcode-cncomproblemscoin-change-2)
        - [[1449.数位成本和为目标值的最大数字](https://leetcode-cn.com/problems/form-largest-integer-with-digits-that-add-up-to-target/)](#1449数位成本和为目标值的最大数字httpsleetcode-cncomproblemsform-largest-integer-with-digits-that-add-up-to-target)
        - [[435.无重叠区间](https://leetcode-cn.com/problems/non-overlapping-intervals/)](#435无重叠区间httpsleetcode-cncomproblemsnon-overlapping-intervals)
        - [[452.用最少数量的箭引爆气球](https://leetcode-cn.com/problems/minimum-number-of-arrows-to-burst-balloons/)](#452用最少数量的箭引爆气球httpsleetcode-cncomproblemsminimum-number-of-arrows-to-burst-balloons)
        - [[56.合并区间](https://leetcode-cn.com/problems/merge-intervals/)](#56合并区间httpsleetcode-cncomproblemsmerge-intervals)
        - [[57.插入区间](https://leetcode-cn.com/problems/insert-interval/)](#57插入区间httpsleetcode-cncomproblemsinsert-interval)
        - [[986.区间列表的交集](https://leetcode-cn.com/problems/interval-list-intersections/)](#986区间列表的交集httpsleetcode-cncomproblemsinterval-list-intersections)
        - [[763.划分字母区间](https://leetcode-cn.com/problems/partition-labels/)](#763划分字母区间httpsleetcode-cncomproblemspartition-labels)
        - [[55.跳跃游戏](https://leetcode-cn.com/problems/jump-game/)](#55跳跃游戏httpsleetcode-cncomproblemsjump-game)
        - [[45.跳跃游戏II](https://leetcode-cn.com/problems/jump-game-ii/)](#45跳跃游戏iihttpsleetcode-cncomproblemsjump-game-ii)
        - [[10.正则表达式匹配](https://leetcode-cn.com/problems/regular-expression-matching/)](#10正则表达式匹配httpsleetcode-cncomproblemsregular-expression-matching)
        - [[887.鸡蛋掉落](https://leetcode-cn.com/problems/super-egg-drop/)](#887鸡蛋掉落httpsleetcode-cncomproblemssuper-egg-drop)
        - [[312. 戳气球](https://leetcode-cn.com/problems/burst-balloons/submissions/)](#312-戳气球httpsleetcode-cncomproblemsburst-balloonssubmissions)
        - [[292.Nim游戏](https://leetcode-cn.com/problems/nim-game/)](#292nim游戏httpsleetcode-cncomproblemsnim-game)
        - [[486.预测赢家](https://leetcode-cn.com/problems/predict-the-winner/)](#486预测赢家httpsleetcode-cncomproblemspredict-the-winner)
        - [[121.买卖股票的最佳时机](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/)](#121买卖股票的最佳时机httpsleetcode-cncomproblemsbest-time-to-buy-and-sell-stock)
        - [[122.买卖股票的最佳时机II](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/)](#122买卖股票的最佳时机iihttpsleetcode-cncomproblemsbest-time-to-buy-and-sell-stock-ii)
        - [[123.买卖股票的最佳时机III](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iii/)](#123买卖股票的最佳时机iiihttpsleetcode-cncomproblemsbest-time-to-buy-and-sell-stock-iii)
        - [[188.买卖股票的最佳时机IV](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iv/)](#188买卖股票的最佳时机ivhttpsleetcode-cncomproblemsbest-time-to-buy-and-sell-stock-iv)
        - [[309.最佳买卖股票时机含冷冻期](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)](#309最佳买卖股票时机含冷冻期httpsleetcode-cncomproblemsbest-time-to-buy-and-sell-stock-with-cooldown)
        - [[714.买卖股票的最佳时机含手续费](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/)](#714买卖股票的最佳时机含手续费httpsleetcode-cncomproblemsbest-time-to-buy-and-sell-stock-with-transaction-fee)
        - [[198.打家劫舍](https://leetcode-cn.com/problems/house-robber/)](#198打家劫舍httpsleetcode-cncomproblemshouse-robber)
        - [[213.打家劫舍II](https://leetcode-cn.com/problems/house-robber-ii/)](#213打家劫舍iihttpsleetcode-cncomproblemshouse-robber-ii)
        - [[337.打家劫舍III](https://leetcode-cn.com/problems/house-robber-iii/)](#337打家劫舍iiihttpsleetcode-cncomproblemshouse-robber-iii-1)
        - [[152.乘积最大子数组](https://leetcode-cn.com/problems/maximum-product-subarray/)](#152乘积最大子数组httpsleetcode-cncomproblemsmaximum-product-subarray)
        - [[面试题17.16.按摩师](https://leetcode-cn.com/problems/the-masseuse-lcci/submissions/)](#面试题1716按摩师httpsleetcode-cncomproblemsthe-masseuse-lccisubmissions)
    - [BFS & 图问题](#bfs--图问题)
        - [[1162.地图分析](https://leetcode-cn.com/problems/as-far-from-land-as-possible/)](#1162地图分析httpsleetcode-cncomproblemsas-far-from-land-as-possible)
        - [[279.完全平方数](https://leetcode-cn.com/problems/perfect-squares/)](#279完全平方数httpsleetcode-cncomproblemsperfect-squares)
        - [[111.二叉树的最小深度](https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/)](#111二叉树的最小深度httpsleetcode-cncomproblemsminimum-depth-of-binary-tree)
        - [[752.打开转盘锁](https://leetcode-cn.com/problems/open-the-lock/)](#752打开转盘锁httpsleetcode-cncomproblemsopen-the-lock)
        - [[773.滑动谜题](https://leetcode-cn.com/problems/sliding-puzzle/)](#773滑动谜题httpsleetcode-cncomproblemssliding-puzzle)
        - [[剑指 Offer 13.机器人的运动范围](https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/)](#剑指-offer-13机器人的运动范围httpsleetcode-cncomproblemsji-qi-ren-de-yun-dong-fan-wei-lcof)
        - [[130.被围绕的区域](https://leetcode-cn.com/problems/surrounded-regions/)](#130被围绕的区域httpsleetcode-cncomproblemssurrounded-regions-1)
        - [[994.腐烂的橘子](https://leetcode-cn.com/problems/rotting-oranges/)](#994腐烂的橘子httpsleetcode-cncomproblemsrotting-oranges)
        - [[]()](#)
        - [[]()](#-1)
        - [[]()](#-2)
        - [[]()](#-3)
        - [[]()](#-4)
        - [[]()](#-5)
    - [常用算法](#常用算法)
        - [[560.和为K的子数组](https://leetcode-cn.com/problems/subarray-sum-equals-k/)](#560和为k的子数组httpsleetcode-cncomproblemssubarray-sum-equals-k)
        - [[1248.统计「优美子数组」](https://leetcode-cn.com/problems/count-number-of-nice-subarrays/)](#1248统计优美子数组httpsleetcode-cncomproblemscount-number-of-nice-subarrays)
        - [[974. 和可被 K 整除的子数组](https://leetcode-cn.com/problems/subarray-sums-divisible-by-k/)](#974-和可被-k-整除的子数组httpsleetcode-cncomproblemssubarray-sums-divisible-by-k)
        - [[454.四数相加II](https://leetcode-cn.com/problems/4sum-ii/)](#454四数相加iihttpsleetcode-cncomproblems4sum-ii)
        - [[303. 区域和检索 - 数组不可变](https://leetcode-cn.com/problems/range-sum-query-immutable/)](#303-区域和检索---数组不可变httpsleetcode-cncomproblemsrange-sum-query-immutable)
        - [[304. 二维区域和检索 - 矩阵不可变](https://leetcode-cn.com/problems/range-sum-query-2d-immutable/)](#304-二维区域和检索---矩阵不可变httpsleetcode-cncomproblemsrange-sum-query-2d-immutable)
        - [[307. 区域和检索 - 数组可修改](https://leetcode-cn.com/problems/range-sum-query-mutable/)](#307-区域和检索---数组可修改httpsleetcode-cncomproblemsrange-sum-query-mutable)
        - [[315.计算右侧小于当前元素的个数](https://leetcode-cn.com/problems/count-of-smaller-numbers-after-self/)](#315计算右侧小于当前元素的个数httpsleetcode-cncomproblemscount-of-smaller-numbers-after-self)
        - [[剑指Offer 51.数组中的逆序对](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/)](#剑指offer-51数组中的逆序对httpsleetcode-cncomproblemsshu-zu-zhong-de-ni-xu-dui-lcof)
        - [[493. 翻转对](https://leetcode-cn.com/problems/reverse-pairs/)](#493-翻转对httpsleetcode-cncomproblemsreverse-pairs)
        - [[剑指 Offer 51. 数组中的逆序对](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/)](#剑指-offer-51-数组中的逆序对httpsleetcode-cncomproblemsshu-zu-zhong-de-ni-xu-dui-lcof)
        - [[315.计算右侧小于当前元素的个数](https://leetcode-cn.com/problems/count-of-smaller-numbers-after-self/)](#315计算右侧小于当前元素的个数httpsleetcode-cncomproblemscount-of-smaller-numbers-after-self-1)
        - [[493. 翻转对](https://leetcode-cn.com/problems/reverse-pairs/)](#493-翻转对httpsleetcode-cncomproblemsreverse-pairs-1)
        - [[]()](#-6)
        - [[]()](#-7)
        - [[]()](#-8)
        - [[]()](#-9)
    - [剑指offer系列](#剑指offer系列)
        - [[]()](#-10)
        - [[]()](#-11)
        - [[]()](#-12)
        - [[]()](#-13)
        - [[]()](#-14)
        - [[]()](#-15)
        - [[]()](#-16)
        - [[]()](#-17)
        - [[]()](#-18)
        - [[]()](#-19)
        - [[]()](#-20)
        - [[]()](#-21)
        - [[]()](#-22)
        - [[]()](#-23)
        - [[]()](#-24)
        - [[]()](#-25)
        - [[]()](#-26)
        - [[]()](#-27)
        - [[]()](#-28)
        - [[]()](#-29)
        - [[]()](#-30)
        - [[]()](#-31)
        - [[]()](#-32)
        - [[]()](#-33)
        - [[]()](#-34)
        - [[]()](#-35)
        - [[]()](#-36)
        - [[]()](#-37)
        - [[]()](#-38)
        - [[]()](#-39)
        - [[]()](#-40)
        - [[]()](#-41)
        - [[]()](#-42)
        - [[]()](#-43)
        - [[]()](#-44)
        - [[]()](#-45)
        - [[]()](#-46)
        - [[]()](#-47)
        - [[]()](#-48)
        - [[]()](#-49)
        - [[]()](#-50)
        - [[]()](#-51)
        - [[]()](#-52)
        - [[]()](#-53)
        - [[]()](#-54)
        - [[]()](#-55)
        - [[]()](#-56)
        - [[]()](#-57)
        - [[]()](#-58)
        - [[]()](#-59)
        - [[]()](#-60)
        - [[]()](#-61)
        - [[]()](#-62)
        - [[]()](#-63)
        - [[]()](#-64)
        - [[]()](#-65)
        - [[]()](#-66)
        - [[]()](#-67)
        - [[]()](#-68)
        - [[]()](#-69)
        - [[]()](#-70)
        - [[]()](#-71)
        - [[]()](#-72)
        - [[]()](#-73)
        - [[]()](#-74)
        - [[]()](#-75)
        - [[]()](#-76)
        - [[]()](#-77)
        - [[]()](#-78)
        - [[]()](#-79)
        - [[]()](#-80)
        - [[]()](#-81)
        - [[]()](#-82)
        - [[]()](#-83)
        - [[]()](#-84)
        - [[]()](#-85)
        - [[]()](#-86)
        - [[]()](#-87)
        - [[]()](#-88)
        - [[]()](#-89)
        - [[]()](#-90)
        - [[]()](#-91)
        - [[]()](#-92)
        - [[]()](#-93)
        - [[]()](#-94)
        - [[]()](#-95)
        - [[]()](#-96)
        - [[]()](#-97)
        - [[]()](#-98)
        - [[]()](#-99)
        - [[]()](#-100)
        - [[]()](#-101)
        - [[]()](#-102)
        - [[]()](#-103)
        - [[]()](#-104)
        - [[]()](#-105)
        - [[]()](#-106)
        - [[]()](#-107)
        - [[]()](#-108)
        - [[]()](#-109)
        - [[]()](#-110)
        - [[]()](#-111)
        - [[]()](#-112)
        - [[]()](#-113)
        - [[]()](#-114)
        - [[]()](#-115)
        - [[]()](#-116)
        - [[]()](#-117)
        - [[]()](#-118)
        - [[]()](#-119)
        - [[]()](#-120)
        - [[]()](#-121)
        - [[]()](#-122)
        - [[]()](#-123)
        - [[]()](#-124)
        - [[]()](#-125)
        - [[]()](#-126)
        - [[]()](#-127)
        - [[]()](#-128)
        - [[]()](#-129)
        - [[]()](#-130)
        - [[]()](#-131)
        - [[]()](#-132)
        - [[]()](#-133)
        - [[]()](#-134)
        - [[]()](#-135)
        - [[]()](#-136)
        - [[]()](#-137)
        - [[]()](#-138)
        - [[]()](#-139)
        - [[]()](#-140)
        - [[]()](#-141)
        - [[]()](#-142)
        - [[]()](#-143)
        - [[]()](#-144)
        - [[]()](#-145)
        - [[]()](#-146)
        - [[]()](#-147)
        - [[]()](#-148)
        - [[]()](#-149)
        - [[]()](#-150)
        - [[]()](#-151)
        - [[]()](#-152)
        - [[]()](#-153)
        - [[]()](#-154)
        - [[]()](#-155)
        - [[]()](#-156)
        - [[]()](#-157)
        - [[]()](#-158)
        - [[]()](#-159)
        - [[]()](#-160)
        - [[]()](#-161)
        - [[]()](#-162)
        - [[]()](#-163)
        - [[]()](#-164)
        - [[]()](#-165)
        - [[]()](#-166)
        - [[]()](#-167)
        - [[]()](#-168)
        - [[]()](#-169)
        - [[]()](#-170)
        - [[]()](#-171)
        - [[]()](#-172)
        - [[]()](#-173)
        - [[]()](#-174)
        - [[]()](#-175)
        - [[]()](#-176)
        - [[]()](#-177)
        - [[]()](#-178)
        - [[]()](#-179)
        - [[]()](#-180)
        - [[]()](#-181)
        - [[]()](#-182)
        - [[]()](#-183)
        - [[]()](#-184)

<!-- /TOC -->

## 排序算法

### 冒泡排序
```C++
void bubblesort(vector<int>& nums)//两两比较从前往后
{
    int n = nums.size();
    if (n == 0 || n == 1) return;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)//排完一个，需要排的数量就减少
            if (nums[j] > nums[j + 1])
            {
                auto temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
}
```
---
### 选择排序
```C++
void selectionsort(vector<int>& nums)
{
	int n = nums.size();
	if (n == 0 || n == 1) return;
    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        int curnum = nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < curnum)//找到最小的数，记录下标
            {
                minindex = j;
                curnum  = nums[j];
            }
        }
        auto temp = nums[i];//和未排序的第一个数交换
        nums[i] = nums[minindex];
        nums[minindex] = temp;
    }
}
```
---
### 插入排序
```C++
void insertionsort(vector<int>& nums)
{
	int n = nums.size();
	if (n == 0 || n == 1) return;
    for (int j = 1; j < n; j++)
    {
        int key = nums[j];//待排序
        int i = j - 1;//已经排完序的最后一个索引
		//从后向前逐个比较已经排序过数组，如果比它小，则把后者用前者代替，
		//数组逐个后移动一位,为找到合适的位置时候便于Key的插入
        while (i >= 0 && key < nums[i])
        {
            nums[i + 1] = nums[i];
            i--;
        }
        nums[i + 1] = key;
    }
}
```
---
### 归并排序
```C++
void merge(vector<int>& nums, int lo, int mid, int hi)
{
	int i = lo;//左侧数组起始位置
	int j = mid + 1;//右侧数组起始位置
	vector<int> temp;//暂存
    while (i <= mid && j <= hi)
        temp.push_back(nums[i] <=
         nums[j] ? nums[i++] : nums[j++]);	
	while (i <= mid)
		temp.push_back(nums[i++]);
	while (j <= hi)
		temp.push_back(nums[j++]);

    auto it = temp.begin();
	while (lo <= hi)
		nums[lo++] = *it++;
}
void mergesort(vector<int>& nums, int lo, int hi)
{
    if (lo < hi)
    {
        int mid = (hi + lo) / 2;
        mergesort(nums, lo, mid);
        mergesort(nums, mid + 1, hi);
        merge(nums, lo, mid, hi);
    }
}
```
---
### 快速排序
```C++
void quicksort(vector<int>& nums, int left, int right)
{
    if (left >= right) return;
    int i = left, j = right;
    int base = nums[left];
    while (i < j)
    {
		while (nums[j] >= base && i < j)//等于号
			j--;
		while (nums[i] <= base && i < j)
			i++;
		if (i < j)
		{
			int temp = nums[j];
			nums[j] = nums[i];
			nums[i] = temp;
		}
    }
    nums[left] = nums[i];
    nums[i] = base;
    quicksort(nums, left, i - 1);
    quicksort(nums, i + 1, right);
}
```
### test main 
```C++
int main()
{
    vector<int> nums = { 2,5,8,4,1,9,3,7,10,0,11,16,13 };
    //冒泡测试
    //bubblesort(nums);
    //选择测试
    //selectionsort(nums);
    //插入测试
    //insertionsort(nums);
    //归并测试
    //mergesort(nums, 0, nums.size() - 1);
    //快速排序测试
    //quicksort(nums, 0, nums.size() - 1);
    for (auto num : nums)
        cout << num << "---";
    return 0;
}
```

### 堆排序
### 快排非递归实现
### 归并非递归实现
### 用栈模拟递归
---
---
---
---
---

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
### [25.K个一组翻转链表](https://leetcode-cn.com/problems/reverse-nodes-in-k-group/)
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
1. **顺序**合并
   * 合并两个有序链表，再合并下一个
```C++
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        if(lists.size() == 1) return lists[0];
        ListNode* sumList = nullptr;
        for (auto l : lists)
        {
            sumList = mergeTwoLists(sumList, l);
        }
        return sumList;
    }
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
2. **分治**
   * 一次合并两个，最终合并成一个
```C++
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        if(lists.size() == 1) return lists[0];
        return merge(lists, 0, lists.size() - 1);
    }
    ListNode* merge(vector<ListNode*>& lists, int lo, int hi)
    {
        if(lo > hi) return nullptr;
        if(lo == hi) return lists.at(lo);
        int mid = (lo + hi) / 2;
        return mergeTwoLists(merge(lists, lo, mid), merge(lists, mid + 1, hi));
    }
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
3. **优先队列**
```C++
class Solution {
public:
    struct Compare {
        bool operator() (ListNode* N1, ListNode* N2)
        {
            return N1->val > N2->val;
        }
    };//这里重写仿函数或者重载操作符皆可
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        if(lists.size() == 1) return lists[0];
        priority_queue<ListNode*, vector<ListNode*>, Compare> que;
        for(auto l : lists)
        {
            if(l != nullptr) que.push(l);
        }
        ListNode dummy(-1);
        ListNode* temp = &dummy;
        while(!que.empty())
        {
            auto node = que.top();
            que.pop();
            temp->next = node;
            temp = temp->next;
            if(node->next != nullptr) que.push(node->next);
        }
        auto res = dummy.next;
        return res;
    }
};
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
### 144/145/94二叉树的前中后遍历
1. 递归
```C++
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
    //前序遍历
    void dfs(TreeNode* root, vector<int>& res)
    {
        if (root == nullptr) return ;
        res.push_back(root->val);
        dfs(root->left, res);
        dfs(root->right, res);
    }
    //中序遍历
    void dfs(TreeNode* root, vector<int>& res)
    {
        if (root == nullptr) return ;
        dfs(root->left, res);
        res.push_back(root->val);
        dfs(root->right, res);
    }
    //后序遍历
    void dfs(TreeNode* root, vector<int>& res)
    {
        if (root == nullptr) return ;
        dfs(root->left, res);
        dfs(root->right, res);
        res.push_back(root->val);
    }

};
```
2. 迭代
```C++
////////前序遍历////////
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr) return {};
        stack<TreeNode*> mystack;
        mystack.push(root);
        while (!mystack.empty())
        {
            auto node = mystack.top();
            mystack.pop();
            res.push_back(node->val);
            if (node->right) mystack.push(node->right);//右进栈
            if (node->left) mystack.push(node->left);//左进栈
        }
        //出栈中、左、右
        return res;
    }
};
//////////////////////
/////////中序遍历///////
class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};
        vector<int> res;
        stack<TreeNode*> mystack;
        auto cur = root;
        while (cur != nullptr || !mystack.empty())
        {
            while (cur != nullptr)
            {
                mystack.push(cur);
                cur = cur->left;
            }
            cur = mystack.top();
            mystack.pop();
            res.push_back(cur->val);
            cur = cur->right;
        }
        return res;
    }
};//........
/////////////////////
////////后序遍历///////
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};
        vector<int> res;
        stack<TreeNode*> mystack;
        mystack.push(root);
        while (!mystack.empty())
        {
            auto node = mystack.top();
            mystack.pop();
            res.push_back(node->val);
            if (node->left) mystack.push(node->left);//左进栈
            if (node->right) mystack.push(node->right);//右进栈
        }
        //出栈是中、右、左，反转刚好就是结果
        reverse(res.begin(), res.end());
        return res;       
    }
};
//////////////////////


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
### [687.最长同值路径](https://leetcode-cn.com/problems/longest-univalue-path/)
* l 是与当前节点值相同的左子树的路径长度，r 是与当前节点值相同的右子树路径长度，l + r 是与当前节点值相同，左右连接在一起的路径的长度
* max(l, r)是因为选择父节点的时候，不可以同时选择左右
```C++
class Solution {
public:
    int maxlength = 0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return maxlength;
    }
    int dfs(TreeNode* root)
    {
        if (root == nullptr) return 0;  
        int l = dfs(root->left);
        int r = dfs(root->right);
        if (root->left) 
        {
            if (root->val == root->left->val)
                l++;
            else l = 0;
        }
        if (root->right)
        {
            if (root->val == root->right->val)
                r++;
            else r = 0;
        }
        maxlength = max(maxlength, l + r);
        return max(l, r);
    }
};
```
---

### [257.二叉树的所有路径](https://leetcode-cn.com/problems/binary-tree-paths/)
1. **dfs**
```C++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        string str;
        dfs(root, str);
        return res;
    }
    void dfs(TreeNode* root, string str)
    {
        if (root != nullptr) 
        {
            str += to_string(root->val);
            if (root->left == nullptr && root->right == nullptr)
            {
                res.push_back(str);
                return;
            }
            else
            {
                str += "->";
                dfs(root->left, str);
                dfs(root->right, str);
            }
        }       
    }
};
```

2. **bfs**
```C++
class Solution {
public:
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) return {};
        string path;
        queue<TreeNode*> node_q;
        queue<string> path_q;
        node_q.push(root);
        path_q.push(to_string(root->val));

        while (!node_q.empty())
        {
            auto curNode = node_q.front();
            auto curPath = path_q.front();
            node_q.pop();
            path_q.pop();
            if (curNode->left == nullptr && curNode->right == nullptr) res.push_back(curPath);
            else
            {
                if (curNode->left != nullptr)
                {
                    node_q.push(curNode->left);
                    path_q.push(curPath + "->" + to_string(curNode->left->val));
                }
                if (curNode->right != nullptr)
                {
                    node_q.push(curNode->right);
                    path_q.push(curPath + "->" + to_string(curNode->right->val));
                }
            }
        }
        return res;
    }

};

```
---
---

## 数据结构设计
### [130.被围绕的区域](https://leetcode-cn.com/problems/surrounded-regions/)
1. **DFS**
   * 深度优先遍历，从**边缘**往里判断，把不被围绕的'O'换成'#',最后**还原**
   * 借用**direction方位数组**
```C++
class Solution {
public:
    int m = 0;
    int n = 0;
    vector<pair<int, int>>direction = {{1, 0},{-1, 0},{0, 1},{0, -1}};//方位

    void solve(vector<vector<char>>& board) {
        m = board.size();
        if(m == 0) return;
        n = board.at(0).size();
        for(int row = 0; row < m; ++row)
        {
            dfs(board, row, 0);
            dfs(board, row, n - 1);
        }
        for(int col = 1; col < n - 1; ++col)
        {
            dfs(board, 0, col);
            dfs(board, m - 1, col);
        }
        for(int row = 0; row < m; ++row)
            for(int col = 0; col < n; ++col)
            {
                if(board[row][col] == '#') board[row][col] = 'O';
                else if(board[row][col] == 'O') board[row][col] = 'X';
            }

    }

    void dfs(vector<vector<char>>& board, int x, int y)
    {
        if(x < 0 || x >= m || y < 0 || y >= n || board[x][y] != 'O')
            return;
        board[x][y] = '#';
        for(auto d : direction)
        {
            dfs(board, x + d.first, y + d.second);
        }     
    }
};
```
2. **BFS**（实现类似DFS）
   * 广度优先，等于把‘O’的对象放入队列，在检验其周围的对象
   * 将替换过程放在队列的while中
```C++
class Solution {
public:
    int m = 0;
    int n = 0;
    vector<pair<int, int>>direction = {{1, 0},{-1, 0},{0, 1},{0, -1}};//方位
    void solve(vector<vector<char>>& board) {
        m = board.size();
        if(m == 0) return;
        n = board.at(0).size();
        queue<pair<int, int>> myque;
        for(int row = 0; row < m; ++row)
        {
            if(board[row][0] == 'O') myque.emplace(row, 0);
            if(board[row][n - 1] == 'O') myque.emplace(row, n - 1);
        }
        for(int col = 1; col < n - 1; ++col)
        {
            if(board[0][col] == 'O') myque.emplace(0, col);
            if(board[m -1][col] == 'O') myque.emplace(m - 1, col);
        }
        while(!myque.empty())
        {
            auto row = myque.front().first;
            auto col = myque.front().second;
            myque.pop();
            board[row][col] = '#';//替换步骤
            for(auto d : direction)
            {
                int curRow = row + d.first;
                int curCol = col + d.second;
                if(curRow < 0 || curRow >= m || curCol < 0 || curCol >= n || board[curRow][curCol] != 'O') continue;
                myque.emplace(curRow, curCol);
            }
        }
        for(int row = 0; row < m; ++row)
        {
            for(int col  = 0; col < n; ++col)
            {
                if(board[row][col] == '#') board[row][col] =  'O';
                else if(board[row][col] = 'O')board[row][col] = 'X';
            }
        }
    }
};
```
3. **Union Find结构**
   * **并查集算法**，判断连通区域
      *  实现**Union Find结构**
   * 和边界'O'连接的区域保留，并把连通的区域全部和dummy节点进行连接
   * 不连通节点改为'X'
```C++
class Union_Find{
public:
    Union_Find(int n)
    {
        count = n;
        parent = new int[n];
        size = new int[n];
        for(int i = 0; i < n; ++i)
        {
            parent[i] = i;
            size[i] = 1;
        }
    };
    ~Union_Find(){};
    int find(int p)
    {
        while(parent[p] != p)
        {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    };
    void toUnion(int p, int q)
    {
        int rootP = find(p);
        int rootQ = find(q);
        if(rootP == rootQ) return;
        if(size[rootP] > size[rootQ])
        {
            parent[rootQ] = rootP;
            size[rootP] += size[rootQ];
        }
        else
        {
            parent[rootP] = rootQ;
            size[rootQ] += size[rootP];
        }
        count--;
    };
    bool isConnected(int p, int q)
    {
        return find(p) == find(q);
    };
private:
    int count;
    int* parent;//可用vector
    int* size;
};

class Solution {
public:
    int m = 0;
    int n = 0;
    vector<pair<int, int>>direction = {{1, 0},{-1, 0},{0, 1},{0, -1}};//方位
    void solve(vector<vector<char>>& board) {
        m = board.size();
        if(m == 0) return;
        n = board.at(0).size();
        Union_Find UF(m * n + 1);
        int dummy = m * n;
        for(int row = 0; row < m; ++row)
        {
            if(board[row][0] == 'O') UF.toUnion(row * n, dummy);
            if(board[row][n - 1] == 'O') UF.toUnion(row * n + n - 1, dummy);
        }
        for(int col = 1; col < n-1; ++col)
        {
            if(board[0][col] == 'O') UF.toUnion(col, dummy);
            if(board[m - 1][col] == 'O') UF.toUnion((m - 1) * n + col, dummy);
        }
        for(int row = 1; row < m - 1; ++row)
            for(int col = 1; col < n - 1; ++col)
            {
                if(board[row][col] == 'O')
                {
                    for(auto d : direction)
                    {
                        auto curRow = row + d.first;
                        auto curCol = col + d.second;
                        if(board[curRow][curCol] == 'O')
                            UF.toUnion(row * n + col, curRow * n + curCol);
                    }                   
                }
            }
        for(int row = 1; row < m - 1; ++row)
            for(int col = 1; col < n - 1; ++col)
                if(!UF.isConnected(row * n + col, dummy))
                    board[row][col] = 'X';
    }

};
```
---
### [990.等式方程的可满足性](https://leetcode-cn.com/problems/satisfiability-of-equality-equations/)
* 并查集 **UF**算法
* 将相等的字母连接起来，再判断是否矛盾（！= 的式子哩，如果不等式两边连通，则矛盾）
```C++
class Union_Find {
public:
    Union_Find(int n)
    {
        count = n;
        parent.resize(n);
        size.resize(n);
        for(int i = 0; i < n; ++i)
        {
            parent[i] = i;
            size[i] = 1;
        }
    };
    ~Union_Find(){};
    int find(int p)
    {
        while(parent[p] != p)
        {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    };
    void toUnion(int p, int q)
    {
        int rootP = find(p);
        int rootQ = find(q);
        if(rootP == rootQ) return;
        if(size[rootP] > size[rootQ])
        {
            parent[rootQ] = rootP;
            size[rootP] += size[rootQ];
        }
        else 
        {
            parent[rootP] = rootQ;
            size[rootQ] += size[rootP];
        }
        count--;
    };
    bool isConnected(int p, int q)
    {
        return find(p) == find(q);
    };
private:
    int count;
    vector<int> parent;
    vector<int> size;
};
class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        if(equations.size() == 0) return true;
        Union_Find uf(26);
        for(auto eqt : equations)
        {
            if(eqt.at(1) == '=')
            {
                uf.toUnion(int(eqt.at(0) - 'a'), int(eqt.at(3) - 'a'));
            }
        }
        for(auto eqt : equations)
        {
            if(eqt.at(1) == '!')
            {
                if(uf.isConnected(int(eqt.at(0) - 'a'), int(eqt.at(3) - 'a'))) return false;
            }
        }
        return true;
    }
};
```
---
### [146.LRU缓存机制](https://leetcode-cn.com/problems/lru-cache/)
* 用哈希建立节点和key的关系
* 借鉴队列的**思想**，新的节点/最近访问的节点放在队列尾部，旧的节点/最近不曾访问的节点保存在前头
* 由于队列的时间限制，用**链表**实现快速插入和删除
```C++
struct Node//节点类
{
    int key;
    int value;
    Node* prev;
    Node* next;
    Node() : key(0), value(0), prev(nullptr), next(nullptr) {};
    Node(int k, int val) : key(k), value(val), prev(nullptr), next(nullptr) {};
};

struct DLinkedList//双向链表类
{
    Node* head;
    Node* tail;
    int size;
    DLinkedList() : size(0)
    {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    };
    ~DLinkedList()
    {
        delete head;
        head = nullptr;
        delete tail;
        tail = nullptr;
    };
    int getSize()
    {
        return size;
    };
    void push(Node* node)//尾部放入
    {
        node->prev = tail->prev;
        tail->prev->next = node;//连接node与最后一个节点
        tail->prev = node;
        node->next = tail;//连接node与尾节点
        size++;
    };
    void remove(Node* node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        size--;
    };
    Node* top()//返回头部节点
    {
        return head->next;
    };
    void pop()//头部弹出
    {
        if (head->next == tail) return;
        remove(head->next);
    };
};

class LRUCache {
public:
    LRUCache(int capacity) : m_Capacity(capacity) {
    }

    int get(int key) {
        if (m_Map.count(key) == 0) return -1;
        updateByKey(key);
        return m_Map[key]->value;
    }

    void put(int key, int value) {
        if (m_Map.count(key) != 0)
        {
            deleteByKey(key);
            add(key, value);
            return;
        }
        if (m_Capacity == m_List.getSize())
            deleteOldest();
        add(key, value);
    }
public:
    void updateByKey(int key)//更新节点位置，每次更新放在链表最后的位置
    {
        auto temp = m_Map[key];
        m_List.remove(temp);
        m_List.push(temp);
    };
    void add(int key, int val)//添加节点至最新（最后）位置
    {
        auto temp = new Node(key, val);
        m_List.push(temp);
        m_Map[key] = temp;
    };
    void deleteByKey(int key)//索引key删除对应节点
    {
        auto temp = m_Map[key];
        m_List.remove(temp);
        m_Map.erase(key);
    };
    void deleteOldest()//删除最老的节点
    {
        m_Map.erase(m_List.top()->key);
        m_List.pop();
    };
private:
    DLinkedList m_List;
    unordered_map<int, Node*> m_Map;
    int m_Capacity;
};
```
---
### [146.LFU缓存机制](https://leetcode-cn.com/problems/lfu-cache/)
1. 哈希 + 双向链表
```C++
struct Node {
	int key;
	int value;
	int freq;
	Node(int k, int val, int f) : key(k), value(val), freq(f) {}
};

class LFUCache
{
private:
	int m_Capacity;//<缓存大小
	int minFreq; //<保存最小的频次
	unordered_map<int, list<Node>::iterator> key_To_Node;//<key索引Node的地址
	unordered_map<int, list<Node>> freq_To_ListOfNode;//<freq索引出现次数相同的节点组成的链表，最近访问的节点放置在链表的最末端
public:
	LFUCache(int capacity) {
		m_Capacity = capacity;
		key_To_Node.clear();
		freq_To_ListOfNode.clear();
		minFreq = 0;
	}

	int get(int key) {
		if (m_Capacity == 0) return -1;
		auto it = key_To_Node.find(key);
		if (it == key_To_Node.end()) return -1;
		auto iteratorOfNode = it->second;
		int value = iteratorOfNode->value;
		int freq = iteratorOfNode->freq;
		// 更新freq
		//key_To_Node[key]->freq = freq + 1; 错误写法，key_To_Node索引地址，不应当改变地址所指向内容的值，而应该直接key所指更改地址
		freq_To_ListOfNode[freq].erase(iteratorOfNode);
		if (freq_To_ListOfNode[freq].size() == 0)
		{
			freq_To_ListOfNode.erase(freq);
			if (minFreq == freq) minFreq++;
		}
		freq_To_ListOfNode[freq + 1].push_back(Node(key, value, freq + 1));
		key_To_Node[key] = --freq_To_ListOfNode[freq + 1].end();
		return value;
	}

	void put(int key, int value) {
		if (m_Capacity == 0) return;
		auto it = key_To_Node.find(key);
		if (it == key_To_Node.end())//放入的缓存 是 新的数据
		{
			if (key_To_Node.size() == m_Capacity)//容量已满，此时需要删去频次最低、且最早使用的数据
			{
				auto node = freq_To_ListOfNode[minFreq].front();
				key_To_Node.erase(node.key);
				freq_To_ListOfNode[minFreq].pop_front();
				if (freq_To_ListOfNode[minFreq].size() == 0)
				{
					freq_To_ListOfNode.erase(minFreq);
					//这里更新或者不更新minFreq都无所谓，因为 it == key_To_Node.end() 这个条件说明key对应的数据是此前缓存中不存在的数据，只需要在添加key对应的这个新的缓存后，将其freq和minFreq均置为1即可（除了初始化，1是最小的频次）
				}
			}
			freq_To_ListOfNode[1].push_back(Node(key, value, 1));
			key_To_Node[key] = --freq_To_ListOfNode[1].end();
			minFreq = 1;
		}
		else//放入的缓存 不是 新的数据
		{
			auto iteratorOfNode = it->second;
			int freq = iteratorOfNode->freq;
			//auto node = freq_To_ListOfNode[freq].front();
			freq_To_ListOfNode[freq].erase(iteratorOfNode);
			if (freq_To_ListOfNode[freq].size() == 0)
			{
				freq_To_ListOfNode.erase(freq);
				if (minFreq == freq) minFreq++;
			}
			freq_To_ListOfNode[freq + 1].push_back(Node(key, value, freq + 1));
			key_To_Node.erase(key);
			key_To_Node[key] = --freq_To_ListOfNode[freq + 1].end();
		}
	}
};
```
2. 哈希 + set
```C++
struct Node {
    int cnt, time, key, value;

    Node(int _cnt, int _time, int _key, int _value):cnt(_cnt), time(_time), key(_key), value(_value){}
    
    bool operator < (const Node& rhs) const {
        return cnt == rhs.cnt ? time < rhs.time : cnt < rhs.cnt;
    }
};
class LFUCache {
    // 缓存容量，时间戳
    int capacity, time;
    unordered_map<int, Node> key_table;
    set<Node> S;
public:
    LFUCache(int _capacity) {
        capacity = _capacity;
        time = 0;
        key_table.clear();
        S.clear();
    }
    
    int get(int key) {
        if (capacity == 0) return -1;
        auto it = key_table.find(key);
        // 如果哈希表中没有键 key，返回 -1
        if (it == key_table.end()) return -1;
        // 从哈希表中得到旧的缓存
        Node cache = it -> second;
        // 从平衡二叉树中删除旧的缓存
        S.erase(cache);
        // 将旧缓存更新
        cache.cnt += 1;
        cache.time = ++time;
        // 将新缓存重新放入哈希表和平衡二叉树中
        S.insert(cache);
        it -> second = cache;
        return cache.value;
    }
    
    void put(int key, int value) {
        if (capacity == 0) return;
        auto it = key_table.find(key);
        if (it == key_table.end()) {
            // 如果到达缓存容量上限
            if (key_table.size() == capacity) {
                // 从哈希表和平衡二叉树中删除最近最少使用的缓存
                key_table.erase(S.begin() -> key);
                S.erase(S.begin());
            }
            // 创建新的缓存
            Node cache = Node(1, ++time, key, value);
            // 将新缓存放入哈希表和平衡二叉树中
            key_table.insert(make_pair(key, cache));
            S.insert(cache);
        }
        else {
            // 这里和 get() 函数类似
            Node cache = it -> second;
            S.erase(cache);
            cache.cnt += 1;
            cache.time = ++time;
            cache.value = value;
            S.insert(cache);
            it -> second = cache;
        }
    }
};
```
3. 哈希 + set //2
```C++
struct Node {
	int key;
	int value;
	int freq;
	int time;
	Node(int k, int val, int f, int t) : key(k), value(val), freq(f), time(t) {};
	bool operator < (const Node& temp) const
	{
		return freq == temp.freq ? time < temp.time : freq < temp.freq;
	}
};

class LFUCache
{
private:
	int m_Capacity;
	int time;
	unordered_map<int, Node> key_To_Node;
	set<Node> S;
public:
	LFUCache(int capacity) {
		time = 0;
		m_Capacity = capacity;
		key_To_Node.clear();
		S.clear();
	}

	int get(int key) {
		if (m_Capacity == 0) return -1;
		auto it = key_To_Node.find(key);
		if (it == key_To_Node.end()) return -1;
		time++;
		auto node = it->second;
		int freq = node.freq;
		int value = node.value;
		Node newNode(key, value, freq + 1, time);
		key_To_Node.erase(key);
		key_To_Node.insert(make_pair(key, newNode));
		S.erase(node);
		S.insert(newNode);
		return value;//get其实没必要新建一个对象，浪费内存空间

	}

	void put(int key, int value) {
		if (m_Capacity == 0) return;
		auto it = key_To_Node.find(key);
		if (it == key_To_Node.end())
		{
			if (key_To_Node.size() == m_Capacity)
			{
				key_To_Node.erase(S.begin()->key);
				S.erase(S.begin());
			}
			time++;
			Node newNode(key, value, 1, time);
		    key_To_Node.insert(make_pair(key, newNode));
			S.insert(newNode);
		}
		else
		{
			time++;
			auto node = it->second;
			int freq = node.freq;
			Node newNode(key, value, freq + 1, time);
			key_To_Node.erase(key);
			key_To_Node.insert(make_pair(key, newNode));
			S.erase(node);
			S.insert(newNode);
		}
	}
};
```

### [295.数据流的中位数](https://leetcode-cn.com/problems/find-median-from-data-stream/)
1. **每次放入**数据**排序**，在输出(*超时*)
```C++
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        V.clear();
    }
    
    void addNum(int num) {
        V.push_back(num);
    }
    
    double findMedian() {
        sort(V.begin(), V.end());
        int size = V.size();
        return (size & 1 ? V[size / 2] : (V[size / 2 - 1] + V[size / 2]) * 0.5); 
    }
    vector<double> V;
};
```
2. 插入排序
   * 把数据插入（排序）到已经排序的数组中,保持输入容器**始终排序**
   * lower_bound( begin,end,num)：从数组的begin位置到end-1位置二分查找第一个大于或等于num的数字，找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。
```C++
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        V.clear();
    }
    
    void addNum(int num) {
        if (V.empty())
            V.push_back(num);
        else
            V.insert(lower_bound(V.begin(), V.end(), num), num);
    }
    
    double findMedian() {
        int size = V.size();
        return (size & 1 ? V[size / 2] : (V[size / 2 - 1] + V[size / 2]) * 0.5); 
    }
    vector<double> V;
};
```
3. **双优先队列**（大顶锥 + 小顶锥）
   * 用于存储输入数字中**较小一半**的**最大堆**
   * 用于存储输入数字的**较大一半**的**最小堆**
   * 最大堆可以允许比最小堆多维护一个数据，当两个堆一样大（数据为偶数个），返回两个堆顶的均值；最大堆大（数据为奇数个），返回最大堆堆顶数据
   * **添加**一个数 num：
将 num 添加到最大堆 lo。因为 lo 收到了一个新元素，所以我们必须为 hi 做一个平衡步骤。因此，从 lo 中移除最大的元素并将其提供给 hi。
在上一个操作之后，最小堆 hi 可能会比最大堆 lo 保留更多的元素。我们通过从 hi 中去掉最小的元素并将其提供给 lo 来解决这个问题。
```C++
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
    }
    
    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top());
        lo.pop();
        if (hi.size() > lo.size())
        {
            lo.push(hi.top());
            hi.pop();
        }
    }
    
    double findMedian() {
        return lo.size() > hi.size() ? lo.top() : (lo.top() + hi.top()) * 0.5; 
    }
    priority_queue<double> lo;
    priority_queue<double, vector<double>, greater<double>> hi;
};
```
4. AVL树（**multiset**） + 双指针
   * 也可用单指针
   * 双指针分别记录中位数/组成中位数的两个数
```C++
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        l_Iter = M.end();
        r_Iter = M.end();
    }
    
    void addNum(int num) {
        auto size = M.size();
        M.insert(num);
        if (size == 0)
        {
            l_Iter = M.begin();
            r_Iter = M.begin();
        }
        else if (size & 1)//奇数
        {
            if (num < *l_Iter)
                l_Iter--;
            else
                r_Iter++;
        }
        else//偶数
        {
            if (num > *l_Iter && num < *r_Iter)
            {
                l_Iter++;
                r_Iter--;
            }
            else if (num >= *r_Iter)
                l_Iter++;
            else
                l_Iter = --r_Iter;
        }
    }
    
    double findMedian() {
        return 0.5*(*l_Iter + *r_Iter); 
    }
    multiset<double> M;
    multiset<double>::iterator l_Iter, r_Iter;
};
```
---
### [355.设计推特](https://leetcode-cn.com/problems/design-twitter/)
* 哈希 + 链表
* **hashmap**关联用户id和用户对象
* 链表顺序存储推特
* 合并K个升序链表
```C++
int T = 0;
class Tweet {
public:
    int id;
    int time;
    Tweet* next;
    Tweet(int ID) 
    {
        id = ID;
        time = T++;
        next = nullptr;
    }
};

class User {
private:
    int id;//用户id
    Tweet* tweet;//推特链表
    unordered_set<int> myFollows;//关注列表
public:
    User(int ID) : id(ID) 
    {
        tweet = nullptr;
        myFollows.clear();
    }

    void follow(int userId)
    {
        if (userId == id) return;//不关注自己
        if (myFollows.count(userId) != 0) return;//已经关注，不用再次关注
        myFollows.insert(userId);
    }

    void unfollow(int userId)
    {
        if (userId == id) return;//不取关自己
        if (myFollows.count(userId) == 0) return;//已经取关/没有关注，不用再次取关
        myFollows.erase(userId);
    }

    void post(int tweetId)
    {
        Tweet* newTweet = new Tweet(tweetId);
        newTweet->next = tweet;//新发的推特放在链表头部
        tweet = newTweet;
    }

    unordered_set<int> getMyFollows()
    {
        return myFollows;
    }
    Tweet* getMyTweet()
    {
        return tweet;
    }
};
class Twitter {
private:
    unordered_map<int, User*> id_To_User;


public:
    /** Initialize your data structure here. */
    Twitter() {
        id_To_User.clear();
    }

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        if (id_To_User.count(userId) == 0)//用户不存在，首先创建用户
        {
            User* newUser = new User(userId);
            id_To_User[userId] = newUser;
        }   
        id_To_User[userId]->post(tweetId);
    }

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        if (id_To_User.count(userId) == 0) return{};//用户不存在
        struct cmp {
            bool operator()(const Tweet* a, const Tweet* b) {
                return a->time < b->time;
            }
        };
        priority_queue<Tweet*, vector<Tweet*>, cmp> server;
        for (auto id : id_To_User[userId]->getMyFollows())
        {
            if (id_To_User.count(id) == 0) continue;//关注的人不存在，直接退出
            if (id_To_User[id]->getMyTweet() == nullptr) continue;//关注的人没有发推特，无需添加
            server.push(id_To_User[id]->getMyTweet());//把关注的人的tweet放入队列，后续合并K个有限链表
        }
        if (id_To_User[userId]->getMyTweet() != nullptr)//自己没发推特，无需添加
            server.push(id_To_User[userId]->getMyTweet());//自己的tweet也放进去；
        vector<int> result;
        while (!server.empty())
        {
            auto tweet = server.top();
            server.pop();
            result.push_back(tweet->id);
            if (result.size() == 10) return result;
            if (tweet->next != nullptr) server.push(tweet->next);

        }
        return result;
    }

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        if (id_To_User.count(followerId) == 0)//用户不存在，首先创建用户
        {
            User* newUser = new User(followerId);
            id_To_User[followerId] = newUser;
        }
        id_To_User[followerId]->follow(followeeId);
    }

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        if (id_To_User.count(followerId) == 0)//用户不存在，首先创建用户
            return;
        id_To_User[followerId]->unfollow(followeeId);
    }
};
```
---
### [496.下一个更大元素I](https://leetcode-cn.com/problems/next-greater-element-i/)
1. 暴力求解
```C++
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) return {};
        vector<int> result;
        for (auto num : nums1)
        {
            vector<int>::iterator iter;
            int res;
            for (auto it = nums2.begin(); it != nums2.end(); ++it)
            {
                if (num == *it)
                {
                    iter = it;
                    break;
                } 
            }
            for (; iter != nums2.end(); ++iter)
            {
                if (*iter > num)
                {
                    res = *iter;
                    break;
                }
            }
            if (iter == nums2.end()) res = -1;
            result.push_back(res);
        }
        return result;
    }
};
```
2. **单调栈** + hash
  * 可以忽略数组 nums1，先对将 nums2 中的每一个元素，求出其下一个更大的元素
  * 随后对于将这些答案放入哈希映射（HashMap）中，再遍历数组 nums1，并直接找出答案。对于 nums2，我们可以使用**单调栈**来解决这个问题。
```C++
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) return {};
        vector<int> result;
        unordered_map<int, int> map;
        stack<int> mystack;
        //单调栈求出nums2中每个数的下一个更大元素，并建立 数 与 下一个更大数 的映射关系，最后nums1的数作为key，value即为所得
        for (int i = nums2.size() - 1; i >= 0; --i)
        {
            while (!mystack.empty() && mystack.top() <= nums2[i])
            {
                mystack.pop();
            }
            map[nums2[i]] = mystack.empty() ? -1 : mystack.top();
            mystack.push(nums2[i]);
        }
        for (auto num : nums1)
        {
            result.push_back(map[num]);
        }
        return result;
    }
};


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) return {};
        int n = nums2.size();
        unordered_map<int, int> map;
        stack<int> mystack;
        vector<int> result;
        for (int i = 0; i < n; ++i)
        {
            while (!mystack.empty() && nums2[i] > nums2[mystack.top()])
            {
                int temp = mystack.top();
                mystack.pop();
                map[nums2[temp]] = nums2[i];
            }
            mystack.push(i);
        }
        while (!mystack.empty())
        {
            map[nums2[mystack.top()]] = -1;
            mystack.pop();
        }

        for (auto num : nums1)
        {
            result.push_back(map[num]);
        }
        return result;
    }
};
```
---
### [503.下一个更大元素II](https://leetcode-cn.com/problems/next-greater-element-ii/)
* **循环数组**模拟数组翻倍
```C++
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> mystack;
        vector<int> result(nums.size(), 0);
        for (int i = 2 * nums.size() - 1; i >= 0; --i)
        {
            while (!mystack.empty() && mystack.top() <= nums[i % nums.size()])
            {
                mystack.pop();
            }
            result.at(i % nums.size()) = mystack.empty() ? -1 : mystack.top();
            mystack.push(nums[i % nums.size()]);
        }
        return result;
    }
};




```
---
### [739.每日温度](https://leetcode-cn.com/problems/daily-temperatures/submissions/)
* 单调栈
```C++
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> result(T.size(), 0);
        stack<int> days;
        for (int i = T.size() - 1; i >= 0; --i)
        {
            while (!days.empty() && T[days.top()] <= T[i])
            {
                days.pop();
            }
            result[i] = days.empty() ? 0 : (days.top() - i);
            days.push(i);
        }
        return result;
    }
};

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        if (T.empty()) return {};
        int n = T.size();
        stack<int> mystack;
        vector<int> result(n, 0);
        for (int i = 0; i < n; ++i)
        {
            while (!mystack.empty() && T[i] > T[mystack.top()])
            {
                int temp = mystack.top();
                mystack.pop();
                result[temp] = i - temp;
            }
            mystack.push(i);
        }
        return result;
    }
};
```
---
### [42.接雨水](https://leetcode-cn.com/problems/trapping-rain-water/solution/jie-yu-shui-by-leetcode/)
1. 单调栈(...)
```C++
class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        int current = 0;
        stack<int> mystack;
        while (current < height.size())
        {
            while (!mystack.empty() && height[mystack.top()] < height[current] )
            {
                int temp = mystack.top();
                mystack.pop();
                if (mystack.empty()) break;
                int distance = current - mystack.top() - 1;
                int h = min(height[current], height[mystack.top()]) - height[temp];
                sum += h * distance;
            }
            mystack.push(current++);
        }
        return sum;
    }
};
----------------------------
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0; 
        int sum = 0;
        stack<int> mystack;
        for (int i = 0; i < height.size(); ++i)
        {
            while (!mystack.empty() && height[i] > height[mystack.top()])
            {
                int temp = mystack.top();
                mystack.pop();
                if (mystack.empty()) break;
                int dis = i - mystack.top() - 1;
                sum += dis * (min(height[i], height[mystack.top()]) - height[temp]);
            }
            mystack.push(i);
        }
        return sum;
    }
};
```
2. 暴力
* 求**每一列**可以容纳的水
* 该列的**左右必须均大于**该列
* 左侧最大和右侧最大列的**较小值**决定容纳量
```C++
class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        int size = height.size();
        for (int i = 1; i < size - 1; ++i)
        {
            int max_L = 0;
            int max_R = 0;
            for (int j = i - 1; j >= 0; --j)
            {
                max_L = max(max_L, height[j]);
            }
            for (int k = i + 1; k < size; ++k)
            {
                max_R = max(max_R, height[k]);
            }
            sum += max(0, min(max_L, max_R) - height[i]);//确保插值不为负数
        }
        return sum;
   
```
3. 动态规划(2进阶)
* 用数组当作**备忘录**记录此前信息
* **当前的最大左值为：max（当前值左值，当前值左值的最大值）**
* **当前的最大右值为：max（当前值右值，当前值右值的最大值）**
```C++
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0; 
        int sum = 0;
        int size = height.size();
        vector<int> max_L(size, 0);
        vector<int> max_R(size, 0);
        for (int i = 1;  i < size - 1; ++i)
        {
            max_L[i] = max(max_L[i - 1], height[i - 1]);
        }
        for (int i = size - 2; i >= 0; --i)
        {
            max_R[i] = max(max_R[i + 1], height[i + 1]);
        }
        for (int i = 1; i < size - 1; ++i)
        {
            sum += max(0, min(max_L[i], max_R[i]) - height[i]);
        }
        return sum;
    }
};
```
4. 双指针(3进阶)
* max_left [ i ] 和 max_right [ i ] 数组中的元素其实只用一次，然后就再也不会用到了。
* 所以可以不用数组，只用一个元素就行了
* **双指针**一边**遍历**一边**计算**
> 定理一：在某个位置i处，它能存的水，取决于它左右两边的最大值中较小的一个。

定理二：当我们从左往右处理到left下标时，左边的最大值left_max对它而言是可信的，但right_max对它而言是不可信的。（见下图，由于中间状况未知，对于left下标而言，right_max未必就是它右边最大的值）

定理三：当我们从右往左处理到right下标时，右边的最大值right_max对它而言是可信的，但left_max对它而言是不可信的。定理一：在某个位置i处，它能存的水，取决于它左右两边的最大值中较小的一个。
详见[官方解答评论](https://leetcode-cn.com/problems/trapping-rain-water/solution/jie-yu-shui-by-leetcode/)
```C++
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0; 
        int sum = 0;
        int size = height.size();
        int left = 0;
        int right = size - 1;
        int max_L = height[0];
        int max_R = height[size - 1];

        while(left <= right)
        {
            max_L = max(max_L, height[left]);
            max_R = max(max_R, height[right]);

            if (max_L <= max_R)
            {
                sum += max_L - height[left];
                left++;
            }
            else
            {
                sum += max_R - height[right];
                right--;
            }
        }
        return sum;
    }
};
-------------------------------------------------
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0; 
        int sum = 0;
        int size = height.size();
        int left = 0;
        int right = size - 1;
        int max_L = height[0];
        int max_R = height[size - 1];

        while(left <= right)
        {
            if (max_L <= max_R)
            {
                sum += max(0, max_L - height[left]);
                max_L = max(max_L, height[left]);
                left++;
            }
            else
            {
                sum += max(0, max_R - height[right]);
                max_R = max(max_R, height[right]);
                right--;
            }
        }
        return sum;
    }
};
```
---
### [84.柱状图中最大的矩形](https://leetcode-cn.com/problems/largest-rectangle-in-histogram/)
1. 暴力求解
   * 找出低于当前柱子左右两侧的位置
   * 详见[官方题解](https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/zhu-zhuang-tu-zhong-zui-da-de-ju-xing-by-leetcode-/)
```C++
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if (heights.empty()) return 0;
        int max_A = 0;
        for (int i = 0; i < heights.size(); ++i)
        {
            int left = i;
            int right = i;
            int height = heights[i];
            while (left -1 >= 0 && heights[left - 1] >= height)
                --left;
            while (right - 1 < heights.size() && heights[right + 1] >= height)
                ++right;
            max_A = max(max_A, (right - left + 1) * height);//宽度*高度
        }
        return max_A;
    }   
};
```
2. 单调栈
   * 详见[题解](https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/bao-li-jie-fa-zhan-by-liweiwei1419/)
```C++
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if (heights.empty()) return 0;
        int sum = 0;
        stack<int> mystack;
        mystack.push(0);
        //构建一个首位带有哨兵的新数组，遍历时需要避开
        //末尾 + 0， 确保最后一个柱状图能够被塞进栈
        vector<int> newHeights;
        newHeights.push_back(0);
        newHeights.insert(newHeights.end(), heights.begin(), heights.end());
        newHeights.push_back(0);

        for (int i = 1; i < newHeights.size(); ++i)
        {
            while(newHeights[i] < newHeights[mystack.top()])
            {
                int tempH = newHeights[mystack.top()];
                mystack.pop();
                sum = max(sum, (i - mystack.top() - 1) * tempH);
            }
            mystack.push(i);
        }
        return sum;
    }
```
---
### [581.最短无序连续子数组](https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/submissions/)
1. **暴力求解**
   * 直接对整个数组排序，比较发生改变的区间，区间长度即为所求
```C++
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        auto temp = nums;
        sort(temp.begin(), temp.end());
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (temp[i] != nums[i])
                result.push_back(i);
        }
        return result.empty() ? 0 : *(result.rbegin()) - *(result.begin()) + 1;
    }
};
```
2. **单调栈**
   * **两边遍历**无序子数组中最小元素的正确位置可以决定左边界，最大元素的正确位置可以决定右边界
   * **正向遍历**找元素突然变小的**左边界**
   * **反向遍历**找元素突然变大的**右边界**
```C++
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        stack<int> mystack;
        int l = nums.size() - 1;
        int r = 0;
        //正向遍历找左边界
        for (int i = 0; i < nums.size(); ++i)
        {
            while (!mystack.empty() && nums[i] < nums[mystack.top()])
            {
                auto temp = mystack.top();
                mystack.pop();
                l = min(l, temp);//找最左边界（可能有多处反转发生，取最左）
            }
            mystack.push(i);
        }
        //反向遍历找右边界（栈元素清空不清空都可以）
        stack<int>().swap(mystack);//（可以不用这一句）
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            while (!mystack.empty() && nums[i] > nums[mystack.top()])
            {
                auto temp = mystack.top();
                mystack.pop();
                r = max(r, temp);//找最右边界（可能有多处反转发生，取最右）
            }
            mystack.push(i);
        }
        return r > l ? r - l + 1 : 0;
    }
};
```

3. 不适用额外空间[->参考](https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/solution/si-lu-qing-xi-ming-liao-kan-bu-dong-bu-cun-zai-de-/)
```C++
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        auto size = nums.size();
        int max = INT_MIN;
        int min = INT_MAX;
        int left = 0;
        int right = -1;
        for (int i = 0; i < size; ++i)
        {
            if (nums[i] < max)
                right = i;
            else 
                max = nums[i];
            if (nums[size - 1 - i] > min)
                left = size - 1 - i;
            else
                min = nums[size - 1 - i];
        }
        return right - left + 1;
    }
};
```
---
### [901.股票价格跨度](https://leetcode-cn.com/problems/online-stock-span/submissions/)
**单调栈**
* 数组维护历史数组
* index维护数组下标
* 栈维护单调递减的顺序
* 借用**哨兵**
```C++
class StockSpanner {
public:
    StockSpanner() {
        V.clear(); 
        V.push_back(INT_MAX); //哨兵
        index = 0;
        mystack.push(0);  //哨兵  
    }

    int next(int price){
        index++;//数组对应的下标
        V.push_back(price);//把数据存入数组
        int result = 1;//未进栈的数据为1
        while (price >= V[mystack.top()])
        {
            mystack.pop();
            result = index - mystack.top();
        }
        mystack.push(index);
        return result;//数据进栈则result执行相应操作，未进栈则仍为1
    }
    vector<int> V;
    int index;
    stack<int> mystack;
};
```
---
### [402.移掉K位数字](https://leetcode-cn.com/problems/remove-k-digits/)
**单调栈 + 贪心**
* 对于每个数字，如果该数字小于栈顶元素，我们就不断地弹出栈顶元素，直到
>栈为空

>或者新的栈顶元素不大于当前数字

>或者我们已经删除了 k 位数字
```C++
class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() == k) return "0";
        if (k == 0) return num == "" ? "0" : num;
        string result;
        for (int i = 0; i < num.size(); ++i)
        {
            while (result.size() != 0 && num[i] < result.back() && k != 0)//num[i] 不能等于栈顶元素
            {
                result.pop_back();
                --k;
            }
            if (result.size() == 0 && num[i] == '0')
                continue;
            result += num[i];
        }
        while (k != 0)
        {
            result.pop_back();
            --k;
        }
        return result == "" ? "0" : result; //判空
    }
};
```
---
### [316.去除重复字母](https://leetcode-cn.com/problems/remove-duplicate-letters/solution/qu-chu-zhong-fu-zi-mu-by-leetcode-soluti-vuso/)
### [1081.不同字符的最小子序列](https://leetcode-cn.com/problems/smallest-subsequence-of-distinct-characters/)
**单调栈**
* 去重
* 去重字符串中的字符顺序不能打乱字符出现的相对顺序
* 字典序最小
```C++
class Solution {
public:
    string removeDuplicateLetters(string s) {
        if (s.empty()) return "";
        string result;//保存结果的栈（string直接输出比用stack倒序输出要方便简单一些）
        vector<int> count(26, 0);//字符在s中出现的总次数
        vector<bool> visited(26, false);//判断字符数否入栈过
        for (auto ch : s)
        {
            count[ch - 'a']++;
        }
        for (auto ch : s)
        {
            count[ch - 'a']--;//用一次、少一次
            if (visited[ch - 'a'])
            {
                continue;
            }
            while (result.size() != 0 && ch < result.back())
            {            
                auto temp = result.back();
                if (count[temp - 'a'] == 0) break;//这个字符是最后一个，必须保留
                result.pop_back();
                visited[temp - 'a'] = false;//出栈后，字符入栈状态改为false，此时后续相同字符又可以重新进栈
            }
            result += ch;//进栈
            visited[ch - 'a'] = true;
        }
        return result;
    }
};

```
---
### [321.拼接最大数](https://leetcode-cn.com/problems/create-maximum-number/solution/c-dan-diao-zhan-pin-jie-tiao-li-qing-xi-nrnu1/)
* 思路
    1. 从num1中选出长度为l1的最大子序列**单调栈**
    2. 从num2中选出长度为k-l1的最大子序列
    3. 合并得到当前情况下( k = l1 + [k - l1])最大和子序列（最大的序列等于两者的“拼接”）
    4. 循环改变l1并实时维护最大值             
```C++
class Solution {
public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        if (k == 0) return{};
        int m = nums1.size();
        int n = nums2.size();
        vector<int> result(k, 0);
        for (int l1 = 0; l1 <= k && l1 <= m; ++l1)
        {
            //长度为m中挑选l1个,另一个数组中中挑选k-l1个；
            if (k - l1 > n) continue;
            auto maxInNums1 = lDigits(nums1, l1);
            auto maxInNums2 = lDigits(nums2, k - l1);
            auto maxMerge = merge(maxInNums1, maxInNums2);
            result = max(result, maxMerge);
        }
        return result;
    }

    vector<int> lDigits(vector<int>& nums,int l) //长度为l的最大子序列,且不改变相对次序
    {
        if (l == 0) return {};
        int n = nums.size();
        if (l == n) return nums;
        vector<int> mystack;  
        vector<int> result;  
        for (int i = 0; i < n; ++i)
        {
            while (!mystack.empty() && nums[i] > nums[mystack.back()])
            {
                if (mystack.size() + n - i == l)
                    break;
                mystack.pop_back();
            }
            mystack.push_back(i);
        }
        for (auto it = mystack.begin(); it != mystack.begin() + l; ++it)
            result.push_back(nums[*it]);
        return result;
    }

    vector<int> merge(vector<int>& nums1, vector<int>& nums2)//拼接
    {
        if (nums1.empty()) return nums2;
        if (nums2.empty()) return nums1;
        vector<int> result;
        deque<int> d1(nums1.begin(), nums1.end());
        deque<int> d2(nums2.begin(), nums2.end());
        while (!d1.empty() && !d2.empty())//把两队列“头”大者取出来，并更新“头”，保证顺序
        {
            if (d1 > d2)//stl容器的比较
            {
                result.push_back(d1.front());
                d1.pop_front();
            }
            else
            {
                result.push_back(d2.front());
                d2.pop_front();
            }
        }
        if (d1.empty())//添加剩下的部分
            result.insert(result.end(), d2.begin(), d2.end());
        result.insert(result.end(), d1.begin(), d1.end());
        return result;
    }   
};
```
> 这是基于思路的简单实现，具体的优化就不做进一步阐述了

---
### [239.滑动窗口最大值](https://leetcode-cn.com/problems/sliding-window-maximum/)
* 维护一个有序序列window
* **第一大元素也就是这个 window.front() 在窗口内**，那我们可以**不用管**第二大第三大元素在不在区间内了。因为答案一定是这个第一大元素。如果 window.front() 不在窗口内，则将其弹出，第二个大元素变成第一大元素，第三大元素变成第二大元素以此类推
1. 优先队列
```C++
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (k == 1) return nums;
        int size = nums.size();
        priority_queue<pair<int, int>> window;

        for (int i = 0; i < k; ++i)
        {
            window.emplace(nums[i], i);
        }
        vector<int> result;
        result.push_back(window.top().first);

        for (int i = k; i < size; ++i)
        {
            window.emplace(nums[i], i);
            while (window.top().second <= i - k) 
                window.pop();
            result.push_back(window.top().first);  
        }
        return result;       
    }
};
```
2. 单调队列
```C++
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (k == 1) return nums;
        int size = nums.size();
        deque<int> window;
        for (int i = 0; i < k; ++i)
        {
            while (!window.empty() && nums[i] > nums[window.back()])
            {
                window.pop_back();
            }
            window.push_back(i);
        }

        vector<int> result;
        result.push_back(nums[window.front()]);

        for (int i = k; i < size; ++i)
        {
            while (!window.empty() && window.front() <= i - k)
                window.pop_front();
            while (!window.empty() && nums[i] > nums[window.back()])
            {
                window.pop_back();
            }
            window.push_back(i);
            result.push_back(nums[window.front()]);
        }
        return result;
    }
};
```
---
### [剑指Offer09.用两个栈实现队列](https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/)
*
```C++
class CQueue {
public:
    CQueue() {
        while (!s1.empty()) s1.pop();
        while (!s2.empty()) s2.pop();
    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) return -1;
        else
        {
            auto dele = s2.top();
            s2.pop();
            return dele;
        }
    }
private:
    stack<int> s1;
    stack<int> s2;
};
```
### [706.设计哈希映射](https://leetcode-cn.com/problems/design-hashmap/)
1. 一维数组
```C++
class MyHashMap {
public:
    MyHashMap() {
        data = vector<int>(1000001, -1);
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key] = -1;
    }
private:
    vector<int> data;
};
```
2. 二维数组(稀疏矩阵节省空间)
```C++
class MyHashMap {
public:

    MyHashMap() {
        data.resize(N);
    }

    void put(int key, int value) {
        int key1 = getHashKey1(key);
        int key2 = getHashKey2(key);
        if (data[key1].empty()) data[key1].resize(N, -1);
        data[key1][key2] = value;
    }

    int get(int key) {
        int key1 = getHashKey1(key);
        int key2 = getHashKey2(key);
        if (!data[key1].empty()) return data[key1][key2];
        return -1;
    }

    void remove(int key) {
        int key1 = getHashKey1(key);
        int key2 = getHashKey2(key);
        if (!data[key1].empty()) data[key1][key2] = -1;
    }
private:
    int getHashKey1(int key) {return key % N;}
    int getHashKey2(int key) {return key / N;}
    vector<vector<int>> data;
    int N = 1001;
};
```
3. 链地址法
```C++
class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() : data(N) {
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int hashKey = hash(key);
        for (auto it = data[hashKey].begin(); it != data[hashKey].end(); it++)
            if ((*it).first == key)
            {
                (*it).second = value;
                return;
            }
        data[hashKey].emplace_back(key, value);
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int hashKey = hash(key);
        for (auto it = data[hashKey].begin(); it != data[hashKey].end(); it++)
            if ((*it).first == key)
                return (*it).second;
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int hashKey = hash(key);
        for (auto it = data[hashKey].begin(); it != data[hashKey].end(); it++)
            if ((*it).first == key)
            {
                data[hashKey].erase(it);
                return;
            }
    }
private:
    const int N = 769;
    vector<list<pair<int, int>>> data;
    int hash(int key) {return key % N;};
};
```
---

## 数组
***tip二分法***
### [875.爱吃香蕉的珂珂](https://leetcode-cn.com/problems/koko-eating-bananas/)
* 最少可以吃一颗，最多吃最大堆的香蕉数量
* 由此可知，暴力遍历1-max可以求解，由小到大枚举，满足条件的第一个数据就是所需数据
* 联想用**二分**进行优化
```C++
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (!valid(piles, mid, H))
            {
                lo = mid + 1;
            }
            else 
                hi = mid;
        }
        return lo;
    }

    bool valid(vector<int>& piles, int speed, int H)
    {
        int totolTime = 0;
        for (auto p : piles)
        {
            totolTime += p/speed;
            if (p % speed != 0)
                 totolTime++;
        }
        return totolTime <= H;
    }
};
```
---

### [1011.在D天内送达包裹的能力](https://leetcode-cn.com/problems/capacity-to-ship-packages-within-d-days/)

```C++
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (!valid(weights, mid, D))
            {
                lo = mid + 1;
            }
            else 
                hi = mid;
        }
        return lo;
    }
    bool valid(vector<int>& weights, int loader, int D)
    {
        int sum = 0;
        int day = 0;
        for (int i = 0; i < weights.size(); ++i)
        {
            sum += weights[i];
            if (sum > loader)
            {
                day++;
                sum = weights[i];
            }
            if (sum == loader)
            {
                day++;
                sum = 0;
            }
        }
        if (sum != 0)
            day++;
        return day <= D;
    }
};
```
---
***tip滑动窗口***

### [76.最小覆盖子串](https://leetcode-cn.com/problems/minimum-window-substring/submissions/)
* **滑动窗口**，详见[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247485141&idx=1&sn=0e4583ad935e76e9a3f6793792e60734&chksm=9bd7f8ddaca071cbb7570b2433290e5e2628d20473022a5517271de6d6e50783961bebc3dd3b&scene=21#wechat_redirect)
```C++
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;
        for (auto c : t) need[c]++;
        int left = 0, right = 0;
        int valid = 0;
        int start = 0;
        int len = INT_MAX;
        while (right < s.size())
        {
            char ch = s[right];     
            if (need.count(ch) != 0)
            {
                window[ch]++;
                if (window[ch] == need[ch])
                    valid++;
            }
            right++;
            
            while (valid == need.size())
            {
                if (right - left < len)
                {
                    start = left;
                    len = right - left;
                }
                char ch = s[left];
                
                if (need.count(ch) != 0)
                {
                    if (window[ch] == need[ch])
                        valid--;
                    window[ch]--;
                }
                left++;
            }

        }
        return len == INT_MAX ? "" : s.substr(start, len);
        }
};
```
---

### [567.字符串的排列](https://leetcode-cn.com/problems/permutation-in-string/)
* **滑动窗口**，详见[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247485141&idx=1&sn=0e4583ad935e76e9a3f6793792e60734&chksm=9bd7f8ddaca071cbb7570b2433290e5e2628d20473022a5517271de6d6e50783961bebc3dd3b&scene=21#wechat_redirect)
```C++
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> need, window;
        for (auto ch : s1) need[ch]++;
        int left = 0, right = 0;
        int valid = 0;

        while (right < s2.size())
        {
            char ch = s2[right];
            if (need.count(ch) != 0)
            {
                window[ch]++;
                if (window[ch] == need[ch])
                    valid++;
            }
            right++;

            while (right - left >= s1.size())
            {
                if (valid == need.size())
                    return true;
                char ch = s2[left];
                if (need.count(ch) != 0)
                {
                    if (window[ch] == need[ch])
                        valid--;
                    window[ch]--;
                }
                left++;
            }
        }
        return false;
    }
};
```
---

### [438.找到字符串中所有字母异位词](https://leetcode-cn.com/problems/find-all-anagrams-in-a-string/)
* **滑动窗口**，详见[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247485141&idx=1&sn=0e4583ad935e76e9a3f6793792e60734&chksm=9bd7f8ddaca071cbb7570b2433290e5e2628d20473022a5517271de6d6e50783961bebc3dd3b&scene=21#wechat_redirect)
```C++
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        unordered_map<char, int> need, window;
        for (auto ch : p) need[ch]++;
        int left = 0, right = 0;
        int valid = 0;
        while (right < s.size())
        {
            char ch = s[right];
            if (need.count(ch) != 0)
            {
                window[ch]++;
                if (window[ch] == need[ch])
                    valid++;
            }
            right++;

            while (right - left >= p.size())
            {
                if (valid == need.size())
                    res.push_back(left);
                char ch = s[left];
                if (need.count(ch) != 0)
                {
                    if (window[ch] == need[ch])
                        valid--;
                    window[ch]--;
                }
                left++;
            }
        }
        return res;
    }
};
```
---

### [3.无重复字符的最长子串](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/)
* **滑动窗口**，详见[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247485141&idx=1&sn=0e4583ad935e76e9a3f6793792e60734&chksm=9bd7f8ddaca071cbb7570b2433290e5e2628d20473022a5517271de6d6e50783961bebc3dd3b&scene=21#wechat_redirect)
```C++
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>window;
        int left = 0, right = 0, res = 0;
        while (right < s.size())
        {
            char ch = s[right];
            window[ch]++;
            right++;
            while (window[ch] > 1)
            {
                char ch = s[left];
                window[ch]--;
                left++;
            }
            res = max(res, right - left);
        }
        return res;
    }
};
```
---
### [30.串联所有单词的子串](https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/)
* **滑动窗口**，详见[题解](https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-w-6/)
```C++
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len = INT_MAX;
        int left = 0, right = 0;
        int sum = 0;
        while (right < nums.size())
        {
            sum += nums[right];
            right++;
            while (sum >= s)
            {
                len = min(len, right - left);
                sum -= nums[left];
                left++;
            }          
        }
        return len == INT_MAX ? 0 : len;
    }
};

```
---
### [209.长度最小的子数组](https://leetcode-cn.com/problems/minimum-size-subarray-sum/)
* **滑动窗口**
```C++
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if (s.empty() || words.empty()) return {};
        int wordwidth = words.at(0).size();
        int wordsnum = words.size();
        unordered_map<string, int> need, window;
        for (auto s : words) need[s]++;
         
        vector<int> res;

        for (int left = 0; left + wordwidth * wordsnum <= s.size(); left++)
        {
            int right = left;
            for (; right < left + wordwidth * wordsnum; right += wordwidth)
            {
                string str = s.substr(right, wordwidth);
                if (need.count(str) == 0)
                    break;
                window[str]++;
                if (window[str] > need[str])
                    break;
            }
            if (right == (left + wordwidth * wordsnum))
                res.push_back(left);
            window.clear();
        }
        return res;
    }
};

```
---
### [632.最小区间](https://leetcode-cn.com/problems/smallest-range-covering-elements-from-k-lists/)
1. **堆**
    * [参考](https://leetcode-cn.com/problems/smallest-range-covering-elements-from-k-lists/solution/xin-ping-zhuang-jiu-jiu-zhe-ti-jiu-shi-he-bing-kge/),类似**合并K个有序链表**
```C++
class Solution {
    typedef pair<int, pair<int, int>> Val_Row_Col;//val具体数值, row在那个列表, col列表的第几个数字
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxNum = -100001;
        int start = -100001;
        int end = 100001;
        priority_queue<Val_Row_Col, vector<Val_Row_Col>, greater<Val_Row_Col>> myQue;
        for (int row = 0; row < n; ++row)
        {
            myQue.push(make_pair(nums[row][0], make_pair(row, 0)));
            maxNum = max(maxNum, nums[row][0]);
        }
        while (myQue.size() == n)
        {
            auto temp = myQue.top();
            myQue.pop();
            int minvalue = temp.first;
            int row = temp.second.first;
            int col = temp.second.second;
            if (maxNum - minvalue < end - start)
            {
                end = maxNum;
                start = minvalue;
            }
            if (col + 1 < nums[row].size())
            {
                myQue.push(make_pair(nums[row][col + 1], make_pair(row, col + 1)));
                maxNum = max(maxNum, nums[row][col + 1]);
            }
        }
        return {start, end};
    }
};
```

2. **哈希** + **滑动窗口**
    * [参考](https://leetcode-cn.com/problems/smallest-range-covering-elements-from-k-lists/solution/pai-xu-hua-chuang-by-netcan/)
```C++
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int, int>> val_Row;//val保存值， row表示位于那个列表
        int n = nums.size();
        for (int row = 0; row < n; ++row)
            for (auto num : nums[row])
                val_Row.push_back(make_pair(num, row));
        sort(val_Row.begin(), val_Row.end());

        int left = 0, right = 0;
        int start = 0, end = 0;
        int len = INT_MAX;
        unordered_map<int, int> window;

        while (right < val_Row.size())
        {
            int row = val_Row[right].second;
            window[row]++;
            right++;
            while (window.size() == n)//包含了每个列表的数，则可以开始收缩
            {
                auto newLen = val_Row[right - 1].first - val_Row[left].first;
                if (newLen < len)
                {
                    start = val_Row[left].first;
                    end = val_Row[right - 1].first;
                    len = newLen;
                }
                int row = val_Row[left].second;
                window[row]--;
                left++;
                if(window[row] == 0){//当window[row]没有数据， 应删除对应关系（size应-1），因为window[row] == 0,window[row]仍然存在，此时window.size()就会出错
                    window.erase(row);
                }
            }
        }       
        return {start, end};
    }
};
```
+++
```C++
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int, int>> val_Row;
        int n = nums.size();
        for (int row = 0; row < n; ++row)
            for (auto num : nums[row])
                val_Row.push_back(make_pair(num, row));
        sort(val_Row.begin(), val_Row.end());

        int left = 0, right = 0;
        int start = 0, end = 0;
        int len = INT_MAX;
        unordered_map<int, int> window;

        while (right < val_Row.size())
        {
            int row = val_Row[right].second;
            window[row]++;
            while (window.size() == n)
            {
                auto newLen = val_Row[right].first - val_Row[left].first;
                if (newLen < len)
                {
                    start = val_Row[left].first;
                    end = val_Row[right].first;
                    len = newLen;
                }
                int row = val_Row[left].second;
                window[row]--;
                left++;
                if(window[row] == 0){
                    window.erase(row);
                }
                
            }
            right++;
        }      
        return {start, end};
    }
};
```
---

***O(1) 时间，我能查找/删除数组中的任意元素***
### [380.常数时间插入、删除和获取随机元素](https://leetcode-cn.com/problems/insert-delete-getrandom-o1/)
* **哈希 + 数组**
* 关键在于删除元素时，首先将**待删除元素**与**数组尾部元素**交换，因为删除数组尾部的数据时间为O(1)[pop_back]
* rand()随机数，返回0-RAND_MAX(32727?)
```C++
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        nums.clear();
        val_Index.clear();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (val_Index.count(val) != 0)
            return false;
        val_Index[val] = nums.size();//记录在vector中的顺序
        nums.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (val_Index.count(val) == 0)
            return false;
        int index = val_Index[val];
        val_Index[nums.back()] = index;//保证删除后容器中剩余元素的index仍是连续的，才能够继续索引
        swap(nums[index], nums.back());//此处要用nums[index], 直接用val会交换形参val，而实际对应val的数组值nums[val]仍然没有被交换
        nums.pop_back();
        val_Index.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return nums.at(rand() % nums.size());
    }
private:
    vector<int> nums;
    unordered_map<int, int> val_Index;
};

```
---

### [710.黑名单中的随机数](https://leetcode-cn.com/problems/random-pick-with-blacklist/)
* 参考[题解](https://leetcode-cn.com/problems/random-pick-with-blacklist/solution/xiang-jie-ti-mu-si-lu-ji-guan-fang-ti-jie-by-luo-z/)
* 将**黑名单映射到白名单**，再取随机数！
```C++
class Solution {
public:
    Solution(int N, vector<int>& blacklist) {
        blackToWhite.clear();
        sizeOfWhite = N - blacklist.size();//白名单大小，最后从这个范围里面选择数据即可
        unordered_set<int> w;//erase方便删除
        for (int i = sizeOfWhite; i < N; ++i) w.insert(i);
        for (auto b : blacklist) w.erase(b);//保存sizeOfWhite之后的白名单数据
        auto it = w.begin();
        for (auto b : blacklist)
        {
            if (b < sizeOfWhite)
                blackToWhite[b] = *it++;//sizeOfWhite之前的黑名单数据映射到sizeOfWhite之后的白名单数据（两者数量一定相等）
        } 
    }
    
    int pick() {
        int temp = rand() % sizeOfWhite;
        return blackToWhite.count(temp) ? blackToWhite[temp] : temp;
    }
private:
    int sizeOfWhite;
    unordered_map<int, int> blackToWhite;
};
```
---

### [26.删除排序数组中的重复项](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions/)
* **双指针**， 慢指针slow走在后面，快指针fast走在前面探路，找到一个不重复的元素就告诉slow并让slow前进一步。
```C++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int slow = 0;
        int fast = 0;
        while (fast < nums.size())
        {
            if (nums[fast] != nums[slow])
            {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        }
        return slow + 1;//slow是index，相应长度要 + 1
    }
};
```
---

### [83.删除排序链表中的重复元素]()
* **双指针**同上
```C++
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr)
        {
            if (fast->val != slow->val)
            {
                slow->next = fast;
                slow = slow->next;
            }
            fast = fast->next;
        }
        slow->next = nullptr;
        return head;
    }
};
```
---

### [27.移除元素](https://leetcode-cn.com/problems/remove-element/)
* **双指针** 
```C++
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        if (size == 0) return 0;
        int slow = 0;
        int fast = 0;
        while (fast < size)
        {
            if (nums[fast] != val)
            {
                nums[slow++] = nums[fast];//此处++后，结果已经 + 1 ，return时不需要重新+1
            }
            fast++;
        }
        return slow;
    }
};
```
---

### [283.移动零](https://leetcode-cn.com/problems/move-zeroes/)
1. **双指针** + **末尾补0**
```C++
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.empty()) return;
        int slow = 0;
        int fast = 0;
        while(fast < nums.size())
        {
            if (nums[fast] != 0)
            {
                nums[slow++] = nums[fast];
            }
            fast++;
        }
        while(slow < nums.size())
        {
            nums[slow++] = 0;
        }
    }
};
```
2. **双指针** + **swap**
```C++
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.empty()) return;
        int left = 0;
        int right = 0;
        while(right < nums.size())
        {
            if (nums[right] != 0)
            {
                swap(nums[left++], nums[right]);
            }
            right++;
        }
    }
};
```
---
### [1.两数之和](https://leetcode-cn.com/problems/two-sum/)
* **哈希表**
```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.empty()) return {};
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i)
            map[nums[i]] = i;
        for (int i = 0; i < nums.size(); ++i)
        {
            int temp = target - nums[i];
            if (map.count(temp) != 0 && map[temp] != i)
                return {i, map[temp]};
        }
        return {};
    }
};
```
---
### [167.两数之和II-输入有序数组](https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/)
1. **哈希**
```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int N = numbers.size();
        if (N == 0) return {};
        unordered_map<int, int> index;
        for (int i = 0; i < N; ++i)
            index[numbers[i]] = i;
        for (int i = 0; i < N; ++i)
        {
            int dif = target - numbers[i];
            if (index.count(dif) != 0 && index[dif] != i)
            {
                if (index[dif] < i)
                    return {index[dif] + 1, i + 1};
                else
                    return {i + 1, index[dif] + 1};
            }
        }
        return {};
    }
};
```
2. 借助题目给出的**有序**信息，可以通过确定一个数，再用**二分**搜索另一个来实现
```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int N = numbers.size();
        for (int i = 0; i < N; ++i)
        {
            int lo = i + 1; 
            int hi = N - 1;
            while (lo <= hi)
            {
                int mid = (hi - lo) / 2 + lo;
                if (numbers[mid] == target - numbers[i])
                    return {i + 1, mid + 1};
                else if (numbers[mid] < target - numbers[i])
                    lo = mid + 1;
                else   
                    hi = mid - 1;
            }
        }
        return {-1, -1};
    }
};
```
3. **双指针收缩**，一个指向最小，一个指向最大，再收缩
```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() -1;
        while (left < right)
        {
            if (numbers[left] + numbers[right] == target)
                return {left + 1, right + 1};
            else if (numbers[left] + numbers[right] < target)
                ++left;
            else
                --right;
        }
        return {-1, -1};
    }
};
```
---
### [653.两数之和IV-输入BST](https://leetcode-cn.com/problems/two-sum-iv-input-is-a-bst/)
* **中序遍历**成有序数组 + **收缩指针**
```C++
class Solution {
public:
    vector<int> result;
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        for (int left = 0, right = result.size() - 1;left < right; )
        {
            if (result[left] + result[right] == k)
                return true;
            else if (result[left] + result[right] < k)
                ++left;
            else   
                --right;
        }
        return false;
    }
    void inorder(TreeNode* root)
    {
        if (root == nullptr) return;
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
    }
};
```
---
### [15.三数之和](https://leetcode-cn.com/problems/3sum/submissions/)
* **排序** + **两数之和通用去重复解法**
* 详见[题解](https://leetcode-cn.com/problems/3sum/solution/yi-ge-fang-fa-tuan-mie-by-labuladong/)
```C++
/* 注意：调用这个函数之前一定要先给 nums 排序 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());//务必排序，达到去重效果
        return nSumTarget(nums, 3, 0, 0);
    }
    vector<vector<int>> nSumTarget(vector<int>& nums, int n, int start, int target)
    {
        int size = nums.size();
        vector<vector<int>> result;
        if (size < 2 || size < n) return result;
        if (n == 2)//两数之和
        {
            int lo = start;
            int hi = size - 1;
            while (lo < hi)
            {
                int temp_left = nums[lo];
                int temp_right = nums[hi];
                if (nums[lo] + nums[hi] == target) 
                {
                    result.push_back({nums[lo], nums[hi]});
                    while (lo < hi && nums[lo] == temp_left) lo++;
                    while (lo < hi && nums[hi] == temp_right) hi--;
                }
                else if (nums[lo] + nums[hi] < target)
                {
                    while (lo < hi && nums[lo] == temp_left) lo++;
                }
                else 
                {
                    while (lo < hi && nums[hi] == temp_right) hi--;
                }
            }
        }
        else//多数之和，递归求解
        {
            for (int i = start; i < size; ++i)
            {
                auto subarray = nSumTarget(nums, n - 1, i + 1, target - nums[i]);
                for (auto& array_elem : subarray)
                {
                    array_elem.push_back(nums[i]);//加入提出来的数
                    result.push_back(array_elem);
                }
                while (i < size - 1 && nums[i] == nums[i + 1]) i++;//**后面**有相同的数直接跳过，避免重复
            }      
        }
        return result;
    }
};
```
---
### [18.四数之和](https://leetcode-cn.com/problems/4sum/)
* 同上
```C++
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std:sort(nums.begin(), nums.end());
        return nSumTarget(nums, 4, 0, target);
    }
    vector<vector<int>> nSumTarget(vector<int>& nums, int n, int start, int target)
    {
        int size = nums.size();
        vector<vector<int>> res;
        if (n < 2 || size < n) return res;

        if (n == 2)
        {
            int lo = start;
            int hi = size - 1;
            while (lo < hi)
            {
                int sum = nums[lo] + nums[hi];
                int templ = nums[lo];
                int tempr = nums[hi];
                if (sum == target)
                {
                    res.push_back({nums[lo], nums[hi]});
                    while (lo < hi && nums[lo] == templ) lo++;
                    while (lo < hi && nums[hi] == tempr) hi--;
                }
                else if (sum < target)
                {
                    while(lo < hi && nums[lo] == templ) lo++;
                }
                else
                {
                    while (lo < hi && nums[hi] == tempr) hi--;
                }
            }
        }
        else
        {
            for (int i = start; i < size; ++i)
            {
                auto subarr = nSumTarget(nums, n - 1, i + 1, target - nums[i]);
                for (auto& arr : subarr)
                {
                    arr.push_back(nums[i]);
                    res.push_back(arr);
                }
                while (i < size - 1 && nums[i] == nums[i + 1]) i++;
            }
        }
        return res;
    }
};
```
---
### [2.两数相加](https://leetcode-cn.com/problems/add-two-numbers/)
* **逐位相加**，考虑**进位值carry**和**当前位值curValue**
```C++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* left = nullptr;
        ListNode* right = nullptr;
        int carry = 0; //进位值
        while (l1 != nullptr || l2 != nullptr)
        {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;//易知当前位值位(n1 + n2 + carry) % 10,进位值为(n1 + n2 + carry) / 10
            int sum = n1 + n2 + carry;
            int curValue = sum % 10;
            carry = sum / 10;
            if (left == nullptr)
            {
                left = right = new ListNode(curValue);
            }
            else
            {
                right->next = new ListNode(curValue);
                right = right->next;
            }
            if (l1 != nullptr)//移至下一位
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        if (carry > 0)//最后有进位
        {
            right->next = new ListNode(carry);
        }
        return left;
    }
};
```
---
### [445.两数相加II](https://leetcode-cn.com/problems/add-two-numbers-ii/)
* **逆序问题** + **栈** + **两数相加**
```C++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;//逆序问题可以考虑用栈解决
        while (l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        ListNode* sumNode = nullptr;
        while (!s1.empty() || !s2.empty())
        {
            int n1 = s1.empty() ? 0 : s1.top();
            int n2 = s2.empty() ? 0 : s2.top();
            if (!s1.empty()) s1.pop();
            if (!s2.empty()) s2.pop();
            int curValue = (n1 + n2 + carry) % 10;
            carry = (n1 + n2 + carry) / 10;
            /*关键代码，保持头部是最新数据*/
            ListNode* temp = new ListNode(curValue);
            temp->next = sumNode;
            sumNode = temp;
        }
        if (carry != 0)
        {
            ListNode* newHead = new ListNode(carry);
            newHead->next = sumNode;
            return newHead;
        }
        return sumNode;     
    }
};
```
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
---

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

## 动态规划

### [322.零钱兑换](https://leetcode-cn.com/problems/coin-change/)
* **动态规划**，确定最优解**最少零钱数量**
* 状态转移的关系是dp[i] = min(dp[i], 1 + dp[i - coin])
```C++
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);//dp[a] = b, a指的是目标金额，b是零钱数量，初始化时将数量等于amount + 1，即为最大值
        dp[0] = 0;
        for (int i = 0; i <= amount; ++i)// i 是目标金额
        {
            for (auto coin : coins)
            {
                if (i - coin < 0) continue;
                dp[i] = min(dp[i], 1 + dp[i - coin]);//关键句
            }
        }
        return dp[amount] == amount + 1 ? -1 : dp[amount];
    }
};
```
---
***tip子序列类型问题***
### [1143.最长公共子序列](https://leetcode-cn.com/problems/longest-common-subsequence/)
* **动态规划**
* **dp[i][j]**：长度为[0, i - 1]（i）的字符串text1与长度为[0, j - 1]的字符串text2的最长公共子序列为dp[i][j]，所求即为dp[text1.size()][text2.size()]
```C++
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size() + 1;
        int n = text2.size() + 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 1; i < m; ++i)
            for (int j = 1; j < n; ++j)
            {
                if (text1[i - 1] == text2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        return dp[text1.size()][text2.size()];
    }
};
```
### [583.两个字符串的删除操作](https://leetcode-cn.com/problems/delete-operation-for-two-strings/)
* **基本同上**res = size1 + size2 - 2*最长子串长度
```C++
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));//dp[i][j]表示长度为i（0~i-1）的字符串1与长度为j（0~j-1）的字符串2的最长公共子串长度
        for (int i = 1; i < m + 1; ++i)
            for (int j = 1; j < n + 1; ++j)
            {
                if (word1[i - 1] == word2[j - 1])//注意-1
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);//dp[i-1][j-1]必然是最小的可以不用考虑
            }
        return m - dp[m][n] + n - dp[m][n];
    }
};
```
---
### [712.两个字符串的最小ASCII删除和](https://leetcode-cn.com/problems/minimum-ascii-delete-sum-for-two-strings/)
* dp[i][j]表示长度为i(0~i - 1)的字符串s1与长度为j(0~j - 1) 的字符串s2的最长公共子串所有字符的AscII和
```C++
class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));//dp[i][j]表示长度为i(0~i - 1)的字符串s1与长度为j(0~j - 1) 的字符串s2的最长公共子串所有字符的AscII和
        for (int i = 1; i < m + 1; ++i)
            for (int j = 1; j < n + 1; ++j)
            {
                if (s1.at(i - 1) == s2.at(j - 1))
                    dp[i][j] = s1[i - 1] + dp[i - 1][j - 1];//string到int 的隐式转换
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        //求s1s2所有字符ascII之和
        int sum = 0;
        for (auto s : s1)
            sum += s;
        for (auto s : s2)
            sum += s;
        return sum - 2*dp[m][n];
    }
};
```
---
---
### [72.编辑距离](https://leetcode-cn.com/problems/edit-distance/)
* 参考题解[题解](https://leetcode-cn.com/problems/edit-distance/solution/dong-tai-gui-hua-java-by-liweiwei1419/)
* **dp[i][j]含义**:长度为i(下标从0~i-1)的字符串word1与长度为j(下标从0~j-1)的字符串word2转换需要的步骤数
*  **当word1[i-1] == word2[j-1]**,dp[i][j] = dp[i-1][j-1];
*  **不相等时**：
  1. 增加: dp[i][j] = dp[i][j-1] + 1,word1的前i个字符变成word2的前j-1个字符，要dp[i][j-1]步，再增加word2的第j个字符，再+1步添加操作
  2. 删除: dp[i][j] = dp[i-1][j] + 1,word1的前i-1个字符变成word2的前j个字符，要dp[i-1][j]步，再删除word1的第i个字符，再+1步删除操作
  3. 替换：dp[i][j] = dp[i-1][j-1] + 1,word1的前i-1个字符变成word2的前j-1个字符，要dp[i-1][j-1]步，再+1步替换操作
* 取操作的最小次数即为所求，即dp[i][j] = min(insert, delete, replace)
```C++
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < m + 1; ++i)//base case ：word2为空，需要删除word1中的所有字符，所需步骤为word1长度i步
            dp[i][0] = i;
        for (int j = 0; j < n + 1; ++j)//base case ：word1为空，需要在word1中添加word2中的所有字符，所需步骤为word2长度j步
            dp[0][j] = j;
        for (int i = 1; i < m + 1; ++i)
            for (int j = 1; j < n + 1; ++j)
            {
                if (word1[i - 1] == word2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + 1);
            }
        return dp[m][n];//dp.back().back()
    }
};
```
---
### [300.最长递增子序列](https://leetcode-cn.com/problems/longest-increasing-subsequence/)
1. **动态规划**
   * dp[i]表示截止至nums[i]的最长递增子序列
   * dp[i] = 在nums[i]之前，所有小于nums[i]的数对应的最长子序列 + 1；
```C++
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);//basecase 每个数至少是他本身，即为1
        int maxlength = INT_MIN;
        for (int i = 1; i < nums.size(); ++i)
        {
            for (int j = i - 1; j >= 0; --j)
            {
                if (nums[j] < nums[i])
                    dp[i] = max(dp[i], dp[j] + 1);//dp[i]取此前所有小于它的数对应的最长子序列 + 1
            }
        }
        for (auto value : dp)
            maxlength = max(maxlength, value);
        return maxlength;
    }
};
```
2. **二分搜索**
   * minnums[i]表示长度为 i + 1 的所有上升子序列的**结尾的 最小值**
   * 原因：如果已经得到的上升子序列的**结尾的数越小**，遍历的时候后面接上一个数，就会有**更大的可能性**构成一个更长的上升子序列
   * 参考[题解](https://leetcode-cn.com/problems/longest-increasing-subsequence/solution/yi-bu-yi-bu-tui-dao-chu-guan-fang-zui-you-jie-fa-x/)
```C++
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> minnums;
        minnums.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > minnums.back())
                minnums.push_back(nums[i]);
            else
            {
                int left = 0, right = minnums.size() - 1;
                while (left < right)//二分搜索第一个大于等于nums[i]的位置
                {
                    int mid = (right - left) / 2 + left;
                    if (minnums[mid] < nums[i])
                    {
                        left = mid + 1;
                    }
                    else  
                        right = mid;
                }
                minnums[left] = nums[i];//minnums[right] = nums[i];
            }
        }
        return minnums.size();
    }
};
```
```C++
//利用标准库函数
class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        vector<int> minnums;
        for (auto v : nums)
        {
            auto pos = lower_bound(minnums.begin(), minnums.end(), v);//二分搜索，查找第一个大于等于v的数
            if (pos == minnums.end())
                minnums.push_back(v);
            else
                *pos = v;
        }
        return minnums.size();
    } 
};
```
---

### [354.俄罗斯套娃信封问题](https://leetcode-cn.com/problems/russian-doll-envelopes/)
1. dp[i]代表已以nums[i]结尾的最大递增子序列
* 依据w递增排序，当w相同时，按h降序
* 转化为求最长递增子序列问题
* dp[i]代表已以nums[i]结尾的最大递增子序列
```C++
class Solution {
public:
    static bool compare (const vector<int>& a, const vector<int>& b)
    {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        //依据w递增排序，当w相同时，按h降序
        sort(envelopes.begin(), envelopes.end(), compare);
        //最长递增子序列
        vector<int> dp(envelopes.size(), 1);//dp[i]代表已以nums[i]结尾的最大递增子序列
        for (int i = 1; i < envelopes.size(); ++i)
        {
            for (int j = i - 1; j >= 0; --j)
            {
                if (envelopes[j][1] < envelopes[i][1])
                    dp[i] = max(dp[i], dp[j] + 1);//>的情况并没有处理，因此dp[i]并不一定严格大于dp[i - 1](可能为初始值1)
            }
        }
        int maxlength = 0;
        for (auto ele : dp)
            maxlength = max(maxlength, ele);
        return maxlength;
    }
};
```
2. minnums[i]表示长度为 i + 1 的所有上升子序列的结尾的最小值
```C++
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
        });
        vector<int> minnums;//minnums[i]表示长度为 i + 1 的所有上升子序列的结尾的最小值
        for (auto env : envelopes)
        {
            auto pos = lower_bound(minnums.begin(), minnums.end(), env[1]);
            if (pos == minnums.end())
                minnums.push_back(env[1]);
            else 
                *pos = env[1];
        }
        return minnums.size();
    }
};
```
3. minnums[i]表示长度为 i + 1 的所有上升子序列的结尾的最小值
* 手撕二分
```C++
bool compare(const vector<int>& a, const vector<int>& b)
{
    return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
}
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        if (envelopes.size() < 2) return envelopes.size();
        sort(envelopes.begin(), envelopes.end(), compare);
        vector<int> minnums;
        minnums.push_back(envelopes[0][1]);//先放入一个
        for (int i = 1; i < envelopes.size(); ++i)
        {
            if (envelopes[i][1] > minnums.back())
                minnums.push_back(envelopes[i][1]);//大于所有数直接放入背后
            int left = 0;
            int right = minnums.size() - 1;
            while (left < right)
            {
                auto mid = (right - left) / 2 + left;
                if (minnums[mid] >= envelopes[i][1])
                    right = mid;
                else 
                    left = mid + 1;
            }
            minnums[left] = envelopes[i][1];
        }
        return minnums.size();
    }
};
```
---
### [53.最大子序和](https://leetcode-cn.com/problems/maximum-subarray/)
1. 动态规划 dp[i]表示长度为截止至nums[i]长度数组的最大子序和，所求即为dpp[size() - 1]
```C++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for (int i = 1 ; i < nums.size(); ++i)
        {
            dp[i] = max(nums[i], nums[i] + dp[i - 1]);
        }
        int maxsum = INT_MIN;
        for (auto num : dp)
            maxsum = max(maxsum, num);
        return maxsum;
    }
};
```
---
2. 动态规划 + **空间优化**
   * 实际dp[i]仅仅和dp[i-1]有关，可以空间优化
```C++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = nums[0];
        int cur = 0;
        int maxsum = pre;
        for (int i = 1 ; i < nums.size(); ++i)
        {
            cur = max(nums[i], nums[i] + pre);
            pre = cur;
            maxsum = max(maxsum, cur);
        }
        return maxsum;
    }
};
```
3. 数学意义简洁版
```C++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxsum = INT_MIN;
        for (auto num : nums)
        {
            sum = max(num, sum + num);
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};
```
4. **线段树**(**分治**)
    * 参考[题解](https://leetcode-cn.com/problems/maximum-subarray/solution/zui-da-zi-xu-he-by-leetcode-solution/)
```C++
class Solution {
public:
    struct Status
    {
        int leftsum;
        int rightsum;
        int totalsum;
        int maxsum;
    };
    Status pushUp(Status l, Status r)//整合左右子区间得到当前区间所需值
    {
        int totalsum = l.totalsum + r.totalsum;
        int leftsum = max(l.leftsum, l.totalsum + r.leftsum);
        int rightsum = max(r.rightsum, r.totalsum + l.rightsum);
        int maxsum = max((l.rightsum + r.leftsum), max(l.maxsum, r.maxsum));
        return {leftsum, rightsum, totalsum, maxsum};
    }
    Status get(vector<int> &nums, int l, int r)
    {
        if (l == r)
            return {nums[l], nums[l], nums[l], nums[l]};
        int mid = (r - l) / 2 + l;
        auto lsub = get(nums, l, mid);
        auto rsub = get(nums, mid + 1, r);
        return pushUp(lsub, rsub);
    }
    int maxSubArray(vector<int>& nums) {
        return get(nums, 0, nums.size() - 1).maxsum;
    }
};
```
### [516.最长回文子序列](https://leetcode-cn.com/problems/longest-palindromic-subsequence/)
* **动态规划**
* 遍历方式源于dp表，参考[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247484666&idx=1&sn=e3305be9513eaa16f7f1568c0892a468&chksm=9bd7faf2aca073e4f08332a706b7c10af877fee3993aac4dae86d05783d3d0df31844287104e&scene=21#wechat_redirect)
* dp 数组的定义是：在子串s[i..j]中，最长回文子序列的长度为dp[i][j]
```C++
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i)
            dp[i][i] = 1;//长度为1的字符串，子序列为1
        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = i + 1; j < n; ++j)//注意遍历顺序
            {
                if (s[i] == s[j])
                    dp[i][j] = 2 + dp[i + 1][j - 1];
                else
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
        return dp[0][n - 1];
    }
};
```
---
### [416.分割等和子集](https://leetcode-cn.com/problems/partition-equal-subset-sum/)
* **动态规划**
* **0-1背包问题**
```C++
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto num : nums)
            sum += num;
        if (sum % 2 != 0) return false;
        int target = sum / 2;
        int n = nums.size();
        //dp[i][j]代表，前i个数字（0~i-1）中，是否有部分数据之和为j
        //target + 1的原因是考虑target可以从0开始，0~target共有target+1个数；
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
        for (int i = 0; i < n; ++i)
            dp[i][0] = true;//base case;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= target; ++j)
            {
                if (nums[i - 1] > j) dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];//nums[i - 1]才是第i个数
            }
        return dp[n][target];
    }
};
```
* **状态压缩**
```C++
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto num : nums)
            sum += num;
        if (sum % 2 != 0) return false;
        sum = sum / 2;
        int n = nums.size();
        vector<bool> dp(sum + 1, false);  
        dp[0] = true;
        for (int i = 0; i < n; ++i)
            for (int j = sum; j >= 0 ; --j)
            {
                if (nums[i] <= j) dp[j] = dp[j] || dp[j - nums[i]];             
            }
        return dp[sum];
    }
};
```
---
### [474.一和零](https://leetcode-cn.com/problems/ones-and-zeroes/)
* **动态规划**
```C++
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (auto s : strs)
        {
            int count_0 = 0;
            int count_1 = 0;
            for (auto ele : s)
            {
                if (ele == '0')
                    count_0++;
                else count_1++;
            }
            for (int i = m; i >= count_0; --i)//反向遍历
                for (int j = n; j >= count_1; --j)
                    dp[i][j] = max(dp[i - count_0][j - count_1] + 1, dp[i][j]);           
        }
        return dp[m][n];
    }
};
```
---
### [494.目标和](https://leetcode-cn.com/problems/target-sum/)
1. **二维dp**
* 首先，如果我们把 nums 划分成两个子集 A 和 B，分别代表分配 + 的数和分配 - 的数，那么他们和 S 存在如下关系：

> sum(A) - sum(B) = S
> sum(A) = S + sum(B)
> sum(A) + sum(A) = S + sum(B) + sum(A)
> 2 * sum(A) = S + sum(nums)
* 综上，可以推出 sum(A) = (S + sum(nums)) / 2，也就是把原问题转化成：**nums 中存在几个子集 A，使得 A 中元素的和为 (S + sum(nums)) / 2**

```C++
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {       
        int sum = 0;
        for (auto num : nums) sum += num;
        if (sum < S || (sum + S) % 2 != 0) return 0;
        //dp[i][j]表示只在 nums 的前 i 个元素中选择，若目标和为 j，则最多有 x 种方法划分子集
        vector<vector<int>> dp(nums.size() + 1, vector<int>((sum + S) / 2 + 1, 0));
        dp[0][0] = 1;//basecase空集和为零，只有一种
        for (int i = 1; i <= nums.size(); ++i)
            for (int j = 0; j <= (sum + S) / 2; ++j)
            {
                if (j - nums[i - 1] >= 0)//可选择放/不放，两者相加就是最终的结果
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
                else//nums[i - 1]这个数放不进去了，直接等于之前的结果 
                    dp[i][j] = dp[i - 1][j];
            }
        return dp[nums.size()][(sum + S) / 2];//返回0~nums.size() - 1,h和为sum + S)/2的方法
    }
};

```
2. **状态压缩**(**一维dp**)
```C++
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {       
        int sum = 0;
        for (auto num : nums) sum += num;
        if (sum < S || (sum + S) % 2 != 0) return 0;
        vector<int> dp((sum + S) / 2 + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= nums.size(); ++i)
            for (int j = (sum + S) / 2; j >= 0; --j)
            {
                if (j - nums[i - 1] >= 0)//可选择放/不放，两者相加就是最终的结果
                    dp[j] = dp[j] + dp[j - nums[i - 1]];
                else//nums[i - 1]这个数放不进去了，直接等于之前的结果 
                    dp[j] = dp[j];
            }
        return dp[(sum + S) / 2];
    }
};
```
3. 回溯 * 超时
```C++
class Solution {
public:
    int result = 0;
    int findTargetSumWays(vector<int>& nums, int S) {       
        if (nums.size() == 0) return 0;
        dfs(nums, 0, S);
        return result;
    }
    void dfs(vector<int>& nums, int i, int rest)//rest代表剩余的数。rest = 0就代表满足条件
    {
        if (i == nums.size())
        {
            if (rest == 0)
            {
                result++;
            }
            return;
        }
        vector<int> op{1, -1};
        for (auto ele : op)
        {
            rest += ele * nums[i];
            dfs(nums, i + 1, rest);
            rest -= ele * nums[i];
        }
    }
};
```
---
### [879.盈利计划](https://leetcode-cn.com/problems/profitable-schemes/)
* 实际上是个0-1背包问题，**可选物品对应某项工作**，即可选择做或不做某项工作；**背包容量对应人数和收益**，每当放进/不放物品（做/不做工作），都会对容量（人数、收益产生影响）
* dp定义：一维定义为物品，二维三维定义为人数和收益，即dp[i][j][k]表示选了i项工作，在j个人可用的情况下,获取至少k利润的方案数
1. **basecase**        
> 无人可用，此时利润有且只有0，对应方案只有1种：人可做工作
> 无人承担任何工作，此时利润也是有且只有0，对应方案只有1种：没人去做工作
2.  **dp转移方程**
> dp[i][j][k] = dp[i - 1][j][k];
> if (j >= curG_num)//第i项工作有足够的人可以做
>    dp[i][j][k] += dp[i - 1][j - curG_num][max(k - curG_pro, 0)];

```C++
class Solution {
public:
    const int Mod = 1e9 + 7; 
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int Gsum = group.size();
        //dp[i][j][k]表示选了i项工作，在j个人可用的情况下,获取至少k利润的方案数
        vector<vector<vector<int>>> dp(Gsum + 1, vector<vector<int>>(n + 1, vector<int>(minProfit + 1, 0)));
        //base case
        for (int i = 0; i <= Gsum; i++)//无人可用，此时利润有且只有0，对应方案只有1种：没人可做工作
            dp[i][0][0] = 1;
        for (int j = 0; j <= n; j++)//无人承担任何工作，此时利润也是有且只有0，对应方案只有1种：没人去做工作
            dp[0][j][0] = 1;
        for (int i = 1; i <= Gsum; i++)
        {
            int curG_num = group[i - 1];//当前工作对应所需要的人数
            int curG_pro = profit[i - 1];//当前工作对应可取得的收益
            for (int j = 1; j <= n; j++)
            {    
                for (int k = 0; k <= minProfit; k++)
                {
                    dp[i][j][k] = dp[i - 1][j][k];
                    if (j >= curG_num)//第i项工作有足够的人可以做
                        dp[i][j][k] += dp[i - 1][j - curG_num][max(k - curG_pro, 0)];//？
                    dp[i][j][k] %= Mod;
                }           
            }
        }
        return dp[Gsum][n][minProfit];
    }
};
```
**空间压缩优化**
```C++
class Solution {
public:
    const int Mod = 1e9 + 7;
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int WorkNum = group.size();
        vector<vector<int>> dp(n + 1, vector<int>(minProfit + 1, 0));
        for (int j = 0; j <= n; j++)
            dp[j][0] = 1;
        for (int i = 1; i <= WorkNum; i++)
        {
            for (int j = n; j >= 0; --j)
                for (int k = minProfit; k >= 0; --k)
                {
                    dp[j][k] = dp[j][k];
                    if (j >= group[i - 1])
                        dp[j][k] += dp[j - group[i - 1]][max(k - profit[i - 1], 0)];
                    dp[j][k] %= Mod;
                }
        }
        return dp[n][minProfit];
    }
};
```
---
### [518.零钱兑换II](https://leetcode-cn.com/problems/coin-change-2/)
* 完全背包问题 用二维dp；
* dp表示用到前i种硬币，凑成j的组合数
> 如果你不把这第i个物品装入背包，也就是说你不使用coins[i]这个面值的硬币，那么凑出面额j的方法数dp[i][j]应该等于dp[i-1][j]，继承之前的结果。
> 如果你把这第i个物品装入了背包，也就是说你使用coins[i]这个面值的硬币，那么dp[i][j]应该等于dp[i][j-coins[i-1]]。
```C++
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1, 0));//dp表示用到前i种硬币，凑成j的组合数
        //basecase
        for (int j = 0; j <= amount; j++)
            dp[0][j] = 0;
        for (int i = 0; i <= coins.size(); i++)
            dp[i][0] = 1;//dp[0][0]可以为1
        for (int i = 1; i <= coins.size(); i++)
            for (int j = 1; j <= amount; j++)
            {
                if (j >= coins[i - 1])//能放，可选择放或者不放
                    dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];//注意这里前半部分是dp[i]而不是dp[i - 1]，因为硬币是可以重复使用的
                else//放不了别无选择
                    dp[i][j] = dp[i - 1][j];
            }
        return dp[coins.size()][amount];
    }
};
```
* **优化**
```C++
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= coins.size(); ++i)
            for (int j = 1; j <= amount; ++j)
            {
                if (j >= coins[i - 1]) dp[j] += dp[j - coins[i-1]];
            }
        return dp[amount];
    }
};
```
---
### [1449.数位成本和为目标值的最大数字](https://leetcode-cn.com/problems/form-largest-integer-with-digits-that-add-up-to-target/)
1. 首先定义dp数组的含义：
    `dp[i][j]`表示从数组中选出**前i(下标为[0, i - 1])个数**，满足**总成本恰好为j**的“最大整数”
    > 注意,此处i刚好比实际下标大1，也就刚好满足题给数位（i + 1）这个要求，这个会在后面代码体现，牢记dp数组的含义，后面自然能够理解.

2. 找状态转移方程：
    在下标j - cost[i - 1]存在的前提下
    `dp[i][j] = maxresult(dp[i - 1][j], to_string(i) + dp[i][j - cost[i - 1]])`
    就是说我们选择了**第i个数**`cost[i - 1]`时，得到的总成本是不会超过当前想要的总成本`j`的,此时我们有两种选择：1.不把这个数放进去，那么结果就是dp[i - 1][j],即不放`cost[i - 1]`,满足总成本为j的最大整数；2.把这个数放进去，此时需要注意，数`cost[i - 1]`是可以重复使用的，因此是to_string(i) + **dp[i]**[j - cost[i - 1]]，这里用`to_string(i)`的原因就是上文提到的数位的变化。

3. base case：
    直接给出basecase
    ```cpp
        for (int j = 1; j <= target; ++j)
            dp[0][j] = "#";
        for (int i = 0; i <= n; ++i)
            dp[i][0] = "";
    ```
    "#"表示非法
    联系dp数组的含义，可以解读第一个循环的含义就是：
    > 一个数都不选，但要获得总成本为j，这显然是不可能的，故设为非法字符"#"
    第二个循环的含义：
    > 从选择的数中，让总成本为0，这是可能的，因为只要什么都不选就行了，因此并不“非法”，应该是="0",但**考虑到后面需要进行字符串的加法运算，所以让其为""空字符串**，才能满足。(比如1 + 0 = 1 但是"1" + "0" = "10")

4. 到这里，主要的部分已经阐述清楚了，还有一个比较大小的函数需要重新定义，因为这个函数需要有限考虑长度（如"10" > "5"），简单实现一下
    ```Cpp
    string maxresult(const string& s1, const string& s2)
    {
        if (s1.size() == s2.size())
            return max(s1, s2);
        return s1.size() > s2.size() ? s1 : s2;
    }
    ```

```cpp
class Solution {
public:
    string largestNumber(vector<int>& cost, int target) {
        int n = cost.size();
        vector<vector<string>> dp(n + 1, vector<string>(target + 1, ""));
        for (int j = 1; j <= target; ++j)
            dp[0][j] = "#";
        for (int i = 0; i <= n; ++i)
            dp[i][0] = "";

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= target; ++j)
            {
                if (j >= cost[i - 1] && dp[i][j - cost[i - 1]] != "#") dp[i][j] = maxresult(dp[i - 1][j], to_string(i) + dp[i][j - cost[i - 1]]);
                else dp[i][j] = dp[i - 1][j];
            }
        return dp[n][target] == "#" ? "0" : dp[n][target];
    }
    string maxresult(const string& s1, const string& s2)
    {
        if (s1.size() == s2.size())
            return max(s1, s2);
        return s1.size() > s2.size() ? s1 : s2;
    }
};
```
* **空间优化**
```C++
class Solution {
public:
    string largestNumber(vector<int>& cost, int target) {
        int n = cost.size();
        vector<string> dp(target + 1, "");
        for (int j = 1; j <= target; ++j)
            dp[j] = "#";       
        dp[0] = "";
        for (int i = 1; i <= n; ++i)
            for (int j = 0; j <= target; ++j)
            {
                if (j >= cost[i - 1] && dp[j - cost[i - 1]] != "#") dp[j] = maxresult(dp[j], to_string(i) + dp[j - cost[i - 1]]);
                else dp[j] = dp[j];
            }
        return dp[target] == "#" ? "0" : dp[target];
    }
    string maxresult(const string& s1, const string& s2)
    {
        if (s1.size() == s2.size())
            return max(s1, s2);
        return s1.size() > s2.size() ? s1 : s2;
    }
};
```
---贪心算法 - 区间调度问题
---
### [435.无重叠区间](https://leetcode-cn.com/problems/non-overlapping-intervals/)
* 排序
* 计算不相交区间个数count
* size - count
```C++
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() == 0 || intervals.size() == 1) return 0;
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){return a[1] < b[1];});//俺区间尾部大小排序
        int count = 1;//计算不相交区间个数
        int index = intervals.at(0).at(1);
        for (int i = 1; i < intervals.size(); ++i)
        {
            if (index <= intervals[i][0])
            {
                index = intervals[i][1];
                count++;
            }
        }
        return intervals.size() - count;
    }
};
```
---
### [452.用最少数量的箭引爆气球](https://leetcode-cn.com/problems/minimum-number-of-arrows-to-burst-balloons/)
* 贪心算法
* 和上题基本一样
```C++
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if (n == 0 || n == 1) return n;
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){return a.at(1) < b.at(1);});
        int index = points.at(0).at(1);
        int count = 1;
        for (int i = 1; i < n; ++i)
        {
            if (index < points[i].at(0))
            {
                index = points[i].at(1);
                count++;
            }
        }
        return count;
    }
};
```
---
### [56.合并区间](https://leetcode-cn.com/problems/merge-intervals/)
* 首先，我们将列表中的区间按照左端点升序排序。然后我们将第一个区间加入 result 数组中，并按顺序依次考虑之后的每个区间：

* 如果当前区间的左端点在数组 result 中最后一个区间的右端点之后，那么它们不会重合，我们可以直接将这个区间加入数组 result 的末尾；

* 否则，它们重合，我们需要用当前区间的右端点更新数组 result 中最后一个区间的右端点，将其置为二者的较大值。

```C++
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 0 || intervals.size() == 1) return intervals;
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); ++i)
        {
            int L = intervals[i][0], R = intervals[i][1];
            if (result.size() == 0 || result.back()[1] < L)
                result.push_back({L, R});
            else
                result.back()[1] = max(result.back()[1], R);
        }
        return result;
    }
};
```
---
### [57.插入区间](https://leetcode-cn.com/problems/insert-interval/)
1. 类似上面的做法
2. **模拟插入**
```C++
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int index = 0;//索引
        //找到开始合并的区间位置
        while (index < intervals.size() && intervals[index][1] < newInterval[0])
            result.push_back(intervals[index++]);
        //合并区间
        while (index < intervals.size() && intervals[index][0] <= newInterval[1])
        {
            newInterval[0] = min(intervals[index][0], newInterval[0]);
            newInterval[1] = max(intervals[index][1], newInterval[1]);
            index++;
        }
        result.push_back(newInterval);
        //处理剩余的
        while (index < intervals.size())
            result.push_back(intervals[index++]);
        return result;
    }
};
```
---
### [986.区间列表的交集](https://leetcode-cn.com/problems/interval-list-intersections/)
1. 暴力
```C++
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        if (firstList.size() == 0 || secondList.size() == 0) return {};
        vector<vector<int>> result;
        for (int i = 0; i < firstList.size(); ++i)
            for (int j = 0; j < secondList.size(); ++j)
            {
                auto res = Intersection(firstList[i], secondList[j]);
                if (res.size() == 0) continue;
                result.push_back(res);
            }
        return result;
    }
    vector<int> Intersection(vector<int>& a, vector<int>& b)
    {
        if (a.size() == 0 || b.size() == 0 || a[1] < b[0] || b[1] < a[0])
            return {};
        return {max(a[0], b[0]), min(a[1], b[1])};     
    }
};
```
2. 双指针 [参考](https://leetcode-cn.com/problems/interval-list-intersections/solution/jiu-pa-ni-bu-dong-shuang-zhi-zhen-by-hyj8/)
```C++
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        if (firstList.size() == 0 || secondList.size() == 0) return {};
        vector<vector<int>> result;
        int i = 0, j = 0;
        while (i < firstList.size() && j < secondList.size())
        {
            int left = max(firstList[i][0], secondList[j][0]);
            int right = min(firstList[i][1], secondList[j][1]);
            if (left <= right)  result.push_back({left, right});
            if (firstList[i][1] < secondList[j][1]) i++;
            else j++;
        }
        return result;
    }
};
```
---
### [763.划分字母区间](https://leetcode-cn.com/problems/partition-labels/)
* **贪心**
* 由于同一个字母只能出现在同一个片段，显然同一个字母的第一次出现的下标位置和最后一次出现的下标位置必须出现在同一个片段。因此需要遍历字符串，得到每个字母最后一次出现的下标位置。

```C++
class Solution {
public:
    vector<int> partitionLabels(string S) {
        int n = S.size();
        vector<int> lastpos(26, 0);
        for (int i = 0; i < n; ++i)
            lastpos[S[i] - 'a'] = i;
        vector<int> result;
        int start = 0, end = 0;
        for (int i = 0; i < n; ++i)
        {
            end = max(end, lastpos[S[i] - 'a']);
            if (i == end)
            {
                result.emplace_back(end - start + 1);
                start = end + 1;
            }
        }
        return result;
    }
};
```
---
### [55.跳跃游戏](https://leetcode-cn.com/problems/jump-game/)
* **贪心算法**
* 每一步都计算一下从当前位置最远能够跳到哪里，然后和一个全局最优的最远位置farthest做对比，通过每一步的最优解，更新全局最优解
* 算到倒数第二个，看最终长度是否能够超过长度
```C++
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxdistance = 0;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            maxdistance = max(maxdistance, i + nums[i]);
            if (maxdistance <= i) return false;
        }
        return true;//maxdistance >= nums.size() - 1;
    }
};
```
---
### [45.跳跃游戏II](https://leetcode-cn.com/problems/jump-game-ii/)
* **贪心算法**参考[题解](https://leetcode-cn.com/problems/jump-game-ii/solution/45-by-ikaruga/)
* i和end标记了可以选择的跳跃步数，maxpos标记了所有可选择跳跃步数[i..end]中能够跳到的最远距离，count记录了跳跃次数。
```C++
class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int start = 0;
        int end = 1;//前闭后开区间
        while (end < nums.size())
        {
            int maxpos = 0; 
            for (int i = start; i < end; ++i)
                maxpos = max(maxpos, i + nums[i]);
            start = end;
            end = maxpos + 1;
            count++;
        }
        return count;
    }
};
```
* **优化**
```C++
class Solution {
public:
    int jump(vector<int>& nums) {
        int maxpos = 0;
        int count = 0;
        int end = 0;//
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            maxpos = max(maxpos, i + nums[i]);
            if (i == end)
            {
                count++;
                end = maxpos;
            }
        }
        return count;
    }
};
```
---
### [10.正则表达式匹配](https://leetcode-cn.com/problems/regular-expression-matching/)
* **动态规划**
* 参考[题解](https://leetcode-cn.com/problems/regular-expression-matching/solution/shou-hui-tu-jie-wo-tai-nan-liao-by-hyj8/)
* 关键在于**分类讨论**和对**题目的理解**
```C++
class Solution {
public:
    bool isMatch(string s, string p) {
        int slength = s.size();
        int plength = p.size();
        //dp[][]表示s[0]~s[i - 1](长度为i)和p[0]~p[j - 1](长度为j)是否匹配哦
        vector<vector<bool>> dp(slength + 1, vector<bool>(plength + 1, false));
        /*base case*/
        //1. 均为空串，必然匹配
        dp[0][0] = true;
        //2. s不空，p为空
        for (int i = 1; i <= slength; ++i)
            dp[i][0] = false;
        //3. s空，p不空，必须要靠*消除字母后为空才能匹配
        for (int j = 1; j <= plength; ++j)
        {
            if (p[j - 1] == '*')
                dp[0][j] = dp[0][j - 2];
        }
        //状态转移.分类讨论
        for (int i = 1; i <= slength; ++i)
            for (int j = 1; j <= plength; ++j)
            {
                if (s[i - 1] == p[j - 1] || p[j - 1] == '.')
                    dp[i][j] = dp[i - 1][j - 1];
                else if (p[j - 1] == '*')
                {
                    if (s[i - 1] == p[j - 2] || p[j - 2] == '.')
                        dp[i][j] = dp[i][j - 2] || dp[i - 1][j - 2] || dp[i - 1][j];//*把前面的字符替换0次('a*' = '')，1次('a*' = 'a')，2次及以上('a*' = 'aaaaaaaa......')
                    else dp[i][j] = dp[i][j - 2];
                }
                else dp[i][j] = false;
            }
        return dp[slength][plength];
    }
};
```
---
### [887.鸡蛋掉落](https://leetcode-cn.com/problems/super-egg-drop/)
1. **递归** - > 超时 参考[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247484675&idx=1&sn=4a4ac1c0f1279530b42fedacc6cca6e6&chksm=9bd7fb0baca0721dda1eaa1d00b9a520672dc9d5c3be762eeca869be35d7ce232922ba8e928b&scene=21#wechat_redirect)
   * 关键要理解题意！
```C++
class Solution {
public:
    map<pair<int, int>, int> memo;//备忘录记录已经出现过的结果
    int superEggDrop(int k, int n) {
        return dfs(k, n);
    }
    int dfs(int k, int n)//k个鸡蛋，n层楼待扔
    {
        if (k == 1) return n;
        if (n == 0) return 0;
        int res = INT_MAX;
        if (memo.count(make_pair(k, n)) != 0) return memo[make_pair(k, n)];
        for (int i = 1; i <= n; ++i)
        {
            //碎了鸡蛋数量少一个，层数变为1-i-1，没碎鸡蛋数不变，层数变为n-i
            res = min(res, max(dfs(k - 1, i - 1), dfs(k, n - i)) + 1);
        }
        memo[make_pair(k, n)] = res;
        return res;
    }
};
```
1. **二分优化** 参考[题解](https://mp.weixin.qq.com/s?__biz=MzAxODQxMDM0Mw==&mid=2247484690&idx=1&sn=eea075701a5d96dd5c6e3dc6a993cac5&chksm=9bd7fb1aaca0720c58c9d9e02a8b9211a289bcea359633a95886d7808d2846898d489ce98078&scene=21#wechat_redirect)
```C++
class Solution {
public:
    map<pair<int, int>, int> memo;
    int superEggDrop(int k, int n) {
        return dfs(k, n);
    }
    int dfs(int k, int n)
    {
        if (k == 1) return n;
        if (n == 0) return 0;
        if (memo.count(make_pair(k, n)) != 0) return memo[make_pair(k, n)];
        int res = INT_MAX;
        int lo = 1;
        int hi = n;
        while (lo <= hi)
        {
            auto mid = (hi - lo) / 2 + lo;
            auto broken = dfs(k - 1, mid - 1);
            auto noBroken = dfs(k, n - mid);
            if (broken > noBroken)
            {
                hi = mid - 1;
                res = min(res, broken + 1);//+1
            }
            else
            {
                lo = mid + 1;
                res = min(res, noBroken + 1);
            }
        }
        memo[make_pair(k, n)] = res;
        return res;
    }
};
```
3. **改变状态转移方程**
```C++
class Solution {
public:
    int superEggDrop(int k, int n) {
//dp[k][m] = n
// 当前有 k 个鸡蛋，可以尝试扔 m 次鸡蛋
// 这个状态下，最坏情况下最多能确切测试一栋 n 层的楼
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));//最多可以尝试丢n次
        //basecase
        for (int i = 0; i <= k; i++)
            dp[i][0] = 0;
        for (int j = 0; j <= n; j++)
            dp[0][j] = 0;
        int m = 0;
        while (dp[k][m] < n)
        {
            m++;
            for (int i = 1; i <= k; i++)
                dp[i][m] = dp[i][m - 1] + dp[i - 1][m - 1] + 1;
        }
        return m;
    }
};
```
---
### [312. 戳气球](https://leetcode-cn.com/problems/burst-balloons/submissions/)
1. **回溯**-> 超时
```C++
class Solution {
public:
    int res = INT_MIN;
    int maxCoins(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        backtrack(nums, 0);
        return res;
    }
    void backtrack(vector<int>& nums, int sum)
    {
        if (nums.size() == 0)
        {
            res = max(res, sum);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            //选择
            auto temp = nums[i];
            int leftCoin = 0, rightCoin = 0;
            leftCoin = i == 0 ? 1 : nums[i - 1];
            rightCoin = i == nums.size() - 1 ? 1 : nums[i + 1];
            auto curCoins = leftCoin * nums[i] * rightCoin;

            nums.erase(nums.begin() + i);
            //回溯
            backtrack(nums, sum + curCoins);
            //撤销
            nums.insert(nums.begin() + i, temp);
        }
    }
};
```
2. **动态规划**
   * 建立DP数组，明确意义：dp[i][j]**表示戳破i~j之间（不包括ij）的气球可获得的最大硬币数量**，所求即为dp[0][n + 1];
   * base case ：区间大小为**0**，即没有气球可以戳破，一定为零
   * 状态转移方程：m为ij之间**最后一个戳破的气球**
     >dp[i][j] = max(dp[i][j], dp[i][m] + dp[m][j] + points>[i] * points[m] * points[j]);
   * tip：在两端补上两个数，防止越界，也更匹配dp数组的定义

```C++
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> points(n + 2, 1);
        for (int i = 0; i < n; i++)
            points[i + 1] = nums[i];//头尾加上1，方便计算
        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));//dp[i][j]表示戳破i~j之间（不包括ij）的气球可获得的最大硬币数量，所求即为dp[0][n + 1];
        //basecase
        /*for (int i = 0; i <= n; ++i)
        {
            dp[i][i] = 0;
            dp[i][i + 1] = 0;//没有气球可以戳破
        }
        dp[n + 1][n + 1] = 0;*/
        //状态转移方程
        for (int i = n; i >= 0; --i)
            for (int j = i + 1; j <= n + 1; ++j)
                for (int m = i + 1; m < j; ++m)//m为ij之间最后一个戳破的气球
                    dp[i][j] = max(dp[i][j], dp[i][m] + dp[m][j] + points[i] * points[m] * points[j]);
        return dp[0][n + 1];
    }
};
```
---
### [292.Nim游戏](https://leetcode-cn.com/problems/nim-game/)
1. **dp**
```C++
class Solution {
public:
    bool canWinNim(int n) {
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        dp[1] = true;
        dp[2] = true;
        dp[3] = true;
        for (int i = 4; i <= n; ++i)
            dp[i] = !dp[i - 1] || !dp[i - 2] || !dp[i - 3];
        return dp[n];
    }
};
```
2. **数学方法**
```C++
class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};
```
---
### [486.预测赢家](https://leetcode-cn.com/problems/predict-the-winner/)
* 这里定义 **dp[i][j] 表示作为先手，在区间 nums[i..j] 里进行选择可以获得的相对分数**。相对分数的意思是：当前自己的选择得分为正，对手的选择得分为负。「记忆化递归」里递归函数的返回值也类似地去理解。这种定义是比较常见的，也是符合当前这个问题的直接的定义。

在这个定义下，只需要判断输出 >= 0 即可。
1. **记忆化递归**（备忘录）
```C++
class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> memo(n, vector<int>(n, INT_MIN));
        return dfs(nums, 0, n - 1, memo) >= 0;
    }
    int dfs(vector<int>& nums, int i, int j, vector<vector<int>>& memo)
    {
        if (i > j) return 0;
        if (memo[i][j] != INT_MIN)  return memo[i][j];
        int left = nums[i] - dfs(nums, i + 1, j, memo);
        int right = nums[j] - dfs(nums, i, j - 1, memo);
        memo[i][j] = max(left, right);
        return memo[i][j];
    }
};
```
2. 动态规划
```C++
class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        //dp[i][j] 表示作为先手，在区间 nums[i..j] 里进行选择可以获得的相对分数
        vector<vector<int>> dp(n, vector<int>(n, 0));
        //basecase
        for (int i = 0; i < n; i++)
            dp[i][i] = nums[i];
        for (int i = n - 2; i >= 0; i--)
            for (int j = i + 1; j < n; j++)
                dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
        return dp[0][n - 1] >= 0;
    }
};
```
---
### [121.买卖股票的最佳时机](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/)
* 差值最大即可
* **记录最小值**和**最大差值**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxpro = 0;
        for(int price: prices)
        {
            maxpro = max (maxpro, price - minprice);
            minprice = min(minprice, price);
        }
        return maxpro;
    }
};
```
---
### [122.买卖股票的最佳时机II](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/)
1. **dfs**超时
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<int> memo(n, -1);
        return dfs(0, prices, memo);
    }
    int dfs(int buytime, vector<int>& prices, vector<int>& memo)
    {
        if (buytime >= prices.size() - 1) return 0;
        if (memo[buytime] != -1) return memo[buytime];
        int res = 0;
        int curmin = prices[buytime];
        for (int sell = buytime + 1; sell <= prices.size() - 1; sell++)
        {
            curmin = min(curmin, prices[sell]);
            res = max(res, dfs(sell + 1, prices, memo) + prices[sell] - curmin);
        }
        memo[buytime] = res;
        return res;
    }
};
```
2. **贪心**//总在股票比前一天高就卖出，低就买入
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        int res = 0;
        for (int i = 1; i < n; ++i)
        {
            if (prices[i] > prices[i - 1])
                res += prices[i] - prices[i - 1];
        }
        return res;
    }
};
```
3. **dp**
   * 定义状态dp[i][0] 表示第 i 天交易完后手里没有股票的最大利润，dp[i][1] 表示第 i 天交易完后手里持有一支股票的最大利润（i 从 0 开始）
   * basecase :第一天买了或者没买
   * 状态转移:
```C++
dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);//i天没有持有股票，有两种可能：前一天没有，前一天有，今天卖了；
dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);//类似
```
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //定义状态 \textit{dp}[i][0]dp[i][0] 表示第 i 天交易完后手里没有股票的最大利润，\textit{dp}[i][1]dp[i][1] 表示第 ii 天交易完后手里持有一支股票的最大利润（i 从 0 开始）
        if (n < 2) return 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        //basecase
        dp[0][0] = 0;//第一天，没有交易，为0；
        dp[0][1] = -prices[0];//第一天买了第一只股票，付了price[0]钱；
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);//i天没有持有股票，有两种可能：前一天没有，前一天有，今天卖了；
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);//类似
        }
        return dp[n - 1][0];//不持有股票赚的钱肯定不小于持有股票
    }
};
```
**优化**只和前一天有关系
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<int> dp(2, 0);
        //basecase
        dp[0] = 0;//第一天，没有交易，为0；
        dp[1] = -prices[0];//第一天买了第一只股票，付了price[0]钱；
        for (int i = 1; i < n; i++)
        {
            dp[0] = max(dp[0], dp[1] + prices[i]);//i天没有持有股票，有两种可能：前一天没有，前一天有，今天卖了；
            dp[1] = max(dp[1], dp[0] - prices[i]);//类似
        }
        return dp[0];//不持有股票赚的钱肯定不小于持有股票
    }
};
```

---
### [123.买卖股票的最佳时机III](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iii/)
1. **dfs**超时
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        map<pair<int, int>, int> memo;
        return dfs(0, 2, prices, memo);
    }
    int dfs(int start, int k, vector<int>& prices, map<pair<int, int>, int>& memo)
    {
        if (start >= prices.size() - 1) return 0;
        if (k == 0) return 0;
        if (memo.count(make_pair(start, k)) != 0) return memo[make_pair(start, k)];
        int res = 0;
        int curmin = prices[start];
        for (int sell = start + 1; sell < prices.size(); sell++)
        {
            curmin = min(curmin, prices[sell]);
            res = max(res, dfs(sell + 1, k - 1, prices, memo) + prices[sell] - curmin);
        }
        memo[make_pair(start, k)] = res;
        return res;
    }
};
```
2. **dp**
* dp含义，basecase，状态转移方程见代码备注
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        1. 没有操作
        2. 第一次买入
        3. 第一次卖出
        4. 第二次买入
        5. 第二次卖出
        dp[i][j]中 i表示第i天，j为 [0 - 4] 五个状态，dp[i][j]表示第i天状态j所剩最大现金。
        */
        vector<vector<int>> dp(prices.size(), vector<int>(5, 0));
        //base case
        dp[0][0] = 0;//第0天没有操作
        dp[0][1] = -prices[0];//第0天第一次买入
        dp[0][2] = 0;//第0天第一次卖出
        dp[0][3] = -prices[0];//第0天第一次买入
        dp[0][4] = 0;//第0天第一次卖出
        for (int i = 1; i < prices.size(); i++)
        {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
            dp[i][2] = max(dp[i - 1][2], dp[i - 1][1] + prices[i]);
            dp[i][3] = max(dp[i - 1][3], dp[i - 1][2] - prices[i]);
            dp[i][4] = max(dp[i - 1][4], dp[i - 1][3] + prices[i]); 
        }
        return max(dp[prices.size() - 1][2], dp[prices.size() - 1][4]);
    }
};
```
3. **空间优化**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        vector<int> dp(5, 0);
        //base case
        dp[0] = 0;//第0天没有操作
        dp[1] = -prices[0];//第0天第一次买入
        dp[2] = 0;//第0天第一次卖出
        dp[3] = -prices[0];//第0天第一次买入
        dp[4] = 0;//第0天第一次卖出
        for (int i = 1; i < prices.size(); i++)
        {
            dp[1] = max(dp[1], dp[0] - prices[i]);
            dp[2] = max(dp[2], dp[1] + prices[i]);
            dp[3] = max(dp[3], dp[2] - prices[i]);
            dp[4] = max(dp[4], dp[3] + prices[i]); 
        }
        return max(dp[2], dp[4]);
    }
};
```
---
### [188.买卖股票的最佳时机IV](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iv/)
1. **dfs**超时
```C++
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        map<pair<int, int>, int> memo;
        return dfs(k, 0, prices, memo);
    }
    int dfs(int k, int start, vector<int>& prices, map<pair<int, int>, int>& memo)
    {
        if (start >= prices.size() - 1) return 0;
        if (k == 0) return 0;
        if (memo.count(make_pair(k, start)) != 0) return memo[make_pair(k, start)];
        int res = 0;
        int curmin = prices[start];
        for (int sell = start + 1; sell < prices.size(); sell++)
        {
            curmin = min(curmin, prices[sell]);
            res = max(res, dfs(k - 1, sell + 1, prices, memo) + prices[sell] - curmin);//sell + 1,卖后的第二天继续操作
        }
        memo[make_pair(k, start)] = res;
        return res;
    }
};
```
2. **dp**
* 参考上一题。奇数买入，偶数卖出
```C++
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        //dp[i][j]第i天，j状态(包括0无操作、奇数买入，偶数卖出)
        vector<vector<int>> dp(n, vector<int>(2 * k + 1, 0));
        //basecase第0天买入，收入为-price[i]
        for (int j = 0; j < 2 * k + 1; j++)
            dp[0][j] = j % 2 == 1 ? -prices[0] : 0;

        for (int i = 1; i < n; i++)
            for (int j = 0; j < 2 * k - 1; j += 2)
            {
                dp[i][j + 1] = max(dp[i - 1][j + 1], dp[i - 1][j] - prices[i]);
                dp[i][j + 2] = max(dp[i - 1][j + 2], dp[i - 1][j + 1] + prices[i]);
            }
        return dp[n - 1][2 * k];
    }
};
```
---
### [309.最佳买卖股票时机含冷冻期](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)
* **dfs**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<int> memo(n, -1);
        return dfs(0, prices, memo);
    }
    int dfs(int start, vector<int>& prices, vector<int>& memo)
    {
        if (start >= prices.size() - 1) return 0;
        if (memo[start] != -1) return memo[start];
        int curmin = prices[start];
        int res = 0;
        for (int sell = start + 1; sell < prices.size(); sell++)
        {
            curmin = min(curmin, prices[sell]);
            res = max(res, dfs(sell + 2, prices, memo) + prices[sell] - curmin);//sell + 2冷冻期
        }
        memo[start] = res;
        return res;
    }
};
```
2. **dp**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        /*确定dp数组以及下标的含义
        dp[i][j]，第i天状态为j，所剩的最多现金为dp[i][j]。
        j的状态为：
        0：持有股票后的最多现金
        1：不持有股票（能购买）的最多现金
        2：不持有股票（冷冻期）的最多现金
        */
        vector<vector<int>> dp(n, vector<int>(3, 0));
        dp[0][0] = -prices[0];//持有
        dp[0][1] = 0;//不持有
        dp[0][2] = 0;//不持有、冷冻期
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);//冷冻期不能卖
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]);//今天不是冷冻期，能购买
            dp[i][2] = dp[i - 1][0] + prices[i];//冷冻期前一天肯定才卖出
        }
        return max(dp[n - 1][1], dp[n - 1][2]);
    }
};
```
**优化**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        /*确定dp数组以及下标的含义
        dp[i][j]，第i天状态为j，所剩的最多现金为dp[i][j]。
        j的状态为：
        0：持有股票后的最多现金
        1：不持有股票（能购买）的最多现金
        2：不持有股票（冷冻期）的最多现金
        */
        vector<int> dp(3, 0);
        dp[0] = -prices[0];//持有
        dp[1] = 0;//不持有
        dp[2] = 0;//不持有、冷冻期
        for (int i = 1; i < n; i++)
        {
            dp[0] = max(dp[0], dp[1] - prices[i]);//冷冻期不能卖
            dp[1] = max(dp[1], dp[2]);//今天不是冷冻期，能购买
            dp[2] = dp[0] + prices[i];//冷冻期前一天肯定才卖出
        }
        return max(dp[1], dp[2]);
    }
};
```
---
### [714.买卖股票的最佳时机含手续费](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/)
1. **dfs**超时
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<int> memo(n, -1);
        return dfs(0, prices, memo, fee);
    }
    int dfs(int start, vector<int>& prices, vector<int>& memo, int fee)
    {
        if (start >= prices.size() - 1) return 0;
        if (memo[start] != -1) return memo[start];
        int res = 0;
        int curmin = prices[start];
        for (int sell = start + 1; sell < prices.size(); sell++)
        {
            curmin = min(curmin, prices[sell]);
            res = max(res, dfs(sell + 1, prices, memo, fee) + prices[sell] - curmin - fee);
        }
        memo[start] = res;
        return res;
    }
};
```
2. **dp**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;//不持有
        dp[0][1] = -prices[0];//持有
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i] - fee);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
        }
        return dp[n - 1][0];
    }
```
---
**优化**
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<int> dp(2, 0);
        dp[0] = 0;//不持有
        dp[1] = -prices[0];//持有
        for (int i = 1; i < n; i++)
        {
            dp[0] = max(dp[0], dp[1] + prices[i] - fee);
            dp[1] = max(dp[1], dp[0] - prices[i]);
        }
        return dp[0];
    }
};
```
### [198.打家劫舍](https://leetcode-cn.com/problems/house-robber/)
1. **dp**
* dp[i]表示在第i天获得的最大金额
* basecase：第0家别无选择，第1家，0/1选大的
* 状态转移：相邻的不能偷（这间屋子偷了，说明上间屋子没有偷）dp[i] = max(dp[i - 2] + nums[i], dp[i - 1])
```C++
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[n - 1];
    }
};
```
**空间优化**
```C++
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        int firstday = nums[0];
        int secondday = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++)
        {
            int temp = secondday;
            secondday = max(firstday + nums[i], secondday);
            firstday = temp;
        }
        return secondday;
    }
};
```
---
### [213.打家劫舍II](https://leetcode-cn.com/problems/house-robber-ii/)
* **dp**
  偷第一间（不偷最后一间）、偷最后一间（不偷第一间）、都不偷（可以忽略，收益显然小于前面的情况）
```C++
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        return max(dp(0, n - 1, nums), dp(1, n, nums));
    }
    int dp(int start, int end, vector<int>& nums)
    {
        if (start == end) return nums[start];
        vector<int> dp(nums.size(), 0);
        dp[start] = nums[start];
        dp[start + 1] = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i < end; i++)
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        return dp[end - 1];
    }
};
```
* **优化**
```C++
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        return max(dp(0, n - 1, nums), dp(1, n, nums));
    }
    int dp(int start, int end, vector<int>& nums)
    {
        if (start == end) return nums[start];
        vector<int> dp(nums.size(), 0);
        int first = nums[start];
        int second = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i < end; i++)
        {
            int temp = second;
            second = max(first + nums[i], second);
            first = temp;
        }           
        return second;
    }
};
```
---
### [337.打家劫舍III](https://leetcode-cn.com/problems/house-robber-iii/)
1. 深度优先
```C++
class Solution {
public:
    struct state{
        int select;
        int noselect;
    };
    int rob(TreeNode* root) {
        if (root == nullptr) return 0;
        auto res = dfs(root);
        return max(res.select, res.noselect);
    }
    state dfs(TreeNode* root)
    {
        if (root == nullptr) return {0, 0};
        auto L = dfs(root->left);
        auto R = dfs(root->right);
        int select = root->val + L.noselect + R.noselect;
        int noselect = max(L.select, L.noselect) + max(R.select, R.noselect);
        return {select, noselect};
    }
};
```
2. **dp**
```C++
用dp数组取代state
```
---
### [152.乘积最大子数组](https://leetcode-cn.com/problems/maximum-product-subarray/)
* **动态规划**
* dp[i][0]/[1]代表nums[i]结尾的连续子数组的最小值和最大值
* //basecase,只有一个元素时，最大值，最小值均是自己
* 状态传递需要考虑当前数是正还是负！
```C++
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        //dp[i][0]/[1]代表nums[i]结尾的连续子数组的最小值和最大值
        vector<vector<int>> dp(n, vector<int>(2, 0));
        //basecase,只有一个元素时，最大值，最小值均是自己
        dp[0][1] = nums[0];
        dp[0][0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] >= 0)//当前数大于零
            {
                dp[i][0] = min(nums[i], nums[i] * dp[i - 1][0]);
                dp[i][1] = max(nums[i], nums[i] * dp[i - 1][1]);
            }
            else//当前数小于零，则大小性质转变
            {
                dp[i][0] = min(nums[i], nums[i] * dp[i - 1][1]);
                dp[i][1] = max(nums[i], nums[i] * dp[i - 1][0]);
            }
        }
        int res = INT_MIN;
        for (int i = 0; i < n; i++)
            res = max(res, dp[i][1]);
        return res;
    }
};
```
**空间优化**
```C++
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int res = INT_MIN;
        int minnum = nums[0];
        int maxnum = nums[0];
        res = max(maxnum, res);//只有一个数/第一个数就是结果
        for (int i = 1; i < n; i++)
        {
            if (nums[i] >= 0)//当前数大于零
            {
                minnum = min(nums[i], nums[i] * minnum);
                maxnum = max(nums[i], nums[i] * maxnum);
            }
            else//当前数小于零，则大小性质转变
            {
                int temp = minnum;//下一步会更新minnum，需要保存当前值
                minnum = min(nums[i], nums[i] * maxnum);
                maxnum = max(nums[i], nums[i] * temp);
            }
            res = max(maxnum, res);
        }
        return res;
    }
};
```
---
### [面试题17.16.按摩师](https://leetcode-cn.com/problems/the-masseuse-lcci/submissions/)
* **打家劫舍动态规划**
```C++
class Solution {
public:
    int massage(vector<int>& nums) {
        int n = nums.size(); 
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp.back();
    }
};
```
---


## BFS & 图问题
### [1162.地图分析](https://leetcode-cn.com/problems/as-far-from-land-as-possible/)
* **队列逐层**
* **方向数组**
* **visited数组**
* **合法判断**
```C++
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int N = grid.size();
        queue<pair<int, int>> que;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                if (grid[i][j] != 0)
                    que.push(make_pair(i, j));
        int landSize = que.size();
        if (landSize == 0 || landSize == N * N)
            return -1;
        vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};//方向数组
        vector<vector<bool>> visited(N, vector<bool>(N, false));//是否访问
        int steps = 0;
        while (!que.empty())
        {
            int curSize = que.size();
            while (curSize--)//逐层遍历
            {
                auto point = que.front();
                que.pop();
                int x = point.first;
                int y = point.second;
                for(auto d : directions)
                {
                    auto curX = x + d[0], curY = y + d[1];
                    if (inArea(curX, curY, N) && !visited[curX][curY] && grid[curX][curY] == 0)//未做扩散的海洋区域
                    {
                        visited[curX][curY] = true;
                        que.push(make_pair(curX, curY));
                    }
                }
            }
            steps++;
        }
        return steps - 1;
    }

    bool inArea(int x, int y, int N)
    {
        return (x >= 0 && x < N && y >= 0 && y < N);
    }
};
```
---
### [279.完全平方数](https://leetcode-cn.com/problems/perfect-squares/)
1. BFS
* **队列逐层**
* **visited数组**
```C++
class Solution {
public:
    int numSquares(int n) {
        queue<int> que;
        vector<int> visited(n, false);
        que.push(n);
        int count = 0;
        while (!que.empty())
        {
            int curSize = que.size();
            while (curSize--)
            {
                auto num = que.front();
                que.pop();
                for (int i = 1; i * i <= num; ++i)
                {
                    int curnum = num - i * i;
                    if (curnum == 0) return count + 1;
                    if (!visited[curnum])
                    {
                        visited[curnum] = true;
                        que.push(curnum);
                    }
                }
            }
            count++;
        }
        return -1;
    }  
};
```

1. **dp**
```C++
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i)
            for (int j = 1; j * j <= i; ++j)
                dp[i] = min(dp[i], dp[i - j * j] + 1);
        return dp.back();   
    }
};
```
---

### [111.二叉树的最小深度](https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/)
1. **BFS**
```C++
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int step = 1;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; ++i)
            {
                auto node = q.front();
                q.pop();
                if (node->left == nullptr && node->right == nullptr) return step;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);              
            }
            step++;
        }
        return step;
    }
};
```
2. **DFS**
```C++
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr  && root->right == nullptr) return 1;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if (root->left == nullptr  || root->right == nullptr) return left + right + 1;
        return min(left, right) + 1;
    }
};
```
---

### [752.打开转盘锁](https://leetcode-cn.com/problems/open-the-lock/)
* **visited数组**
* **逐层进队**
* **InValid数组**
```C++
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> Invalid;
        for (auto elem : deadends)
            Invalid.insert(elem);
        unordered_set<string> visited;
        queue<string> q;
        q.push("0000");
        visited.insert("0000");
        int step = 0;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                auto temp = q.front();
                q.pop();
                if (Invalid.count(temp) != 0)
                    continue;
                if (temp == target) return step;

                for (int pos = 0; pos < 4; pos++)
                {
                    string upnum = up(temp, pos);
                    if (visited.count(upnum) == 0)
                    {
                        q.push(upnum);
                        visited.insert(upnum);
                    }
                    string downnum = down(temp, pos);
                    if (visited.count(downnum) == 0)
                    {
                        q.push(downnum);
                        visited.insert(downnum);
                    }
                }
            }
            step++;
        }
        return -1;
    }

    string up(const string& str, int pos)
    {
        string s = str;
        s[pos] = s[pos] == '9' ? '0' : s[pos] + 1;
        return s;
    }
    string down(const string& str, int pos)
    {
        string s = str;
        s[pos] = s[pos] == '0' ? '9' : s[pos] - 1;
        return s;
    }
};
```

---

### [773.滑动谜题](https://leetcode-cn.com/problems/sliding-puzzle/)
* **将二维数组转换为一维数组**， 建立上下左右的映射关系
* **visited set**访问数组
```C++
class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start;
        for (auto row : board)
            for (auto num : row)
                start += num + '0';
        string target = "123450";
        vector<vector<int>> next{{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};//2*3数组转为一维的方向下标
        queue<string> q;
        q.push(start);
        unordered_set<string> visited;
        visited.insert(start);
        int steps = 0;
        
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                string curRes = q.front();
                q.pop();
                if (curRes == target) return steps;
                int index = 0;
                while (curRes[index] != '0') index++;
                for (auto choose : next[index])
                {
                    string temp = curRes;
                    swap(temp[choose], temp[index]);
                    if (visited.count(temp) == 0)
                    {
                        visited.insert(temp);
                        q.push(temp);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};
```
---

### [剑指 Offer 13.机器人的运动范围](https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/)
1. **BFS**
```C++
class Solution {
public:
    int movingCount(int m, int n, int k) {
        if (k == 0) return 1;
        vector<vector<int>> directions{{0, 1}, {1, 0}};
        set<pair<int, int>> visited;
        queue<pair<int, int>> q;
        q.push(make_pair(0, 0));
        visited.insert(make_pair(0, 0));
        int count = 1;
        while (!q.empty())
        {
            auto curPos = q.front();
            q.pop();
            for (auto d : directions)
            {
                int newX = curPos.first + d[0];
                int newY = curPos.second + d[1];
                if (newX > n - 1 || newY > m - 1 || sum(newX, newY) > k) continue;
                if (visited.count(make_pair(newX, newY)) == 0)
                {
                    visited.insert(make_pair(newX, newY));
                    q.push(make_pair(newX, newY));
                    count++;
                }
            } 
        }
        return count;
    }
    int sum(int x, int y)
    {
        int res = 0;
        while (x)
        {
            res += x % 10;
            x /= 10;
        }
        while (y)
        {
            res += y % 10;
            y /= 10;
        }
        return res;
    }
};
```
2. **DFS**
```C++
class Solution {
public:
    int count = 0;
    int movingCount(int m, int n, int k) {
        if (k == 0) return 1;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        dfs(0, 0, m, n, k, visited);
        return count;
    }

    void dfs(int x, int y, int m, int n, int k, vector<vector<bool>>& visited) 
    {
        if (x == m || y == n || sum(x, y) > k || visited[x][y] == true) return;
        visited[x][y] = true;
        count++;
        dfs(x + 1, y, m, n, k, visited);
        dfs(x, y + 1, m, n, k, visited);
    }

    int sum(int x, int y)
    {
        int res = 0;
        while (x)
        {
            res += x % 10;
            x /= 10;
        }
        while (y)
        {
            res += y % 10;
            y /= 10;
        }
        return res;
    }
};
```
---

### [130.被围绕的区域](https://leetcode-cn.com/problems/surrounded-regions/)
1. **BFS**
```C++
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int row = board.size();
        if (row == 0) return;
        int col = board.at(0).size();
        queue<pair<int, int>> q;

        for (int i = 0; i < row; i++)
        {
            if (board[i][0] == 'O')
                q.emplace(i, 0);
            if (board[i][col - 1] == 'O')
                q.emplace(i, col - 1);
        }
        for (int j = 0; j < col; j++)
        {
            if (board[0][j] == 'O')
                q.emplace(0, j);
            if (board[row - 1][j] == 'O')
                q.emplace(row - 1, j);
        }

        while (!q.empty())
        {
            auto point = q.front();
            q.pop();
            int x = point.first, y = point.second;
            board[x][y] = '#';

            for (auto d : directions)
            {
                int newX = x + d[0];
                int newY = y + d[1];
                if (newX < 0 || newY < 0 || newX > row - 1 || newY > col - 1 || board[newX][newY] != 'O') continue;
                q.emplace(newX, newY);
            }
        }

        for (auto& row : board)
            for (auto& ele : row)
            {
                if (ele == '#')
                    ele = 'O';
                else
                    ele = 'X';
            } 
    }
};
```
2. **DFS**
```C++
class Solution {
public:
    int row, col;
    void dfs(int x, int y, vector<vector<char>>& board)
    {
        if (x < 0 || y < 0 || x > row - 1 || y > col - 1 || board[x][y] != 'O') return;
        board[x][y] = '#';
        dfs(x + 1, y, board);
        dfs(x, y + 1, board);
        dfs(x - 1, y, board);
        dfs(x, y - 1, board);
    }

    void solve(vector<vector<char>>& board) {
        row = board.size();
        if (row == 0) return;
        col = board.at(0).size();

        for (int i = 0; i < row; i++)
        {
            dfs (i, 0, board);
            dfs (i, col - 1, board);
        }
        for (int j = 0; j < col; j++)
        {
            dfs (0, j, board);
            dfs (row - 1, j, board);
        }

        for (auto& row : board)
            for (auto& ele : row)
            {
                if (ele == '#')
                    ele = 'O';
                else
                    ele = 'X';
            } 
    }
};
```
3. **并查集**
```C++
class UnionFind {
public:
    int count;
    vector<int> parent;
    vector<int> size;
public:
    UnionFind(int n)
    {
        count = n;
        parent.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    ~UnionFind(){}
    int find(int x)
    {
        while (x != parent[x])
        {
            parent[x] = parent[parent[x]];
            x = parent[x];
        }
        return x;
    }
    void toUnion(int p, int q)
    {
        int proot = find(p), qroot = find(q);
        if (proot == qroot) return;
        if (size[proot] > size[qroot])
        {
            parent[qroot] = proot;
            size[proot] += size[qroot];
        }
        else
        {
            parent[proot] = qroot;
            size[qroot] += size[proot];
        }
        count--;
    }
    bool isConnected(int p, int q)
    {
        return find(p) == find(q);
    }
};
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if (m == 0) return;
        int n = board[0].size();
        UnionFind UF(m * n + 1);
        int dummy = m * n;

        vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        
        for (int i = 0; i < m; i++)
        {
            if (board[i][0] == 'O') UF.toUnion(i * n + 0, dummy);
            if (board[i][n - 1] == 'O') UF.toUnion(i * n + n - 1, dummy);
        }
        for (int j = 0; j < n; j++)
        {
            if (board[0][j] == 'O') UF.toUnion(0 * n + j, dummy);
            if (board[m - 1][j] == 'O') UF.toUnion((m - 1) * n + j, dummy);
        }
        for (int  i = 1; i < m - 1; i++)
            for (int j = 1; j < n - 1; j++)
            {
                if (board[i][j] == 'O')
                {
                    for (auto d : directions)
                    {
                        int newx = i + d[0], newy = j + d[1];
                        if (board[newx][newy] == 'O') UF.toUnion(newx * n + newy, i * n + j);
                    }
                }
            }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (!UF.isConnected(i * n + j, dummy))
                    board[i][j] = 'X';
    }
};
```
---

### [994.腐烂的橘子](https://leetcode-cn.com/problems/rotting-oranges/)
* **BFS**
```C++
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid.at(0).size();

        queue<pair<int, int>> q;
        int steps = 0, count_1 = 0;
        vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1) count_1++;
                if (grid[i][j] == 2) q.emplace(i, j);
            }
                
        if (count_1 == 0) return 0;            
        if (q.size() == 0) return -1;

        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                auto curBadOrange = q.front();
                q.pop();
                int x = curBadOrange.first, y = curBadOrange.second;
                for (auto d : directions)
                {
                    int newx = x + d[0], newy = y + d[1];
                    if (newx < 0 || newx > m - 1 || newy < 0 || newy > n - 1 || grid[newx][newy] != 1) continue;
                    grid[newx][newy] = 2;
                    q.emplace(newx, newy);
                }
            }
            steps++;
        }

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1) return -1;
        return steps - 1;
    }
};
```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

## 常用算法
>### 前缀和
>前缀和数组preSum的含义也很好理解，preSum[i]就是nums[0..i-1]的和。那么如果我们想求nums[i..j]的和，只需要一步操作preSum[j+1]-preSum[i]即可（j+1 - i）
### [560.和为K的子数组](https://leetcode-cn.com/problems/subarray-sum-equals-k/)
1. **前缀和**
```C++
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        sum[0] = 0;
        for (int i = 0; i < n; i++)
            sum[i + 1] = sum[i] + nums[i];
        int res = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 0; j < i; j++)
                if (sum[i] - sum[j] == k)
                    res++;
        return res; 
    }
};
```
2. **前缀和** + **哈希优化**
* 将sum[i] - sum[j] == k ->sum[i] == sum[j] + k,进行哈希优化
```C++
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        //哈希记录该前缀和出现的次数
        unordered_map<int, int> preSumCount;
        preSumCount[0] = 1;
        int res = 0, sum0_i = 0;
        for (int i = 0; i < n; i++)
        {
            sum0_i += nums[i];
            int sum0_j = sum0_i - k;
            if (preSumCount.count(sum0_j) != 0)
                res += preSumCount[sum0_j];
            preSumCount[sum0_i]++; 
        }
        return res; 
    }
};
```
---
### [1248.统计「优美子数组」](https://leetcode-cn.com/problems/count-number-of-nice-subarrays/)
1. 滑动窗口 [题解](https://leetcode-cn.com/problems/count-number-of-nice-subarrays/solution/hua-dong-chuang-kou-qian-zhui-he-bi-xu-miao-dong-b/)
   * 统计第 1 个奇数左边的偶数个数 leftEvenCnt。 这 leftEvenCnt 个偶数都可以作为「优美子数组」的起点，因此起点的选择有 leftEvenCnt + 1 种
   * 统计第 k 个奇数右边的偶数个数 rightEvenCnt 。 这 rightEvenCnt 个偶数都可以作为「优美子数组」的终点，因此终点的选择有 rightEvenCnt + 1 种
   * 因此「优美子数组」左右起点的选择组合数为 (leftEvenCnt + 1) * (rightEvenCnt + 1)。

```C++
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        int count = 0, res = 0;
        while (j < n)
        {
            if (nums[j++] % 2 == 1)
                count++;         
            if (count == k)
            {
                int temp = j;
                while (j < n && (nums[j] % 2 == 0))
                    j++;
                int rightEvenCount = j - temp;
                int leftEvenCount = 0;
                while (nums[i] % 2 == 0)
                {
                    leftEvenCount++;
                    i++;
                }
                res += (leftEvenCount + 1) * (rightEvenCount + 1);
                i++;
                count--;
            }
        }
        return res;
    }
};
```
2. **前缀和** + **哈希优化**

```C++
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //map的键是前缀和、值是前缀和的个数
        //这里的前缀和技术的个数
        unordered_map<int, int> preSum;
        preSum[0] = 1;
        //遍历计算前缀和，并在res中累计计算满足要求的数
        int res = 0, curSum = 0;
        for (auto num : nums)
        {
            curSum += num & 1;
            if (preSum.count(curSum - k) != 0)
                res += preSum[curSum - k];
            preSum[curSum]++;
        }
        return res;
    }
};
```
### [974. 和可被 K 整除的子数组](https://leetcode-cn.com/problems/subarray-sums-divisible-by-k/)
1. **前缀和**
```C++
class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int count = 0;
        vector<int> preSum(A.size() + 1, 0);
        //preSum[0] = 0;
        for (int i = 0; i < A.size(); i++)
            preSum[i + 1] = A[i] + preSum[i];
        for (int i = 1; i <= A.size(); i++)
            for (int j = 0; j < i; j++)
                if ((preSum[i] - preSum[j]) % K == 0) count++;
        return count;
    }
};
```
2. **前缀和** + **哈希优化**
**同余数**
```C++
class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int, int> preSumKCount;
        preSumKCount[0] = 1;
        int sum = 0, count = 0;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            int mod = (sum % K + K) % K;//同余
            if (preSumKCount.count(mod) != 0)
                count += preSumKCount[mod];
            preSumKCount[mod]++;
        }
        return count;
    }
};
```

---
### [454.四数相加II](https://leetcode-cn.com/problems/4sum-ii/)
* **利用哈希**
* 分组哈希，AB一组求和的个数，CD一组求在AB和中是否有CD和负数的值存在，统计个数即可
```C++
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sum1_2, sum3_4;
        int res = 0;
        for (auto num1 : nums1)
            for (auto num2 : nums2)
                sum1_2[num1 + num2]++;
        for (auto num3 : nums3)
            for (auto num4 : nums4)
            {
                if (sum1_2.count(-num3 - num4) != 0)
                    res += sum1_2[-num3 - num4];
                sum3_4[num3 + num4]++;
            }
        return res;    
    }
};
```
---

### [303. 区域和检索 - 数组不可变](https://leetcode-cn.com/problems/range-sum-query-immutable/)
**前缀和**
```C++
class NumArray {
public:
    NumArray(vector<int>& nums) {
        m_Nums = nums;
        sum();
    }
    
    int sumRange(int left, int right) {
        return m_preSum[right + 1] - m_preSum[left];
    }

private:
    vector<int> m_Nums;
    vector<int> m_preSum;
    void sum()
    {
        m_preSum.resize(m_Nums.size() + 1, 0);
        for (int i = 0; i < m_Nums.size(); i++)
            m_preSum[i + 1] = m_preSum[i] + m_Nums[i];
    }
};
```
---

### [304. 二维区域和检索 - 矩阵不可变](https://leetcode-cn.com/problems/range-sum-query-2d-immutable/)
1. **一维前缀和**
* 每次逐行计算当前行的前缀和
```C++
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) : sumbyrow(matrix.size(), vector<int>(matrix[0].size() + 1, 0))
    {
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                sumbyrow[i][j + 1] = sumbyrow[i][j] + matrix[i][j];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for (int i = row1; i <= row2; i++)
            sum += sumbyrow[i][col2 + 1] - sumbyrow[i][col1];
        return sum;
    }
private:
    vector<vector<int>> sumbyrow;
};
```
2. **二维前缀和**
* [参考](https://leetcode-cn.com/problems/range-sum-query-2d-immutable/solution/ru-he-qiu-er-wei-de-qian-zhui-he-yi-ji-y-6c21/)
```C++
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) : sums(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0))
    {
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                sums[i + 1][j + 1] = sums[i][j + 1] + sums[i + 1][j] - sums[i][j] + matrix[i][j];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return sums[row2 + 1][col2 + 1] - sums[row1][col2 + 1] - sums[row2 + 1][col1] + sums[row1][col1];
    }
private:
    vector<vector<int>> sums;
};
```
---
---
---


>### 树状数组 ： 解决动态前缀和问题，常规前缀和方法在数组变化的时候，更新或者查询的效率会降低
* [参考](https://blog.csdn.net/Small_Orange_glory/article/details/81290634?utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7EBlogCommendFromMachineLearnPai2%7Edefault-1.control&dist_request_id=&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7EBlogCommendFromMachineLearnPai2%7Edefault-1.control)
* lowbit函数
   * lowbit函数: lowbit这个函数的功能就是求某一个数的二进制表示中最低的一位1，举个例子，x = 6，它的二进制为110，那么lowbit(x)就返回2，因为最后一位1表示2
   * 求解：
    ```C++
    int lowbit(x) 
    {	
        return x - (x & (x - 1));
    }
    int lowbit(x) 
    {	
        return x & -x;
    }
    ```
### [307. 区域和检索 - 数组可修改](https://leetcode-cn.com/problems/range-sum-query-mutable/)
针对不同的题目，我们有不同的方案可以选择（假设我们有一个数组）：

    数组不变，求区间和：「前缀和」、「树状数组」、「线段树」
    多次修改某个数，求区间和：「树状数组」、「线段树」
    多次整体修改某个区间，求区间和：「树状数组」、「线段树」
    多次将某个区间变成同一个数，求区间和：「线段树」

1. **树状数组**（前缀和超时）
* 前缀和插入和查询为o1/on / on/o1 树状数组综合了性能
```C++
class NumArray {
public:
    NumArray(vector<int>& nums) {
        m_Nums = nums;
        tree.resize(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++)
            add(i + 1, nums[i]);
    }
    
    void update(int index, int val) {
        add(index + 1, val - m_Nums[index]);
        m_Nums[index] = val;
    }
    
    int sumRange(int left, int right) {
        return query(right + 1) - query(left);
    }
private:
    vector<int> tree;
    vector<int> m_Nums;
    int lowbit(int x)
    {
        return x & (-x);//x - (x & (x - 1));
    }
    void add(int index, int value)//原始数组单点添加（树状数组相关位置会发生整体改变）
    {
        int n = tree.size();
        while (index < n)
        {
            tree[index] += value;
            index += lowbit(index);
        }
    }
    int query(int index)//树状数组前缀和
    {
        int res = 0;
        while(index > 0)
        {
            res += tree[index];
            index -= lowbit(index);
        }
        return res;
    }
};
```
---
### [315.计算右侧小于当前元素的个数](https://leetcode-cn.com/problems/count-of-smaller-numbers-after-self/)
1. **树状数组**
   * 建立不重复、排序的数组
   * 统计数字出现的个数、
   * 问题转换为反向的计算前缀和
   * 采用树状数组降低时间复杂度
```C++
class F_Tree
{
private:
    vector<int> tree;
    int len;

    //lowbit函数
    int lowbit(int x)
    {
        return x & (-x);
    }
public:
    F_Tree(int n) : len(n)
    {
        tree.resize(n + 1, 0);
    }

    ~F_Tree(){}

    //单点更新、由下至上
    void add(int index, int value)
    {
        while (index <= len)
        {
            tree[index] += value;
            index += lowbit(index);
        }
    }

    //查询前缀和
    int query(int index)
    {
        int res = 0;
        while (index > 0)
        {
            res += tree[index];
            index -=lowbit(index);
        }
        return res;
    }
};

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        if (n == 0)
            return res;
        
        //去重 + 排序
        set<int> newNum(nums.begin(), nums.end());

        //建立数和 index 的映射关系
        map<int, int> num_To_Index;
        int index = 1;
        for (auto num : newNum)
            num_To_Index[num] = index++;

        //FenwickTree 进行前缀和统计
        F_Tree f_tree(newNum.size() + 1);
        //依据题意、从后往前
        for (int i = n - 1; i >= 0; i--)
        {
            auto curindex = num_To_Index[nums[i]];//nums数组中的数在set中的index
            f_tree.add(curindex, 1);//出现一次加一次
            res.push_back(f_tree.query(curindex - 1));//计算此前出现的前缀和，故为curindex - 1
        }
        reverse(res.begin(), res.end());
        return res;

    }
};
```
---
### [剑指Offer 51.数组中的逆序对](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/)
* **树状数组** 类似上一题
```C++
class FenwickTree
{
public:
    FenwickTree(int n) : len(n)
    {
        tree.resize(n + 1, 0);
    }
    ~FenwickTree(){}
    void add(int index, int value)
    {
        while (index <= len)
        {
            tree[index] += value;
            index += lowbit(index);
        }
    }

    int query(int index)
    {
        int res = 0;
        while (index > 0)
        {
            res += tree[index];
            index -= lowbit(index);
        }
        return res;
    }

private:
    int len;
    vector<int> tree;

    int lowbit(int x) 
    {
        return x & (-x);
    }
};

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        if (n == 0 || n == 1) return 0;
        int count = 0;

        set<int> newNums(nums.begin(), nums.end());
        map<int, int> num_To_Index;//建立set中数和对应index的关系
        int index = 1;
        for (auto num : newNums)
            num_To_Index[num] = index++;
        FenwickTree treeNums(newNums.size());//important

        for (int i = n - 1; i >= 0; --i)
        {
            auto curI = num_To_Index[nums[i]];
            treeNums.add(curI, 1);
            count += treeNums.query(curI - 1);
        }
        return count;
    }
};
```
---
### [493. 翻转对](https://leetcode-cn.com/problems/reverse-pairs/)
* **树状数组**
```C++
class FenwickTree
{
private:
    int len;
    vector<int> tree;
    int lowbit(int x)
    {
        return x & (-x);
    }
public:
    FenwickTree(int n) : len(n)
    {
        tree.resize(n + 1, 0);
    }

    void add(int index, int value)
    {
        while(index <= len)
        {
            tree[index] += value;
            index += lowbit(index);
        }
    }

    int query(int index)
    {
        int res = 0;
        while (index > 0)
        {
            res += tree[index];
            index -= lowbit(index);
        }
        return res;
    }
};

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        if (n == 0 || n == 1) return 0;
        int res = 0;

        set<long long> newNums;
        for (auto num : nums)
        {
            newNums.insert(num);
            ////////////////////////////
            newNums.insert((long long)num * 2);
            //////////////////////////////
        }
        int index = 1;
        map<long long, int> num_To_Index;
        for (auto num : newNums)
            num_To_Index[num] = index++;
        FenwickTree treeNums(newNums.size());
        for (int i = 0; i < n; ++i)
        {    
            //////////////////////////////
            int left = num_To_Index[(long long)nums[i] * 2];
            //////////////////////////////
            int right = num_To_Index.size();
            res += treeNums.query(right) - treeNums.query(left); 
            int curI = num_To_Index[nums[i]];
            treeNums.add(curI, 1);       
        }
        return res;
    }
};
```
---
>### 归并排序
### [剑指 Offer 51. 数组中的逆序对](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/)
* **归并排序**
* 在过程中计算逆序对，参考[题解](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/solution/bao-li-jie-fa-fen-zhi-si-xiang-shu-zhuang-shu-zu-b/)
```C++
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        vector<int> newNums = nums;
        return mergeSort(newNums, 0, n - 1);
    }

    int mergeSort(vector<int>& nums, int lo, int hi)
    {
        if (lo == hi) return 0;
        
        int mid = lo + (hi - lo) / 2;
        int leftPairs = mergeSort(nums, lo, mid);//计算左侧逆序对
        int rightPairs = mergeSort(nums, mid + 1, hi);//计算右侧逆序对
        //数组已经有序，那么就不存在crossPairs问题
        if (nums[mid] <= nums[mid + 1]) return leftPairs + rightPairs;

        int crossPairs = merge(nums, lo, mid, hi);
        return leftPairs + rightPairs + crossPairs;
    }

    int merge(vector<int>& nums, int lo, int mid, int hi)
    {
        int i = lo, j = mid + 1;
        vector<int> temp;
        int count = 0;

        while (i <= mid && j <= hi)
        {
            if (nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
            {
                temp.push_back(nums[j++]);
                count += mid - i + 1;
            }
        }
        while (i <= mid)
            temp.push_back(nums[i++]);
        while (j <= hi)
            temp.push_back(nums[j++]);
        
        auto it = temp.begin();
        while (lo <= hi) nums[lo++] = *it++;
        return count;
    }
};
```
---

### [315.计算右侧小于当前元素的个数](https://leetcode-cn.com/problems/count-of-smaller-numbers-after-self/)
* **索引 + 归并排序**
* merge1超时
```C++
class Solution {
public:
    vector<int> res;
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};

        vector<pair<int, int>> num_With_Index;
        for (int i = 0; i < n; ++i)
            num_With_Index.emplace_back(nums[i], i);
        res.resize(n, 0);
        mergeSort(num_With_Index, 0, n - 1);
        return res;
    }

    void mergeSort(vector<pair<int, int>>& arr, int lo, int hi)
    {
        if (lo == hi) return;
        int mid = lo + (hi - lo) / 2;
        mergeSort(arr, lo, mid);
        mergeSort(arr, mid + 1, hi);
        if (arr[mid].first <= arr[mid + 1].first) return;
        merge(arr, lo, mid, hi);
    }

    /*void merge1(vector<pair<int, int>>& arr, int lo, int mid, int hi)
    {
        int i = lo, j = mid + 1;
        vector<pair<int, int>> temp;
        while (i <= mid && j <= hi)
        {
            if (arr[i].first <= arr[j].first)
                temp.push_back(arr[i++]);
            else
            {            
                for (int index = i; index <= mid; index++)
                    res[arr[index].second]++;
                temp.push_back(arr[j++]);
            }
        }

        while (i <= mid)
            temp.push_back(arr[i++]);
        while (j <= hi)
            temp.push_back(arr[j++]);
        
        auto it = temp.begin();

        while (lo <= hi) arr[lo++] = *it++;
    }*/

        void merge(vector<pair<int, int>>& nums, int left, int mid, int right){
        int i = left, j = mid + 1;
        int k = left;

        vector<pair<int, int>> sort_nums;

        while (i <= mid && j <= right){
            if (nums[i].first <= nums[j].first){
                res[nums[i].second] += j - mid - 1;
                sort_nums.push_back(nums[i++]);
            }else if (nums[i].first > nums[j].first){
                sort_nums.push_back(nums[j++]);
            }
        }

        while (i <= mid){
            res[nums[i].second] += j - mid - 1;
            sort_nums.push_back(nums[i++]);
        }

        while (j <= right){
            sort_nums.push_back(nums[j++]);
        }

        for (int m = 0, n = left; m < sort_nums.size(); m++, n++){
            nums[n] = sort_nums[m];
        }
    }

};
```
---

### [493. 翻转对](https://leetcode-cn.com/problems/reverse-pairs/)
* **归并排序**
```C++
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        return mergeSort(nums, 0, n - 1);
    }

    int mergeSort(vector<int>& nums, int lo, int hi)
    {
        if (lo == hi)
            return 0;
        int mid = lo + (hi - lo) / 2;
        int leftPairs = mergeSort(nums, lo, mid);
        int rightPairs = mergeSort(nums, mid + 1, hi);

        return leftPairs + rightPairs + merge(nums, lo, mid, hi);
    }

    int merge(vector<int>& nums, int lo, int mid, int hi)
    {
        int i = lo, j = mid + 1;
        int res = 0;
        vector<int> temp;

        while (i <= mid && j <= hi)
        {
            if (nums[i] > 2 * static_cast<long>(nums[j]))
            {
                res += mid - i + 1;
                j++;
            }
            else i++;
        }
        i = lo, j = mid + 1;
        while (i <= mid && j <= hi)
            temp.push_back(nums[i] <= nums[j] ? nums[i++] : nums[j++]);
        while (i <= mid)
            temp.push_back(nums[i++]);
        while (j <= hi)
            temp.push_back(nums[j++]);

        for (int i = 0; i < temp.size(); ++i)
            nums[lo + i] = temp[i];

        return res;

    }
};
```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

>### 差分数组
>前缀和数组preSum的含义也很好理解，preSum[i]就是nums[0..i-1]的和。那么如果我们想求nums[i..j]的和，只需要一步操作preSum[j+1]-preSum[i]即可（j+1 - i）

### []()
*
```C++

```
---
>### 前缀树
*
```C++

```
---

*
```C++

```
---

*
```C++

```
---

*
```C++

```
---

*
```C++

```
---


## 剑指offer系列
test

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---

### []()
*
```C++

```
---
---









